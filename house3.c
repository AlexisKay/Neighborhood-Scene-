#include "house3.h"
unsigned int texture[21];

void cylinder(double height, double rb, double rt, int slices, int stacks){
	GLUquadricObj* cylinder;
    cylinder = gluNewQuadric();
    gluCylinder(cylinder, rb, rt, height, slices, stacks);
	gluDisk(cylinder, 0, rb, slices, stacks);
	
}


void redhouse(){

	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	
	//glColor3f(1.0f, 0.498039f, 0.0f); 
	glBindTexture(GL_TEXTURE_2D, texture[16]);
	glBegin(GL_QUADS);
	//floor
		glVertex3f(-14,-1,-29);
		glVertex3f(-26,-1,-38);
		glVertex3f(0,-1,-51);
		glVertex3f(0, -1, -36);
		
		glVertex3f(14,-1,-34);
		glVertex3f(20,-1,-46);
		glVertex3f(0,-1,-51);
		glVertex3f(0, -1, -36);
		
	//top 
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-14,4,-29);
		glTexCoord2f(1,0);glVertex3f(-26,4,-38);
		glTexCoord2f(1,1);glVertex3f(0,4,-51);
		glTexCoord2f(0,1);glVertex3f(0, 4, -36);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(14,4,-34);
		glTexCoord2f(1,0);glVertex3f(20,4,-46);
		glTexCoord2f(1,1);glVertex3f(0,4,-51);
		glTexCoord2f(0,1);glVertex3f(0, 4, -36);
		
	//left
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-14,-1,-29);
		glTexCoord2f(1,0);glVertex3f(-26,-1,-38);
		glTexCoord2f(1,1);glVertex3f(-26,4,-38);
		glTexCoord2f(0,1);glVertex3f(-14, 4, -29);
		
	//right 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(14,-1,-34);
		glTexCoord2f(1,0);glVertex3f(20,-1,-46);
		glTexCoord2f(1,1);glVertex3f(20,4,-46);
		glTexCoord2f(0,1);glVertex3f(14, 4, -34);
		
	//front 
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(-14,-1,-29);
		glTexCoord2f(1,1);glVertex3f(-14, 4, -29);
		glTexCoord2f(0,1);glVertex3f(0,4,-36);
		glTexCoord2f(0,0);glVertex3f(0,-1,-36);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(14,-1,-34);
		glTexCoord2f(1,1);glVertex3f(14, 4, -34);
		glTexCoord2f(0,1);glVertex3f(0,4,-36);
		glTexCoord2f(0,0);glVertex3f(0,-1,-36);
		
	//back
		glNormal3d(0, 0, -1);
		glTexCoord2f(1,0);glVertex3f(-26,-1,-38);
		glTexCoord2f(1,1);glVertex3f(-26, 4, -38);
		glTexCoord2f(0,1);glVertex3f(0,4,-51);
		glTexCoord2f(0,0);glVertex3f(0,-1,-51);
		
		glNormal3d(0, 0, -1);
		glTexCoord2f(1,0);glVertex3f(20,-1,-46);
		glTexCoord2f(1,1);glVertex3f(20, 4, -46);
		glTexCoord2f(0,1);glVertex3f(0,4,-51);
		glTexCoord2f(0,0);glVertex3f(0,-1,-51);
		
	glEnd();
	
	//roof 
	//glColor3f(0.62352f, 0.372549f, 0.623529f);
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glBegin(GL_QUADS);
	
	//bottom
		glVertex3f(-14,4.1,-27);
		glVertex3f(-30,4.1,-40);
		glVertex3f(0,4.1,-53);
		glVertex3f(0, 4.1, -34);
		
		glVertex3f(14,4.1,-32);
		glVertex3f(22,4.1,-48);
		glVertex3f(0,4.1,-53);
		glVertex3f(0, 4.1, -34);
		
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-14,4.3,-27);
		glTexCoord2f(1,0);glVertex3f(-30,4.3,-40);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-53);
		glTexCoord2f(0,1);glVertex3f(0, 4.3, -34);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(14,4.3,-32);
		glTexCoord2f(1,0);glVertex3f(22,4.3,-48);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-53);
		glTexCoord2f(0,1);glVertex3f(0, 4.3, -34);
		
		
	//front
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-14,4.1,-27);
		glTexCoord2f(1,0);glVertex3f(-14, 4.3, -27);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-34);
		glTexCoord2f(0,1);glVertex3f(0,4.1,-34);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(14,4.1,-32);
		glTexCoord2f(1,0);glVertex3f(14, 4.3, -32);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-34);
		glTexCoord2f(0,1);glVertex3f(0,4.1,-34);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(14,4.1,-32);
		glTexCoord2f(1,0);glVertex3f(22,4.1,-48);
		glTexCoord2f(1,1);glVertex3f(22,4.3,-48);
		glTexCoord2f(0,1);glVertex3f(14, 4.3, -32);
		
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(-14,4.1,-27);
		glTexCoord2f(1,0);glVertex3f(-30,4.1,-40);
		glTexCoord2f(1,1);glVertex3f(-30,4.3,-40);
		glTexCoord2f(0,1);glVertex3f(-14, 4.3, -27);
	//back
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-30,4.1,-40);
		glTexCoord2f(1,0);glVertex3f(-30, 4.3, -40);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-53);
		glTexCoord2f(0,1);glVertex3f(0,4.1,-53);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(22,4.1,-48);
		glTexCoord2f(1,0);glVertex3f(22, 4.3, -48);
		glTexCoord2f(1,1);glVertex3f(0,4.3,-53);
		glTexCoord2f(0,1);glVertex3f(0,4.1,-53);
		
		
	glEnd();
	
	glPopMatrix();
	
	
	//cylinder stuff
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glTranslatef(13,4, -34);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(5.5,.5,.5,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glTranslatef(5,4, -35);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(5.5,.5,.5,12,12);
	glPopMatrix();
	
	glPushMatrix();
	
	
	//doors
	glBindTexture(GL_TEXTURE_2D, texture[8]);
	glBegin(GL_QUADS);
	
	//main door
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(-5,-1,-33.4);
		glTexCoord2f(1,1);glVertex3f(-5,2.5,-33.4);
		glTexCoord2f(0,1);glVertex3f(-3,2.5,-34.4);
		glTexCoord2f(0,0);glVertex3f(-3,-1,-34.4);
	glEnd();
	
	glBindTexture(GL_TEXTURE_2D, texture[9]);
	glBegin(GL_QUADS);
	//garage door 
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(-12,-1,-29.9);
		glTexCoord2f(1,1);glVertex3f(-12, 2.5, -29.9);
		glTexCoord2f(0,1);glVertex3f(-8,2.5,-31.9);
		glTexCoord2f(0,0);glVertex3f(-8,-1,-31.9);
		
	glEnd();
	
	//windows
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glBegin(GL_QUADS);
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(4,.5,-35.3);
		glTexCoord2f(1,1);glVertex3f(4,3,-35.3);
		glTexCoord2f(0,1);glVertex3f(.5,3,-35.8);
		glTexCoord2f(0,0);glVertex3f(.5,.5,-35.8);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(1,0);glVertex3f(10.5,.5,-34.4);
		glTexCoord2f(1,1);glVertex3f(10.5,3,-34.4);
		glTexCoord2f(0,1);glVertex3f(7,3,-34.9);
		glTexCoord2f(0,0);glVertex3f(7,.5,-34.98);
		
	
	glEnd();
	
	
	glDisable(GL_TEXTURE_2D);
	
	glPopMatrix();
	
	
}

