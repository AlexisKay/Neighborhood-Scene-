#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "CSCIx229.h"
#include "details.h"
#include "house1.h"
#include "house2.h"
#include "house3.h"

#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


/* 
Alexis McBeain 
CSCI 4229 
Final Project


*Some of these functions were given from previous homework examples


 */



//MANY angle variables 
int mode=1;      
int th=0;         
int ph=0;         
int fov=60;       
double asp=1;     
double dim=5.0;   
float a = 1.0;
float b = 1.0;
float c = 0.0;
int first = 0;
int rot = 180.0;
double Ex = 0;
double Ey = 1.5;
double Ez = 15;
double Vx =0;
double Vz=0;
int axes=0; 
int window_width = 800;
int window_height = 800;
int left_click_down = 0;
int saved_th = 0;
int saved_ph = 0;
unsigned int texture[21]; 


//light variables--------
int move=1; 
int light     =   1;  // Lighting
int one       =   1;  // Unit value
int distance  =   60; // Light distance
int inc       =  2;   // Ball increment
int smooth    =   1;  // Smooth/Flat shading
int local     =   0;  // Local Viewer Model
int emission  =   0;  // Emission intensity (%)
int ambient   =  10;  // Ambient intensity (%)
int diffuse   =  50;  // Diffuse intensity (%)
int specular  =   0;  // Specular intensity (%)
int shininess =   0;  // Shininess (power of two)
float shiny   =   1;  // Shininess (value)
int zh        =  90;  // Light azimuth
float ylight  =   12;  // Elevation of light
float temp = 0.0;


double mouse_rotation(double delta, double mid)
{
  return 180 * (delta / mid);
}

