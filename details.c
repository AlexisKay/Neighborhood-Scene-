#include "details.h"
#include "house3.h"
unsigned int texture[21];

void sphere(double r) {
    int i, j;
    for(i = 0; i <= 12; i++) {
        double lat0 = M_PI * (-0.5 + (double) (i - 1) / 12);
        double z0  = sin(lat0);
        double zr0 =  cos(lat0);

        double lat1 = M_PI * (-0.5 + (double) i / 12);
        double z1 = sin(lat1);
        double zr1 = cos(lat1);

        glBegin(GL_QUAD_STRIP);
        for(j = 0; j <= 12; j++) {
            double lng = 2 * M_PI * (double) (j - 1) / 12;
            double x = cos(lng);
            double y = sin(lng);

            glNormal3f(x * zr0, y * zr0, z0);
			glTexCoord2f( x * zr0, y * zr0);
            glVertex3f(r * x * zr0, r * y * zr0, r * z0);
            glNormal3f(x * zr1, y * zr1, z1);
			glTexCoord2f( x * zr1, y * zr1 );
            glVertex3f(r * x * zr1, r * y * zr1, r * z1);
        }
        glEnd();
    }
}

void bushes(){
	
	//yellow front
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(15,0,-12);
	sphere(1.5);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-6.2,0,-31);
	sphere(1.2);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-6.2,1.21,-31);
	sphere(.8);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(64,-.5,-2.9);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(63,-.5,-2.8);
	sphere(.7);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,6);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,5);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,4);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,7);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,8);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glColor3f(0.0f, 0.1f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-7,-.5,9);
	sphere(1);
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
	


	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	//yellow house hedges
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glBegin(GL_QUADS);
	
	

	
	glColor3f(0.0f, 0.1f, 0.0f);
	
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(6,-1,7);
		glTexCoord2f(1,0);glVertex3f(20,-1,7);
		glTexCoord2f(1,1);glVertex3f(20,.9,7);
		glTexCoord2f(0,1);glVertex3f(6,.9,7);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(20,-1,7);
		glTexCoord2f(1,0);glVertex3f(20,-1,4);
		glTexCoord2f(1,1);glVertex3f(20,.9,4);
		glTexCoord2f(0,1);glVertex3f(20,.9,7);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(20,-1,4);
		glTexCoord2f(1,0);glVertex3f(50,-1,4);
		glTexCoord2f(1,1);glVertex3f(50,.9,4);
		glTexCoord2f(0,1);glVertex3f(20,.9,4);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(50,-1,4);
		glTexCoord2f(1,0);glVertex3f(50,-1,-2);
		glTexCoord2f(1,1);glVertex3f(50,.9,-2);
		glTexCoord2f(0,1);glVertex3f(50,.9,4);
		
		//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(6,.9,7);
		glTexCoord2f(1,0);glVertex3f(6,.9,1);
		glTexCoord2f(1,1);glVertex3f(20,.9,1);
		glTexCoord2f(0,1);glVertex3f(20,.9,7);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(16,.9,4);
		glTexCoord2f(1,0);glVertex3f(16,.9,-2);
		glTexCoord2f(1,1);glVertex3f(50,.9,-2);
		glTexCoord2f(0,1);glVertex3f(50,.9,4);
		
		//sides
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(6.1,-1,7);
		glTexCoord2f(1,0);glVertex3f(6.1,-1,1);
		glTexCoord2f(1,1);glVertex3f(6.1,.9,1);
		glTexCoord2f(0,1);glVertex3f(6.1,.9,7);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(6,-1,1.1);
		glTexCoord2f(1,0);glVertex3f(6,.9,1.1);
		glTexCoord2f(1,1);glVertex3f(20,.9,1.1);
		glTexCoord2f(0,1);glVertex3f(20,-1,1.1);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(16,-1,-1.9);
		glTexCoord2f(1,0);glVertex3f(16,.9,-1.9);
		glTexCoord2f(1,1);glVertex3f(50,.9,-1.9);
		glTexCoord2f(0,1);glVertex3f(50,-1,-1.9);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(16.1,-1,4.1);
		glTexCoord2f(1,0);glVertex3f(16.1,.9,4.1);
		glTexCoord2f(1,1);glVertex3f(16.1,.9,-1.9);
		glTexCoord2f(0,1);glVertex3f(16.1,-1,-1.9);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(50,-1,4.1);
		glTexCoord2f(1,0);glVertex3f(50,.9,-1.9);
		glTexCoord2f(1,1);glVertex3f(50,.9,-1.9);
		glTexCoord2f(0,1);glVertex3f(50,-1,4.1);
		
	//backyard 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(60,-1,-34);
		glTexCoord2f(1,0);glVertex3f(60,.9,-34);
		glTexCoord2f(1,1);glVertex3f(60,.9,-20.1);
		glTexCoord2f(0,1);glVertex3f(60,-1,-20.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(64.9,-1,-34);
		glTexCoord2f(1,0);glVertex3f(64.9,.9,-34);
		glTexCoord2f(1,1);glVertex3f(64.9,.9,-20.1);
		glTexCoord2f(0,1);glVertex3f(64.9,-1,-20.1);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(60,-1,-20.1);
		glTexCoord2f(1,0);glVertex3f(64.9,-1,-20.1);
		glTexCoord2f(1,1);glVertex3f(64.9,.9,-20.1);
		glTexCoord2f(0,1);glVertex3f(60,.9,-20.1);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(60,-1,-33.9);
		glTexCoord2f(1,0);glVertex3f(64.9,-1,-33.9);
		glTexCoord2f(1,1);glVertex3f(64.9,.9,-33.9);
		glTexCoord2f(0,1);glVertex3f(60,.9,-33.9);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(60,.9,-33.9);
		glTexCoord2f(1,0);glVertex3f(64.9,.9,-33.9);
		glTexCoord2f(1,1);glVertex3f(64.9,.9,-20.1);
		glTexCoord2f(0,1);glVertex3f(60,.9,-20.1);
		
		
	glEnd();
	
	
	//red house hedges
	glBegin(GL_QUADS);
		glColor3f(0.0f, 0.1f, 0.0f);
		
		
		//1
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(4.5,-1,-35.3);
		glTexCoord2f(1,1);glVertex3f(4.5,.5,-35.3);
		glTexCoord2f(0,1);glVertex3f(0,.5,-35.8);
		glTexCoord2f(0,0);glVertex3f(0,-1,-35.8);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(4.1,-1,-34.044);
		glTexCoord2f(1,1);glVertex3f(4.1,.5,-34.044);
		glTexCoord2f(0,1);glVertex3f(0.4,.5,-34.544);
		glTexCoord2f(0,0);glVertex3f(0.4,-1,-34.544);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(0.4,-1,-34.544);
		glTexCoord2f(1,1);glVertex3f(0.4,.5,-34.544);
		glTexCoord2f(0,1);glVertex3f(0,.5,-35.8);
		glTexCoord2f(0,0);glVertex3f(0,-1,-35.8);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(4.1,-1,-34.044);
		glTexCoord2f(1,1);glVertex3f(4.1,.5,-34.044);
		glTexCoord2f(0,1);glVertex3f(4.5,.5,-35.3);
		glTexCoord2f(0,0);glVertex3f(4.5,-1,-35.3);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(4.5,.5,-35.3);
		glTexCoord2f(1,1);glVertex3f(4.1,.5,-34.044);
		glTexCoord2f(0,1);glVertex3f(0.4,.5,-34.544);
		glTexCoord2f(0,0);glVertex3f(0,.5,-35.8);
		
		//2
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(11,-1,-34.4);
		glTexCoord2f(1,1);glVertex3f(11,.5,-34.4);
		glTexCoord2f(0,1);glVertex3f(6.5,.5,-34.9);
		glTexCoord2f(0,0);glVertex3f(6.5,-1,-34.9);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(10.6,-1,-32.8);
		glTexCoord2f(1,1);glVertex3f(10.6,.5,-32.8);
		glTexCoord2f(0,1);glVertex3f(6.9,.5,-33.3);
		glTexCoord2f(0,0);glVertex3f(6.9,-1,-33.3);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(10.6,-1,-32.8);
		glTexCoord2f(1,1);glVertex3f(10.6,.5,-32.8);
		glTexCoord2f(0,1);glVertex3f(11,.5,-34.4);
		glTexCoord2f(0,0);glVertex3f(11,-1,-34.4);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(6.5,-1,-34.9);
		glTexCoord2f(1,1);glVertex3f(6.5,.5,-34.9);
		glTexCoord2f(0,1);glVertex3f(6.9,.5,-33.3);
		glTexCoord2f(0,0);glVertex3f(6.9,-1,-33.3);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(6.5,-1,-34.9);
		glTexCoord2f(1,1);glVertex3f(11,.5,-34.4);
		glTexCoord2f(0,1);glVertex3f(6.9,.5,-33.3);
		glTexCoord2f(0,0);glVertex3f(10.6,-1,-32.8);
		
		
	//blue house backyard
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-55.5,-1,10);
		glTexCoord2f(1,0);glVertex3f(-55.5,.6,10);
		glTexCoord2f(1,1);glVertex3f(-55.5,.6,-5);
		glTexCoord2f(0,1);glVertex3f(-55.5,-1,-5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56.5,-1,10);
		glTexCoord2f(1,0);glVertex3f(-56.5,.6,10);
		glTexCoord2f(1,1);glVertex3f(-56.5,.6,-5);
		glTexCoord2f(0,1);glVertex3f(-56.5,-1,-5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56.5,.6,10);
		glTexCoord2f(1,0);glVertex3f(-55.5,.6,10);
		glTexCoord2f(1,1);glVertex3f(-55.5,.6,-5);
		glTexCoord2f(0,1);glVertex3f(-56.5,.6,-5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56.5,.6,-8.1);
		glTexCoord2f(1,0);glVertex3f(-55.5,.6,-8.1);
		glTexCoord2f(1,1);glVertex3f(-55.5,.6,-7.1);
		glTexCoord2f(0,1);glVertex3f(-56.5,.6,-7.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,-7.11);
		glTexCoord2f(1,0);glVertex3f(-55.5,-1,-7.11);
		glTexCoord2f(1,1);glVertex3f(-55.5,.6,-7.11);
		glTexCoord2f(0,1);glVertex3f(-66,.6,-7.11);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,-8.1);
		glTexCoord2f(1,0);glVertex3f(-55.5,-1,-8.1);
		glTexCoord2f(1,1);glVertex3f(-55.5,.6,-8.1);
		glTexCoord2f(0,1);glVertex3f(-66,.6,-8.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56,-1,-8.1);
		glTexCoord2f(1,0);glVertex3f(-56,-1,-7.11);
		glTexCoord2f(1,1);glVertex3f(-56,.6,-7.11);
		glTexCoord2f(0,1);glVertex3f(-56,.6,-8.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-55.5,.6,-8.1);
		glTexCoord2f(1,0);glVertex3f(-66,.6,-8.1);
		glTexCoord2f(1,1);glVertex3f(-66,.6,-7.11);
		glTexCoord2f(0,1);glVertex3f(-55.5,.6,-7.11);
		
	//--------------------------------------
	
	//blue hedge
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-61,-1,-8.1);
		glTexCoord2f(1,0);glVertex3f(-61,.9,-8.1);
		glTexCoord2f(1,1);glVertex3f(-61,.9,-27);
		glTexCoord2f(0,1);glVertex3f(-61,-1,-27);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-65.9,-1,-8.1);
		glTexCoord2f(1,0);glVertex3f(-65.9,.9,-8.1);
		glTexCoord2f(1,1);glVertex3f(-65.9,.9,-27);
		glTexCoord2f(0,1);glVertex3f(-65.9,-1,-27);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-61,-1,-27);
		glTexCoord2f(1,0);glVertex3f(-61,.9,-27);
		glTexCoord2f(1,1);glVertex3f(-18,.9,-27);
		glTexCoord2f(0,1);glVertex3f(-18,-1,-27);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-61,-1,-31.9);
		glTexCoord2f(1,0);glVertex3f(-61,.9,-31.9);
		glTexCoord2f(1,1);glVertex3f(-18,.9,-31.9);
		glTexCoord2f(0,1);glVertex3f(-18,-1,-31.9);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-18,-1,-27);
		glTexCoord2f(1,0);glVertex3f(-18,.9,-27);
		glTexCoord2f(1,1);glVertex3f(-18,.9,-32);
		glTexCoord2f(0,1);glVertex3f(-18,-1,-32);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-61,.9,-8.1);
		glTexCoord2f(1,0);glVertex3f(-66,.9,-8.1);
		glTexCoord2f(1,1);glVertex3f(-66,.9,-32);
		glTexCoord2f(0,1);glVertex3f(-61,.9,-32);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-18,.9,-27);
		glTexCoord2f(1,0);glVertex3f(-61,.9,-27);
		glTexCoord2f(1,1);glVertex3f(-61,.9,-32);
		glTexCoord2f(0,1);glVertex3f(-18,.9,-32);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,-8.1);
		glTexCoord2f(1,0);glVertex3f(-61,-1,-8.1);
		glTexCoord2f(1,1);glVertex3f(-61,.9,-8.1);
		glTexCoord2f(0,1);glVertex3f(-66,.9,-8.1);
		
	
		
		
		
		
		
	glEnd();
	
	
		
	
	glPopMatrix();
	
	//treeeees
	glPushMatrix();
	glColor3f(0.65f, 0.50f, 0.39f);
	glBindTexture(GL_TEXTURE_2D, texture[21]);
	glTranslatef(-55,4, -20);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(6.5,1,1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-55,6,-20);
	sphere(4);
	glPopMatrix();
	//1
	glPushMatrix();
	glColor3f(0.65f, 0.50f, 0.39f);
	glBindTexture(GL_TEXTURE_2D, texture[21]);
	glTranslatef(-30,4, -40);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(6.5,1,1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(-30,6,-40);
	sphere(4.5);
	glPopMatrix();
	//2
	glPushMatrix();
	glColor3f(0.65f, 0.50f, 0.39f);
	glBindTexture(GL_TEXTURE_2D, texture[21]);
	glTranslatef(30,4, -40);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(6.5,1,1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(30,6,-40);
	sphere(4.5);
	glPopMatrix();
	//3
	glPushMatrix();
	glColor3f(0.65f, 0.50f, 0.39f);
	glBindTexture(GL_TEXTURE_2D, texture[21]);
	glTranslatef(55,4, 2);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(6.5,1,1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	glTranslatef(55,6,2);
	sphere(4.5);
	glPopMatrix();
	//4
	
	glDisable(GL_TEXTURE_2D);
}

void fences(){
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	
	glBindTexture(GL_TEXTURE_2D, texture[13]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);    
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glColor3f(1,1,1);
	glBegin(GL_QUADS);
	
		//rightside
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(6,-1,10);
		glTexCoord2f(1,0);glVertex3f(6,-1,1);
		glTexCoord2f(1,1);glVertex3f(6,.5,1);
		glTexCoord2f(0,1);glVertex3f(6,.5,10);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(6,-1,20);
		glTexCoord2f(1,0);glVertex3f(6,-1,10);
		glTexCoord2f(1,1);glVertex3f(6,.5,10);
		glTexCoord2f(0,1);glVertex3f(6,.5,20);
		
		//leftside
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-6,-1,20);
		glTexCoord2f(1,0);glVertex3f(-6,-1,10);
		glTexCoord2f(1,1);glVertex3f(-6,.5,10);
		glTexCoord2f(0,1);glVertex3f(-6,.5,20);
		
		//around yellow house 
		
		//-----
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(6,-1,1);
		glTexCoord2f(1,0);glVertex3f(16,-1,1);
		glTexCoord2f(1,1);glVertex3f(16,.5,1);
		glTexCoord2f(0,1);glVertex3f(6,.5,1);
		
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(16,-1,1);
		glTexCoord2f(1,0);glVertex3f(16,-1,-2);
		glTexCoord2f(1,1);glVertex3f(16,.5,-2);
		glTexCoord2f(0,1);glVertex3f(16,.5,1);
		
		//-----
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(16,-1,-2);
		glTexCoord2f(1,0);glVertex3f(26,-1,-2);
		glTexCoord2f(1,1);glVertex3f(26,.5,-2);
		glTexCoord2f(0,1);glVertex3f(16,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(26,-1,-2);
		glTexCoord2f(1,0);glVertex3f(36,-1,-2);
		glTexCoord2f(1,1);glVertex3f(36,.5,-2);
		glTexCoord2f(0,1);glVertex3f(26,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(36,-1,-2);
		glTexCoord2f(1,0);glVertex3f(46,-1,-2);
		glTexCoord2f(1,1);glVertex3f(46,.5,-2);
		glTexCoord2f(0,1);glVertex3f(36,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(46,-1,-2);
		glTexCoord2f(1,0);glVertex3f(55,-1,-2);
		glTexCoord2f(1,1);glVertex3f(55,.5,-2);
		glTexCoord2f(0,1);glVertex3f(46,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(55,-1,-2);
		glTexCoord2f(1,0);glVertex3f(65,-1,-2);
		glTexCoord2f(1,1);glVertex3f(65,.5,-2);
		glTexCoord2f(0,1);glVertex3f(55,.5,-2);
		
		//-----
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(65,-1,-2);
		glTexCoord2f(1,0);glVertex3f(65,-1,-12);
		glTexCoord2f(1,1);glVertex3f(65,.5,-12);
		glTexCoord2f(0,1);glVertex3f(65,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(65,-1,-12);
		glTexCoord2f(1,0);glVertex3f(65,-1,-22);
		glTexCoord2f(1,1);glVertex3f(65,.5,-22);
		glTexCoord2f(0,1);glVertex3f(65,.5,-12);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(65,-1,-22);
		glTexCoord2f(1,0);glVertex3f(65,-1,-34);
		glTexCoord2f(1,1);glVertex3f(65,.5,-34);
		glTexCoord2f(0,1);glVertex3f(65,.5,-22);
		
		//-----
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(14,-1,-34);
		glTexCoord2f(1,0);glVertex3f(24,-1,-34);
		glTexCoord2f(1,1);glVertex3f(24,.5,-34);
		glTexCoord2f(0,1);glVertex3f(14,.5,-34);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(24,-1,-34);
		glTexCoord2f(1,0);glVertex3f(34,-1,-34);
		glTexCoord2f(1,1);glVertex3f(34,.5,-34);
		glTexCoord2f(0,1);glVertex3f(24,.5,-34);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(34,-1,-34);
		glTexCoord2f(1,0);glVertex3f(44,-1,-34);
		glTexCoord2f(1,1);glVertex3f(44,.5,-34);
		glTexCoord2f(0,1);glVertex3f(34,.5,-34);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(44,-1,-34);
		glTexCoord2f(1,0);glVertex3f(55,-1,-34);
		glTexCoord2f(1,1);glVertex3f(55,.5,-34);
		glTexCoord2f(0,1);glVertex3f(44,.5,-34);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(55,-1,-34);
		glTexCoord2f(1,0);glVertex3f(65,-1,-34);
		glTexCoord2f(1,1);glVertex3f(65,.5,-34);
		glTexCoord2f(0,1);glVertex3f(55,.5,-34);
		
		
		//--------------------------
		//yellow house backyard
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(55,-1,-2);
		glTexCoord2f(1,0);glVertex3f(55,-1,-15);
		glTexCoord2f(1,1);glVertex3f(55,.5,-15);
		glTexCoord2f(0,1);glVertex3f(55,.5,-2);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(55,-1,-17);
		glTexCoord2f(1,0);glVertex3f(55,-1,-20);
		glTexCoord2f(1,1);glVertex3f(55,.5,-20);
		glTexCoord2f(0,1);glVertex3f(55,.5,-17);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(55,-1,-20);
		glTexCoord2f(1,0);glVertex3f(65,-1,-20);
		glTexCoord2f(1,1);glVertex3f(65,.5,-20);
		glTexCoord2f(0,1);glVertex3f(55,.5,-20);
		
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(18,-1,-34);
		glTexCoord2f(1,0);glVertex3f(18,-1,-30);
		glTexCoord2f(1,1);glVertex3f(18,.5,-30);
		glTexCoord2f(0,1);glVertex3f(18,.5,-34);
		
		
		
		//around blue house
		//-----
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-6,-1,10);
		glTexCoord2f(1,0);glVertex3f(-15,-1,10);
		glTexCoord2f(1,1);glVertex3f(-15,.5,10);
		glTexCoord2f(0,1);glVertex3f(-6,.5,10);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-15,-1,10);
		glTexCoord2f(1,0);glVertex3f(-30,-1,10);
		glTexCoord2f(1,1);glVertex3f(-30,.5,10);
		glTexCoord2f(0,1);glVertex3f(-15,.5,10);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-30,-1,10);
		glTexCoord2f(1,0);glVertex3f(-45,-1,10);
		glTexCoord2f(1,1);glVertex3f(-45,.5,10);
		glTexCoord2f(0,1);glVertex3f(-30,.5,10);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-45,-1,10);
		glTexCoord2f(1,0);glVertex3f(-55,-1,10);
		glTexCoord2f(1,1);glVertex3f(-55,.5,10);
		glTexCoord2f(0,1);glVertex3f(-45,.5,10);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-55,-1,10);
		glTexCoord2f(1,0);glVertex3f(-66,-1,10);
		glTexCoord2f(1,1);glVertex3f(-66,.5,10);
		glTexCoord2f(0,1);glVertex3f(-55,.5,10);
		
		//-----
		
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,10);
		glTexCoord2f(1,0);glVertex3f(-66,-1,0);
		glTexCoord2f(1,1);glVertex3f(-66,.5,0);
		glTexCoord2f(0,1);glVertex3f(-66,.5,10);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,0);
		glTexCoord2f(1,0);glVertex3f(-66,-1,-10);
		glTexCoord2f(1,1);glVertex3f(-66,.5,-10);
		glTexCoord2f(0,1);glVertex3f(-66,.5,0);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,-10);
		glTexCoord2f(1,0);glVertex3f(-66,-1,-22);
		glTexCoord2f(1,1);glVertex3f(-66,.5,-22);
		glTexCoord2f(0,1);glVertex3f(-66,.5,-10);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-66,-1,-22);
		glTexCoord2f(1,0);glVertex3f(-66,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-66,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-66,.5,-22);
		
		//-----
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-14,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-24,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-24,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-14,.5,-32);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-24,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-34,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-34,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-24,.5,-32);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-34,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-44,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-44,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-34,.5,-32);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-44,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-54,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-54,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-44,.5,-32);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-54,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-66,-1,-32);
		glTexCoord2f(1,1);glVertex3f(-66,.5,-32);
		glTexCoord2f(0,1);glVertex3f(-54,.5,-32);
		
		//---
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-17.9,-1,-32);
		glTexCoord2f(1,0);glVertex3f(-17.9,-1,-26);
		glTexCoord2f(1,1);glVertex3f(-17.9,.5,-26);
		glTexCoord2f(0,1);glVertex3f(-17.9,.5,-32);
		
		
		
		
		
		
		
		
		
		
	
	glEnd();
	
	glDisable(GL_TEXTURE_2D);
	glPopMatrix();
}