void ground(){
	
glPushMatrix();
   glEnable(GL_TEXTURE_2D);
   
	/*  */ //DARK GREEN
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.1f, 0.0f);
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-100,-1.1,-100);
		glTexCoord2f(1,0); glVertex3f(-100,-1.1,100);
		glTexCoord2f(1,1); glVertex3f(100,-1.1,100);
		glTexCoord2f(0,1); glVertex3f(100,-1.1,-100);
   glEnd();
   
   glPopMatrix();
   glDisable(GL_TEXTURE_2D);
}
void street(){
	glPushMatrix();
	
	
	glEnable(GL_TEXTURE_2D);
	
	float x1,y1,x2,y2;
	float angle;
	double radius=10;
	
	glBindTexture(GL_TEXTURE_2D, texture[2]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);    
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glColor3f(0.5f,0.5f,0.5f);
	glBegin(GL_QUADS);
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,10);
		glTexCoord2f(1,0); glVertex3f(4,-.9,10);
		glTexCoord2f(1,1); glVertex3f(4,-.9,-1);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,-1);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,20);
		glTexCoord2f(1,0); glVertex3f(4,-.9,20);
		glTexCoord2f(1,1); glVertex3f(4,-.9,10);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,10);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,30);
		glTexCoord2f(1,0); glVertex3f(4,-.9,30);
		glTexCoord2f(1,1); glVertex3f(4,-.9,20);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,20);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,40);
		glTexCoord2f(1,0); glVertex3f(4,-.9,40);
		glTexCoord2f(1,1); glVertex3f(4,-.9,30);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,30);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,50);
		glTexCoord2f(1,0); glVertex3f(4,-.9,50);
		glTexCoord2f(1,1); glVertex3f(4,-.9,40);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,40);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,65);
		glTexCoord2f(1,0); glVertex3f(4,-.9,65);
		glTexCoord2f(1,1); glVertex3f(4,-.9,50);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,50);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0); glVertex3f(-4,-.9,75);
		glTexCoord2f(1,0); glVertex3f(4,-.9,75);
		glTexCoord2f(1,1); glVertex3f(4,-.9,65);
		glTexCoord2f(0,2); glVertex3f(-4,-.9,65);
	glEnd();
	
	
	x1 = .2,y1=.2;
	glColor3f(0.5f,0.5f,0.5f);
	glTranslatef(-.5,-.9,-10);
	glRotatef(90, 1,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texture[2]);
	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(x1,y1);
	glVertex2f(x1,y1);

	for (angle=1.0f;angle<361.0f;angle+=0.1)
	{
		x2 = x1+sin(angle)*radius;
		y2 = y1+cos(angle)*radius;
		glNormal3d(0,1,0);
		glTexCoord2f(x2,y2);
		glVertex2f(x2,y2);
	}

	glEnd();
	
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	
}
void sidewalk(){
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	
	float x1,y1,x2,y2;
	float angle;
	double radius=12;
	
	glBindTexture(GL_TEXTURE_2D, texture[3]);
	glColor3f(0.8f,0.8f,0.8f);
	glBegin(GL_QUADS);
	
	//mainroad
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,0);
		glTexCoord2f(1,0);glVertex3f(6,-1,0);
		glTexCoord2f(1,1);glVertex3f(6,-1,-13);
		glTexCoord2f(0,1);glVertex3f(-6,-1,-13);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,10);
		glTexCoord2f(1,0);glVertex3f(6,-1,10);
		glTexCoord2f(1,1);glVertex3f(6,-1,0);
		glTexCoord2f(0,1);glVertex3f(-6,-1,0);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,20);
		glTexCoord2f(1,0);glVertex3f(6,-1,20);
		glTexCoord2f(1,1);glVertex3f(6,-1,10);
		glTexCoord2f(0,1);glVertex3f(-6,-1,10);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,30);
		glTexCoord2f(1,0);glVertex3f(6,-1,30);
		glTexCoord2f(1,1);glVertex3f(6,-1,20);
		glTexCoord2f(0,1);glVertex3f(-6,-1,20);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,40);
		glTexCoord2f(1,0);glVertex3f(6,-1,40);
		glTexCoord2f(1,1);glVertex3f(6,-1,30);
		glTexCoord2f(0,1);glVertex3f(-6,-1,30);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,50);
		glTexCoord2f(1,0);glVertex3f(6,-1,50);
		glTexCoord2f(1,1);glVertex3f(6,-1,40);
		glTexCoord2f(0,1);glVertex3f(-6,-1,40);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,60);
		glTexCoord2f(1,0);glVertex3f(6,-1,60);
		glTexCoord2f(1,1);glVertex3f(6,-1,50);
		glTexCoord2f(0,1);glVertex3f(-6,-1,50);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,70);
		glTexCoord2f(1,0);glVertex3f(6,-1,70);
		glTexCoord2f(1,1);glVertex3f(6,-1,60);
		glTexCoord2f(0,1);glVertex3f(-6,-1,60);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-6,-1,75);
		glTexCoord2f(1,0);glVertex3f(6,-1,75);
		glTexCoord2f(1,1);glVertex3f(6,-1,70);
		glTexCoord2f(0,1);glVertex3f(-6,-1,70);
		
	//house1 entry
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(10,-1,-8);
		glTexCoord2f(1,0);glVertex3f(15.9,-1,-8);
		glTexCoord2f(1,1);glVertex3f(15.9,-1,-10);
		glTexCoord2f(0,1);glVertex3f(10,-1,-10); 
		
	//house 1 driveway 
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(10,-1,-24);
		glTexCoord2f(1,0);glVertex3f(18,-1,-24);
		glTexCoord2f(1,1);glVertex3f(18,-1,-20);
		glTexCoord2f(0,1);glVertex3f(10,-1,-20); 
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(10,-1,-24);
		glTexCoord2f(0,1);glVertex3f(5,-1,-19);
		glTexCoord2f(1,1);glVertex3f(5,-1,-15);
		glTexCoord2f(0,1);glVertex3f(10,-1,-20);
		
	//house 2 entry 
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-10,-1,-11.5);
		glTexCoord2f(1,0);glVertex3f(-15.9,-1,-11.5);
		glTexCoord2f(1,1);glVertex3f(-15.9,-1,-13.5);
		glTexCoord2f(0,1);glVertex3f(-10,-1,-13.5);
		
	//house 2 driveway
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(0,-1,-5);
		glTexCoord2f(1,0);glVertex3f(-20.9,-1,-5);
		glTexCoord2f(1,1);glVertex3f(-20.9,-1,4);
		glTexCoord2f(0,1);glVertex3f(-10,-1,4);
		
	//house 3 driveway 
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-12,-1,-30);
		glTexCoord2f(1,0);glVertex3f(-8, -1, -32);
		glTexCoord2f(1,1);glVertex3f(0,-1,-19);
		glTexCoord2f(0,1);glVertex3f(2,-1,-10);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-12,-1,-30);
		glTexCoord2f(1,0);glVertex3f(-3, -1, -35);
		glTexCoord2f(1,1);glVertex3f(-1,-1,-30);
		glTexCoord2f(0,1);glVertex3f(-10,-1,-27);
		
		
		
		
	glEnd();

	x1 = .2,y1=.2;
	glColor3f(0.8f,0.8f,0.8f);
	glTranslatef(-.5,-1,-10);
	glRotatef(90, 1,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texture[3]);
	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(0,0);
	glVertex2f(x1,y1);

	for (angle=1.0f;angle<361.0f;angle+=0.1)
	{
		x2 = x1+sin(angle)*radius;
		y2 = y1+cos(angle)*radius;

		glNormal3d(0,1,0);
		glTexCoord2f(x2,y2);
		glVertex2f(x2,y2);
	}

	glEnd();
	
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	
}

static void Vertex(double th,double ph){
   double x = Sin(th)*Cos(ph);
   double y = Cos(th)*Cos(ph);
   double z = Sin(ph);
  
   glNormal3d(x,y,z);
   glVertex3d(x,y,z);
}
static void ball(double x,double y,double z,double r){
   int th,ph;
   float yellow[] = {1.0,1.0,0.0,1.0};
   float Emission[]  = {0.0,0.0,0.01*emission,1.0};
   
   glPushMatrix();
   //  Offset, scale and rotate
   glTranslated(x,y,z);
   glScaled(r,r,r);

   glColor3f(1,1,1);
   glMaterialf(GL_FRONT,GL_SHININESS,shiny);
   glMaterialfv(GL_FRONT,GL_SPECULAR,yellow);
   glMaterialfv(GL_FRONT,GL_EMISSION,Emission);
   //  Bands of latitude
   for (ph=-90;ph<90;ph+=inc)
   {
      glBegin(GL_QUAD_STRIP);
      for (th=0;th<=360;th+=2*inc)
      {
         Vertex(th,ph);
         Vertex(th,ph+inc);
      }
      glEnd();
   }
   
   glPopMatrix();
}



void display()
{	
	const double len=5;
   
	glClearColor(0.74902,.847059,.847059,1);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glLoadIdentity();
   
   if (first){
	   Vx = 2*dim*Sin(rot);
	   Vz = 2*dim*Cos(rot);
	   
		gluLookAt(Ex,Ey,Ez, Vx+Ex,Ey,Vz+Ez,0,1,0);

   }
	else 
		{
		double Ex = -2*dim*Sin(th)*Cos(ph);
		double Ey = +2*dim        *Sin(ph);
		double Ez = +2*dim*Cos(th)*Cos(ph);
		gluLookAt(Ex,Ey,Ez , 0,0,0 , 0,Cos(ph),0);
		}
	
   
   glShadeModel(smooth ? GL_SMOOTH : GL_FLAT);

   //  Light switch 
   if (light)
   {
     
      float Ambient[]   = {0.01*ambient ,0.01*ambient ,0.01*ambient ,1.0};
      float Diffuse[]   = {0.01*diffuse ,0.01*diffuse ,0.01*diffuse ,1.0};
      float Specular[]  = {0.01*specular,0.01*specular,0.01*specular,1.0};
      //  Light position
      float Position[]  = {distance*Cos(zh),ylight,distance*Sin(zh),1.0};
     
      glColor3f(1,1,1);
      ball(Position[0],Position[1],Position[2] , .5);
 
      glEnable(GL_NORMALIZE);
      glEnable(GL_LIGHTING);
      
      glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,local);
      glColorMaterial(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE);
      glEnable(GL_COLOR_MATERIAL);
      glEnable(GL_LIGHT0);
      glLightfv(GL_LIGHT0,GL_AMBIENT ,Ambient);
      glLightfv(GL_LIGHT0,GL_DIFFUSE ,Diffuse);
      glLightfv(GL_LIGHT0,GL_SPECULAR,Specular);
      glLightfv(GL_LIGHT0,GL_POSITION,Position);
   }
   else
      glDisable(GL_LIGHTING);
   
   ground();
   street();
   sidewalk();
   yellowhouse();
   bluehouse();
   redhouse();
   fences();
   bushes();
   misc();
   
   glDisable(GL_LIGHTING);
   //  Draw axes
   glColor3f(1,1,1);
   if (axes)
   {
      glBegin(GL_LINES);
      glVertex3d(0.0,0.0,0.0);
      glVertex3d(len,0.0,0.0);
      glVertex3d(0.0,0.0,0.0);
      glVertex3d(0.0,len,0.0);
      glVertex3d(0.0,0.0,0.0);
      glVertex3d(0.0,0.0,len);
      glEnd();
      //  Label axes
      glRasterPos3d(len,0.0,0.0);
      Print("X");
      glRasterPos3d(0.0,len,0.0);
      Print("Y");
      glRasterPos3d(0.0,0.0,len);
      Print("Z");
   }
   
  
 
  
  
   glColor3f(1,1,1);
	glWindowPos2i(5,62);
	Print("F = Toggle view");
	glWindowPos2i(5,46);
	Print("L/M = Toggle Lights/Light Movement");
   if(first){
	glWindowPos2i(5,20);
	Print("Projection= First Person");
	glWindowPos2i(5,5);
	Print("Use ASWD keys to move around scene");
   }
   else{
	glWindowPos2i(5,20);
	Print("Projection= Free Look");
	glWindowPos2i(5,5);
	Print("Click and drag to move around scene. PGUP/PGDN keys: Zoom in/out");
   }
  
   glFlush();
   glutSwapBuffers();
}