void misc(){
	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[18]);
	glBegin(GL_QUADS);
	
	//base
	glColor3f(0.80f, 0.8f,0.8f);
	
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-5,-1,0);
		glTexCoord2f(1,0);glVertex3f(-5,-1,.1);
		glTexCoord2f(0,1);glVertex3f(-5,1.5,.1);
		glTexCoord2f(1,1);glVertex3f(-5,1.5,0);
		
		glTexCoord2f(0,0);glVertex3f(-5.1,-1,0);
		glTexCoord2f(1,0);glVertex3f(-5.1,-1,.1);
		glTexCoord2f(0,1);glVertex3f(-5.1,1.5,.1);
		glTexCoord2f(1,1);glVertex3f(-5.1,1.5,0);
		
		glTexCoord2f(0,0);glVertex3f(-5.1,-1,.1);
		glTexCoord2f(1,0);glVertex3f(-5,-1,.1);
		glTexCoord2f(0,1);glVertex3f(-5,1.5,.1);
		glTexCoord2f(1,1);glVertex3f(-5.1,1.5,.1);
		
		glTexCoord2f(0,0);glVertex3f(-5.1,-1,0);
		glTexCoord2f(1,0);glVertex3f(-5,-1,0);
		glTexCoord2f(0,1);glVertex3f(-5,1.5,0);
		glTexCoord2f(1,1);glVertex3f(-5,1.5,0);
	glEnd();
	
	//gate
	glBindTexture(GL_TEXTURE_2D, texture[15]);
	glBegin(GL_QUADS);
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56,-1,-5.1);
		glTexCoord2f(1,0);glVertex3f(-56.5,-1,-5.1);
		glTexCoord2f(0,1);glVertex3f(-56.5,2,-5.1);
		glTexCoord2f(1,1);glVertex3f(-56,2,-5.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56,-1,-7.1);
		glTexCoord2f(1,0);glVertex3f(-56.5,-1,-7.1);
		glTexCoord2f(0,1);glVertex3f(-56.5,2,-7.1);
		glTexCoord2f(1,1);glVertex3f(-56,2,-7.1);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-56,2,-7.1);
		glTexCoord2f(1,0);glVertex3f(-56.5,2,-7.1);
		glTexCoord2f(0,1);glVertex3f(-56.5,2,-5.1);
		glTexCoord2f(1,1);glVertex3f(-56,2,-5.1);
	glEnd();
		
		
	glPopMatrix();

	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D, texture[19]);

	glBegin(GL_QUADS);
	//sign
		glColor3f(0.80f, 0.80f,0.80f);
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,1);glVertex3f(-4.5,2,.11);
		glTexCoord2f(0,1);glVertex3f(-5.5,2,.11);
		glTexCoord2f(0,0);glVertex3f(-5.5,1,.11);
		glTexCoord2f(1,0);glVertex3f(-4.5,1,.11);
		
	glEnd();
	
	
	
	//garden
	glBindTexture(GL_TEXTURE_2D, texture[17]);
	glBegin(GL_QUADS);
		glColor3f(0.80f, 0.80f,0.80f);
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,-4.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,-4.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,-6);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,-6);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,-2.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,-2.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,-4);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,-4);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,-0.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,-0.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,-2);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,-2);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,1.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,1.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,0);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,0);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,3.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,3.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,2);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,2);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,5.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,5.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,4);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,4);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,7.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,7.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,6);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,6);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(-58,-.9,9.5);
		glTexCoord2f(0,1);glVertex3f(-64,-.9,9.5);
		glTexCoord2f(0,0);glVertex3f(-64,-.9,8);
		glTexCoord2f(1,0);glVertex3f(-58,-.9,8);
		
	glEnd();
	
	//dirt
	glBindTexture(GL_TEXTURE_2D, texture[20]);
	glBegin(GL_QUADS);
		glNormal3d(1, 0, 0);
		glTexCoord2f(1,1);glVertex3f(56,-.9,-19);
		glTexCoord2f(0,1);glVertex3f(64,-.9,-19);
		glTexCoord2f(0,0);glVertex3f(64,-.9,-3);
		glTexCoord2f(1,0);glVertex3f(56,-.9,-3);
	glEnd();
	glDisable(GL_TEXTURE_2D);
	
	//---------------person-----------------------
	//body
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(0,.9, -32);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.9,.23,.23,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-.25,.9, -32);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(.25,.9, -32);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	
	//legs
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(.15,0, -32);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-.15,0, -32);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	//head
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(0,1.1,-32);
	sphere(.25);
	glPopMatrix();
	
	//------------
	
	//body
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-55,.9, -7);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.9,.23,.23,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-54.75,.9, -7);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-55.25,.9, -7);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	
	//legs
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-55.15,0, -7);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-54.85,0, -7);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	//head
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(-55,1.1,-7);
	sphere(.25);
	glPopMatrix();
	
	
	glPopMatrix();
}