void idle()
{
   double t = glutGet(GLUT_ELAPSED_TIME)/1000.0;
   zh = fmod(90*t,360);
   glutPostRedisplay();
}

void movement(int key,int x,int y)
{
  
   if (key == GLUT_KEY_RIGHT)
      th += 5;

   else if (key == GLUT_KEY_LEFT)
      th -= 5;
   
   else if (key == GLUT_KEY_UP)
      ph += 5;
  
   else if (key == GLUT_KEY_DOWN)
      ph -= 5;
	
   else if (key == GLUT_KEY_PAGE_UP)
      dim += 0.1;
   
   else if (key == GLUT_KEY_PAGE_DOWN && dim>1)
      dim -= 0.1;
   
   th %= 360;
   ph %= 360;
   Project( fov, asp, dim);
   glutPostRedisplay();
}


void key(unsigned char ch,int x,int y)
{
     //  Exit on ESC
   if (ch == 27)
      exit(0);
   else if (ch == 'x')
      axes = 1-axes;
   else if (ch == 'l' || ch == 'L')
     light = 1-light;
	else if (ch == 'm' || ch == 'M')
      move = 1-move;
	  
   //  Toggle first person with F
   else if (ch == 'f' || ch == 'F')
   {
      first = 1- first;
	  
   }
   
   else if ((ch=='q'|| ch == 'Q') && ambient>0)
      ambient -= 5;
   else if ((ch=='e' || ch == 'E') && ambient<100)
      ambient += 5;

   //wasd keys for movements when in first person
   if (first){
      double dt = 0.05;
      if (ch == 'w' || ch == 'W'){
         Ex += Vx*dt; 
         Ez += Vz*dt;
      }
      else if (ch == 'd' || ch == 'D'){
         rot -= 3;
      }
      else if (ch == 's' || ch == 'S'){
         Ex -= Vx*dt;
         Ez -= Vz*dt;
      }
      else if (ch == 'a' || ch == 'A'){
         rot += 3;
      }
	  else if( ch == 32){
		   rot = 180.0;
			Ex = 0;
			Ey = 1.5;
			Ez = 15;
			Vx =0;
			Vz=0;
	  }

      //  Keep angles to +/-360 degrees
      rot %= 360;
   }
   else {
     if (ch == 32){
         th = 180;
		 ph = 0;
		 fov = 60;
		 dim = 5.0;
	 }
      //  Change field of view angle with + and -
      else if (ch == '-')
         fov--;
      else if (ch == '+')
         fov++;
   }
 
   Project(fov,asp, dim);
    glutIdleFunc(move?idle:NULL);
   glutPostRedisplay();
}


void reshape(int width,int height)
{
   //  Ratio of the width to the height of the window
   asp = (height>0) ? (double)width/height : 1;
   //  Set the viewport to the entire window
   glViewport(0,0, width,height);
   //  Set projection
   Project(mode?fov:0,asp,dim);
}




void mouse(int button, int state, int x, int y)
  {
    // Wheel reports as button 3(scroll up) and button 4(scroll down)
    if ((button == 3) || (button == 4)) // It's a wheel event
    {
      if (button == 3)
      dim += 0.1;
      else if(dim>1)
      dim -= 0.1;
    }
    if ((button == 0) && (state == GLUT_DOWN || state == GLUT_UP))
    {
      if (state == GLUT_DOWN)
      left_click_down = 1;
      else if (state == GLUT_UP)
      left_click_down = 0;
      double midx = (window_width / 2);
      double midy = (window_height / 2);
      double deltax = (midx - x);
      double deltay = (midy - y);
      saved_th = th - mouse_rotation(deltax , midx);
      saved_ph = ph - mouse_rotation(deltay , midy);
    }
    //  Update projection
    Project( fov, asp, dim);
    //  Tell GLUT it is necessary to redisplay the scene
    glutPostRedisplay();
  }

void motionmouse(int x, int y)
 {
    if (left_click_down)
    {
      double midx = (window_width / 2);
      double midy = (window_height / 2);
      double deltax = (midx - x);
      double deltay = (midy - y);
      th = mouse_rotation(deltax , midx) + saved_th;
      ph = mouse_rotation(deltay , midy) + saved_ph;
      th %= 360;
      ph %= 360;
    }
    //  Update projection
    Project( fov,asp, dim);
    //  Tell GLUT it is necessary to redisplay the scene
    glutPostRedisplay();
  }

int main(int argc,char* argv[])
{
   glutInit(&argc,argv);
   glutInitWindowSize(800,800);
   glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
   glutCreateWindow("Alexis McBeain - Final Project");
   glutIdleFunc(idle);
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutSpecialFunc(movement);
   glutMouseFunc(mouse);
   glutMotionFunc(motionmouse);
   glutKeyboardFunc(key);
   
   //textures
   texture[0] = LoadTexBMP("textures/Grass.bmp");
   texture[1] = LoadTexBMP("textures/Sky.bmp");
   texture[2] = LoadTexBMP("textures/asphalt1.bmp");
   texture[3] = LoadTexBMP("textures/Sidewalk.bmp");
   texture[4] = LoadTexBMP("textures/YellowSiding.bmp");
   texture[5] = LoadTexBMP("textures/Stone.bmp");
   texture[6] = LoadTexBMP("textures/Window.bmp");
   texture[7] = LoadTexBMP("textures/Wood.bmp");
   texture[8] = LoadTexBMP("textures/Door.bmp");
   texture[9] = LoadTexBMP("textures/Garage.bmp");
   texture[10] = LoadTexBMP("textures/Roof.bmp");
   texture[11] = LoadTexBMP("textures/BlueSiding.bmp");
   texture[12] = LoadTexBMP("textures/Bush.bmp");
   texture[13] = LoadTexBMP("textures/Fence.bmp");
   texture[14] = LoadTexBMP("textures/WhiteRoof.bmp");
   texture[15] = LoadTexBMP("textures/WhiteWood.bmp");
   texture[16] = LoadTexBMP("textures/Brick.bmp");
   texture[17] = LoadTexBMP("textures/Flowers.bmp");
   texture[18] = LoadTexBMP("textures/metal.bmp");
   texture[19] = LoadTexBMP("textures/deadend.bmp");
   texture[20] = LoadTexBMP("textures/Dirt.bmp");
   texture[21] = LoadTexBMP("textures/tree.bmp");
   
   
   ErrCheck("init");
   glutMainLoop();
   
   return 0;
}