#include "house2.h"
unsigned int texture[21];


void bluehouse(){

	glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	
	//glColor3f(0.196078f, 0.8f, 0.6f);
	glBindTexture(GL_TEXTURE_2D, texture[11]);
	glBegin(GL_QUADS);
	
	//floor
	
		glVertex3f(-16,-1,-6);
		glVertex3f(-35,-1,-6);
		glVertex3f(-35,-1,-17);
		glVertex3f(-16, -1, -17);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-16,-1,-6);
		glTexCoord2f(2,0);glVertex3f(-35,-1,-6);
		glTexCoord2f(2,2);glVertex3f(-35,8,-6);
		glTexCoord2f(0,2);glVertex3f(-16,8,-6);
		
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(-16,-1,-17);
		glTexCoord2f(2,0);glVertex3f(-35,-1,-17);
		glTexCoord2f(2,2);glVertex3f(-35,8,-17);
		glTexCoord2f(0,2);glVertex3f(-16,8,-17);
		
	//back 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35,-1,-6);
		glTexCoord2f(1,0);glVertex3f(-35,-1,-12);
		glTexCoord2f(1,2.25);glVertex3f(-35,9,-12);
		glTexCoord2f(0,2);glVertex3f(-35,8,-6);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35,-1,-12);
		glTexCoord2f(1,0);glVertex3f(-35,-1,-17);
		glTexCoord2f(1,2);glVertex3f(-35,8,-17);
		glTexCoord2f(0,2.25);glVertex3f(-35,9,-12);
		
	//font 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-16,-1,-6);
		glTexCoord2f(1,0);glVertex3f(-16,-1,-12);
		glTexCoord2f(1,2.25);glVertex3f(-16,9,-12);
		glTexCoord2f(0,2);glVertex3f(-16,8,-6);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-16,-1,-12);
		glTexCoord2f(1,0);glVertex3f(-16,-1,-17);
		glTexCoord2f(1,2);glVertex3f(-16,8,-17);
		glTexCoord2f(0,2.25);glVertex3f(-16,9,-12);
		
		
	//GARAGE
	
	//garage floor 
		glVertex3f(-21,-1,-6);
		glVertex3f(-30,-1,-6);
		glVertex3f(-30,-1,5);
		glVertex3f(-21, -1, 5);
		
	//garage front 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-21,-1,-6);
		glTexCoord2f(1,0);glVertex3f(-21,-1,5);
		glTexCoord2f(1,1);glVertex3f(-21,3,5);
		glTexCoord2f(0,1);glVertex3f(-21,3,-6);
		
	//garage left 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-21,-1,5);
		glTexCoord2f(1,0);glVertex3f(-30,-1,5);
		glTexCoord2f(1,1);glVertex3f(-30,3,5);
		glTexCoord2f(0,1);glVertex3f(-21,3,5);
	
	//garage back 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-30,-1,-6);
		glTexCoord2f(1,0);glVertex3f(-30,-1,5);
		glTexCoord2f(1,1);glVertex3f(-30,3,5);
		glTexCoord2f(0,1);glVertex3f(-30,3,-6);
		
	glEnd();
	
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glBegin(GL_QUADS);
	//CHIMNEY
	//glColor3f(0.556863f, 0.137255f, 0.137255f);
	
	//bottom
		glVertex3f(-28,-1,-20);
		glVertex3f(-32,-1,-20);
		glVertex3f(-32,-1,-17);
		glVertex3f(-28, -1, -17);
		
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-28,10,-20);
		glTexCoord2f(1,0);glVertex3f(-32,10,-20);
		glTexCoord2f(1,1);glVertex3f(-32,10,-17);
		glTexCoord2f(0,1);glVertex3f(-28, 10, -17);
		
	
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(-28,-1,-20);
		glTexCoord2f(1,0);glVertex3f(-32,-1,-20);
		glTexCoord2f(1,1);glVertex3f(-32,10,-20);
		glTexCoord2f(0,1);glVertex3f(-28,10,-20);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-28,-1,-17);
		glTexCoord2f(1,0);glVertex3f(-32,-1,-17);
		glTexCoord2f(1,1);glVertex3f(-32,10,-17);
		glTexCoord2f(0,1);glVertex3f(-28,10,-17);
	
	//front
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-28,-1,-17);
		glTexCoord2f(1,0);glVertex3f(-28,-1,-20);
		glTexCoord2f(1,1);glVertex3f(-28,5,-20);
		glTexCoord2f(0,1);glVertex3f(-28,5,-17);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-28,5,-17);
		glTexCoord2f(1,0);glVertex3f(-28,5,-20);
		glTexCoord2f(1,1);glVertex3f(-28,10,-20);
		glTexCoord2f(0,1);glVertex3f(-28,10,-17);
	
	//back
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-32,-1,-17);
		glTexCoord2f(1,0);glVertex3f(-32,-1,-20);
		glTexCoord2f(1,1);glVertex3f(-32,10,-20);
		glTexCoord2f(0,1);glVertex3f(-32,10,-17);
	
		
	glEnd();	
		
	
	
	//DOORS
	//glColor3f(1.0f, 1.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[8]);
	glBegin(GL_QUADS);
	
	//front door 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.9,-1,-11.5);
		glTexCoord2f(1,0);glVertex3f(-15.9,-1,-13.5);
		glTexCoord2f(1,1);glVertex3f(-15.9,2.5,-13.5);
		glTexCoord2f(0,1);glVertex3f(-15.9,2.5,-11.5);	
		
	//back door BOTTOM
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35.1,-.8,-14);
		glTexCoord2f(1,0);glVertex3f(-35.1,-.8,-16);
		glTexCoord2f(1,1);glVertex3f(-35.1,2.5,-16);
		glTexCoord2f(0,1);glVertex3f(-35.1,2.5,-14);
		
	//back door TOP
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35.1,4,-12);
		glTexCoord2f(1,0);glVertex3f(-35.1,4,-10);
		glTexCoord2f(1,1);glVertex3f(-35.1,7,-10);
		glTexCoord2f(0,1);glVertex3f(-35.1,7,-12);
		
	//back door right 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-34,-1,-5.9);
		glTexCoord2f(1,0);glVertex3f(-32,-1,-5.9);
		glTexCoord2f(1,1);glVertex3f(-32,2.5,-5.9);
		glTexCoord2f(0,1);glVertex3f(-34,2.5,-5.9);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-30.1,-1,4);
		glTexCoord2f(1,0);glVertex3f(-30.1,-1,2);
		glTexCoord2f(1,1);glVertex3f(-30.1,2.5,2);
		glTexCoord2f(0,1);glVertex3f(-30.1,2.5,4);
		
	glEnd();
		
	//garage doors 
	glBindTexture(GL_TEXTURE_2D, texture[9]);
	glBegin(GL_QUADS);
	
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-20.9,-1,4);
		glTexCoord2f(1,0);glVertex3f(-20.9,-1,0);
		glTexCoord2f(1,1);glVertex3f(-20.9,2.5,0);
		glTexCoord2f(0,1);glVertex3f(-20.9,2.5,4);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-20.9,-1,-1);
		glTexCoord2f(1,0);glVertex3f(-20.9,-1,-5);
		glTexCoord2f(1,1);glVertex3f(-20.9,2.5,-5);
		glTexCoord2f(0,1);glVertex3f(-20.9,2.5,-1);
		
		
		
		
	glEnd();
	
	
	//WINDOWS
	//glColor3f(1.0f, 1.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glBegin(GL_QUADS);
	
	//front bottom right 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.9,0.5,-14.25);
		glTexCoord2f(1,0);glVertex3f(-15.9,0.5,-16.25);
		glTexCoord2f(1,1);glVertex3f(-15.9,2.5,-16.25);
		glTexCoord2f(0,1);glVertex3f(-15.9,2.5,-14.25);
		
	//front bottom left
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.9,0.5,-8.75);
		glTexCoord2f(1,0);glVertex3f(-15.9,0.5,-10.75);
		glTexCoord2f(1,1);glVertex3f(-15.9,2.5,-10.75);
		glTexCoord2f(0,1);glVertex3f(-15.9,2.5,-8.75);
		
	//front top right 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.9,5,-13.25);
		glTexCoord2f(1,0);glVertex3f(-15.9,5,-16.25);
		glTexCoord2f(1,1);glVertex3f(-15.9,7.5,-16.25);
		glTexCoord2f(0,1);glVertex3f(-15.9,7.5,-13.25);
		
	//front top left
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.9,5,-8);
		glTexCoord2f(1,0);glVertex3f(-15.9,5,-11);
		glTexCoord2f(1,1);glVertex3f(-15.9,7.5,-11);
		glTexCoord2f(0,1);glVertex3f(-15.9,7.5,-8);
		
	glEnd();
	
	
	//front detail 
	//glColor3f(0.1f,0.0f,0.0f);
	glBindTexture(GL_TEXTURE_2D, texture[15]);
	glBegin(GL_QUADS);
	
	//right leg 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-13.5,-1,-7.825);
		glTexCoord2f(1,0);glVertex3f(-16,-1,-7.825);
		glTexCoord2f(1,1);glVertex3f(-16,4.3,-7.825);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -7.825);
		
	//left leg 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-13.5,-1,-8.125);
		glTexCoord2f(1,0);glVertex3f(-16,-1,-8.125);
		glTexCoord2f(1,1);glVertex3f(-16,4.3,-8.125);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -8.125);
		
	//front leg
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-13.5,-1,-8.125);
		glTexCoord2f(1,0);glVertex3f(-13.5,-1,-7.825);
		glTexCoord2f(1,1);glVertex3f(-13.5,4.3,-7.825);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -8.125);
		
	//bottom ledge 
		glTexCoord2f(0,0);glVertex3f(-13.5,4,-13.5);
		glTexCoord2f(1,0);glVertex3f(-16,4,-13.5);
		glTexCoord2f(1,1);glVertex3f(-16,4,-7.825);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4, -7.825);
		
	//top ledge 
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-13.5,4.3,-13.5);
		glTexCoord2f(1,0);glVertex3f(-16,4.3,-13.5);
		glTexCoord2f(1,1);glVertex3f(-16,4.3,-7.825);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -7.825);
	
	//front ledge
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-13.5,4,-13.5);
		glTexCoord2f(1,0);glVertex3f(-13.5,4,-7.825);
		glTexCoord2f(1,1);glVertex3f(-13.5,4.3,-7.825);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -13.5);
		
	//right ledge
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-13.5,4,-13.5);
		glTexCoord2f(1,0);glVertex3f(-16,4,-13.5);
		glTexCoord2f(1,1);glVertex3f(-16,4.3,-13.5);
		glTexCoord2f(0,1);glVertex3f(-13.5, 4.3, -13.5);
		
		
	glEnd();
	
	//glColor3f(0.917647f, 0.678431f, 0.917647f);
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glBegin(GL_QUADS);
	
	//---FLOWER BOX 
	
	//left
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-13.5,-1,-6);
		glTexCoord2f(1,0);glVertex3f(-16,-1,-6);
		glTexCoord2f(1,1);glVertex3f(-16,.3,-6);
		glTexCoord2f(0,1);glVertex3f(-13.5, .3, -6);
	
	
	//front 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-13.5,-1,-7.8);
		glTexCoord2f(1,0);glVertex3f(-13.5,-1,-5.9);
		glTexCoord2f(1,1);glVertex3f(-13.5,.3,-5.9);
		glTexCoord2f(0,1);glVertex3f(-13.5, .3, -7.8);	
		
	glEnd();	
		
	glBindTexture(GL_TEXTURE_2D, texture[17]);
	glBegin(GL_QUADS);
	//flowers
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-15.8,.5,-6);
		glTexCoord2f(1,0);glVertex3f(-15.8,.5,-7.7);
		glTexCoord2f(1,1);glVertex3f(-13.6,.5,-7.7);
		glTexCoord2f(0,1);glVertex3f(-13.6, .5, -6);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.8,.3,-7.7);
		glTexCoord2f(1,0);glVertex3f(-15.8,.5,-7.7);
		glTexCoord2f(1,1);glVertex3f(-13.6,.5,-7.7);
		glTexCoord2f(0,1);glVertex3f(-13.6, .3, -7.7);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-15.8,.3,-6);
		glTexCoord2f(1,0);glVertex3f(-15.8,.5,-6);
		glTexCoord2f(1,1);glVertex3f(-13.6,.5,-6);
		glTexCoord2f(0,1);glVertex3f(-13.6, .3, -6);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-13.6,.3,-7.7);
		glTexCoord2f(1,0);glVertex3f(-13.6,.5,-7.7);
		glTexCoord2f(1,1);glVertex3f(-13.6,.5,-6);
		glTexCoord2f(0,1);glVertex3f(-13.6, .3, -6);
		
		
		
	glEnd();
	
	
	
	
	//patio 
	//glColor3f(0.917647f, 0.678431f, 0.917647f);
	glBindTexture(GL_TEXTURE_2D, texture[7]);
	glBegin(GL_QUADS);
	
	//bottom
		glTexCoord2f(0,0);glVertex3f(-30,-1,-17);
		glTexCoord2f(2,0);glVertex3f(-43,-1,-17);
		glTexCoord2f(2,2);glVertex3f(-43,-1,5);
		glTexCoord2f(0,2);glVertex3f(-30, -1, 5);
		
	//top 
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-30,-.8,-17);
		glTexCoord2f(2,0);glVertex3f(-43,-.8,-17);
		glTexCoord2f(2,2);glVertex3f(-43,-.8,5);
		glTexCoord2f(0,2);glVertex3f(-30, -.8, 5);
		
	//left 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-30,-1,5);
		glTexCoord2f(1,0);glVertex3f(-43,-1,5);
		glTexCoord2f(1,1);glVertex3f(-43,-.8,5);
		glTexCoord2f(0,1);glVertex3f(-30,-.8,5);
		
	
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-30,-1,-17);
		glTexCoord2f(1,0);glVertex3f(-43,-1,-17);
		glTexCoord2f(1,1);glVertex3f(-43,-.8,-17);
		glTexCoord2f(0,1);glVertex3f(-30,-.8,-17);
		
	//front
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-43,-1,-17);
		glTexCoord2f(1,0);glVertex3f(-43,-1,5);
		glTexCoord2f(1,1);glVertex3f(-43,-.8,5);
		glTexCoord2f(0,1);glVertex3f(-43, -.8, -17);
		
		
		//TOP PATIO
		
	//font left 
	//glColor3f(0.858824f, 0.576471f, 0.439216f);
	
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,-1,-15);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-15.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-15.5);
		glTexCoord2f(0,1);glVertex3f(-42, 3.5, -15);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-41.5,-1,-15);
		glTexCoord2f(1,0);glVertex3f(-41.5,-1,-15.5);
		glTexCoord2f(1,1);glVertex3f(-41.5,3.5,-15.5);
		glTexCoord2f(0,1);glVertex3f(-41.5, 3.5, -15);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-41.5,-1,-15.5);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-15.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-15.5);
		glTexCoord2f(0,1);glVertex3f(-41.5, 3.5, -15.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-41.5,-1,-15);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-15);
		glTexCoord2f(1,1);glVertex3f(-42,3,-15);
		glTexCoord2f(0,1);glVertex3f(-41.5, 3.5, -15);
		
		
	//back right 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-35,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-35,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-35, 3.5, -6.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-35.5,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-35.5,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-35.5,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-35.5, 3.5, -6.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-35.5,-1,-7);
		glTexCoord2f(1,0);glVertex3f(-35,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-35,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-35.5, 3.5, -7);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-35.5,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-35,-1,-6.5);
		glTexCoord2f(1,1);glVertex3f(-35,3.5,-6.5);
		glTexCoord2f(0,1);glVertex3f(-35.5, 3.5,-6.5);
		
	//front right
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-39.9,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-39.9,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-39.9,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-39.9, 3.5, -6.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-39.4,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-39.4,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-39.4,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-39.4, 3.5, -6.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-39.4,-1,-7);
		glTexCoord2f(1,0);glVertex3f(-39.9,-1,-7);
		glTexCoord2f(1,1);glVertex3f(-39.9,3.5,-7);
		glTexCoord2f(0,1);glVertex3f(-39.4, 3.5, -7);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-39.4,-1,-6.5);
		glTexCoord2f(1,0);glVertex3f(-39.9,-1,-6.5);
		glTexCoord2f(1,1);glVertex3f(-39.9,3.5,-6.5);
		glTexCoord2f(0,1);glVertex3f(-39.4, 3.5,-6.5);
		
	//---LEDGE
		
	//--toplanding
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-15.5);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(0,1);glVertex3f(-40,3.5, -12.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-15.5);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-15.5);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -15.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12.5);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -12.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,4,-15.5);
		glTexCoord2f(1,0);glVertex3f(-42,4,-15.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12.5);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -12.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-15.5);
		glTexCoord2f(0,1);glVertex3f(-42,4,-15.5);
		glTexCoord2f(0,0);glVertex3f(-42, 4, -12.5);
		
	
	//main ledge
	
	//bottom
		glTexCoord2f(0,0);glVertex3f(-39.9,3.5,-15.5);
		glTexCoord2f(1,0);glVertex3f(-35.1,3.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(-35.1,3.5,-6.5);
		glTexCoord2f(0,1);glVertex3f(-39.9,3.5, -6.5);
	
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-39.9,4,-15.5);
		glTexCoord2f(2,0);glVertex3f(-35.1,4,-15.5);
		glTexCoord2f(2,2);glVertex3f(-35.1,4,-6.5);
		glTexCoord2f(0,2);glVertex3f(-39.9, 4, -6.5);
	
	//left
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-39.9,3.5,-6.5);
		glTexCoord2f(2,0);glVertex3f(-35.1,3.5,-6.5);
		glTexCoord2f(2,2);glVertex3f(-35.1,4,-6.5);
		glTexCoord2f(0,2);glVertex3f(-39.9,4,-6.5);
	
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-39.9,3.5,-15.5);
		glTexCoord2f(2,0);glVertex3f(-35.1,3.5,-15.5);
		glTexCoord2f(2,2);glVertex3f(-35.1,4,-15.5);
		glTexCoord2f(0,2);glVertex3f(-39.9,4,-15.5);
	
	//front
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-39.9,3.5,-15.5);
		glTexCoord2f(2,0);glVertex3f(-39.9,3.5,-6.5);
		glTexCoord2f(2,2);glVertex3f(-39.9,4,-6.5);
		glTexCoord2f(0,2);glVertex3f(-39.9, 4, -15.5);
		
		
		/* ---STAIRS ---*/
		//glColor3f(1.0f,0.5f,0.0f);
		
		//1
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-12);
		glTexCoord2f(0,1);glVertex3f(-40,3.5, -12);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12.5);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -12.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-12);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -12);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,4,-12.5);
		glTexCoord2f(1,0);glVertex3f(-42,4,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12);
		glTexCoord2f(0,1);glVertex3f(-40, 4, -12);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,3.5,-12);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(-42,4,-12.5);
		glTexCoord2f(0,1);glVertex3f(-42, 4, -12);
		
		//2
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3,-12);
		glTexCoord2f(1,0);glVertex3f(-42,3,-12);
		glTexCoord2f(1,1);glVertex3f(-42,3,-11.5);
		glTexCoord2f(0,1);glVertex3f(-40,3, -11.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,3,-12);
		glTexCoord2f(1,0);glVertex3f(-42,3,-12);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-12);
		glTexCoord2f(0,1);glVertex3f(-40, 3.5, -12);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,3,-11.5);
		glTexCoord2f(1,0);glVertex3f(-42,3,-11.5);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-11.5);
		glTexCoord2f(0,1);glVertex3f(-40, 3.5, -11.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,3.5,-12);
		glTexCoord2f(1,0);glVertex3f(-42,3.5,-12);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-11.5);
		glTexCoord2f(0,1);glVertex3f(-40, 3.5, -11.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,3,-11.5);
		glTexCoord2f(1,0);glVertex3f(-42,3,-12);
		glTexCoord2f(1,1);glVertex3f(-42,3.5,-12);
		glTexCoord2f(0,1);glVertex3f(-42, 3.5, -11.5);
		
		//3
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,2.5,-11.5);
		glTexCoord2f(1,0);glVertex3f(-42,2.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(-42,2.5,-11);
		glTexCoord2f(0,1);glVertex3f(-40,2.5, -11);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,2.5,-11.5);
		glTexCoord2f(1,0);glVertex3f(-42,2.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(-42,3,-11.5);
		glTexCoord2f(0,1);glVertex3f(-40, 3, -11.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,2.5,-11);
		glTexCoord2f(1,0);glVertex3f(-42,2.5,-11);
		glTexCoord2f(1,1);glVertex3f(-42,3,-11);
		glTexCoord2f(0,1);glVertex3f(-40, 3, -11);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,3,-11.5);
		glTexCoord2f(1,0);glVertex3f(-42,3,-11.5);
		glTexCoord2f(1,1);glVertex3f(-42,3,-11);
		glTexCoord2f(0,1);glVertex3f(-40, 3, -11);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,2.5,-11);
		glTexCoord2f(1,0);glVertex3f(-42,2.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(-42,3,-11.5);
		glTexCoord2f(0,1);glVertex3f(-42, 3, -11);
		
		//4
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,2,-11);
		glTexCoord2f(1,0);glVertex3f(-42,2,-11);
		glTexCoord2f(1,1);glVertex3f(-42,2,-10.5);
		glTexCoord2f(0,1);glVertex3f(-40,2, -10.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,2,-11);
		glTexCoord2f(1,0);glVertex3f(-42,2,-11);
		glTexCoord2f(1,1);glVertex3f(-42,2.5,-11);
		glTexCoord2f(0,1);glVertex3f(-40, 2.5, -11);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,2,-10.5);
		glTexCoord2f(1,0);glVertex3f(-42,2,-10.5);
		glTexCoord2f(1,1);glVertex3f(-42,2.5,-10.5);
		glTexCoord2f(0,1);glVertex3f(-40, 2.5, -10.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,2.5,-11);
		glTexCoord2f(1,0);glVertex3f(-42,2.5,-11);
		glTexCoord2f(1,1);glVertex3f(-42,2.5,-10.5);
		glTexCoord2f(0,1);glVertex3f(-40, 2.5, -10.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,2,-10.5);
		glTexCoord2f(1,0);glVertex3f(-42,2,-11);
		glTexCoord2f(1,1);glVertex3f(-42,2.5,-11);
		glTexCoord2f(0,1);glVertex3f(-42, 2.5, -10.5);
		
		//5
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,1.5,-10.5);
		glTexCoord2f(1,0);glVertex3f(-42,1.5,-10.5);
		glTexCoord2f(1,1);glVertex3f(-42,1.5,-10);
		glTexCoord2f(0,1);glVertex3f(-40,1.5, -10);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,1.5,-10.5);
		glTexCoord2f(1,0);glVertex3f(-42,1.5,-10.5);
		glTexCoord2f(1,1);glVertex3f(-42,2,-10.5);
		glTexCoord2f(0,1);glVertex3f(-40, 2, -10.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,1.5,-10);
		glTexCoord2f(1,0);glVertex3f(-42,1.5,-10);
		glTexCoord2f(1,1);glVertex3f(-42,2,-10);
		glTexCoord2f(0,1);glVertex3f(-40, 2, -10);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,2,-10.5);
		glTexCoord2f(1,0);glVertex3f(-42,2,-10.5);
		glTexCoord2f(1,1);glVertex3f(-42,2,-10);
		glTexCoord2f(0,1);glVertex3f(-40, 2, -10);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,1.5,-10);
		glTexCoord2f(1,0);glVertex3f(-42,1.5,-10.5);
		glTexCoord2f(1,1);glVertex3f(-42,2,-10.5);
		glTexCoord2f(0,1);glVertex3f(-42, 2, -10);
		
		//6
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,1,-10);
		glTexCoord2f(1,0);glVertex3f(-42,1,-10);
		glTexCoord2f(1,1);glVertex3f(-42,1,-9.5);
		glTexCoord2f(0,1);glVertex3f(-40,1, -9.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,1,-10);
		glTexCoord2f(1,0);glVertex3f(-42,1,-10);
		glTexCoord2f(1,1);glVertex3f(-42,1.5,-10);
		glTexCoord2f(0,1);glVertex3f(-40, 1.5, -10);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,1,-9.5);
		glTexCoord2f(1,0);glVertex3f(-42,1,-9.5);
		glTexCoord2f(1,1);glVertex3f(-42,1.5,-9.5);
		glTexCoord2f(0,1);glVertex3f(-40, 1.5, -9.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,1.5,-10);
		glTexCoord2f(1,0);glVertex3f(-42,1.5,-10);
		glTexCoord2f(1,1);glVertex3f(-42,1.5,-9.5);
		glTexCoord2f(0,1);glVertex3f(-40, 1.5, -9.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,1,-9.5);
		glTexCoord2f(1,0);glVertex3f(-42,1,-10);
		glTexCoord2f(1,1);glVertex3f(-42,1.5,-10);
		glTexCoord2f(0,1);glVertex3f(-42, 1.5, -9.5);
		
		//7
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,.5,-9.5);
		glTexCoord2f(1,0);glVertex3f(-42,.5,-9.5);
		glTexCoord2f(1,1);glVertex3f(-42,.5,-9);
		glTexCoord2f(0,1);glVertex3f(-40,.5, -9);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,.5,-9.5);
		glTexCoord2f(1,0);glVertex3f(-42,.5,-9.5);
		glTexCoord2f(1,1);glVertex3f(-42,1,-9.5);
		glTexCoord2f(0,1);glVertex3f(-40, 1, -9.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,.5,-9);
		glTexCoord2f(1,0);glVertex3f(-42,.5,-9);
		glTexCoord2f(1,1);glVertex3f(-42,1,-9);
		glTexCoord2f(0,1);glVertex3f(-40, 1, -9);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,1,-9.5);
		glTexCoord2f(1,0);glVertex3f(-42,1,-9.5);
		glTexCoord2f(1,1);glVertex3f(-42,1,-9);
		glTexCoord2f(0,1);glVertex3f(-40, 1, -9);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,.5,-9);
		glTexCoord2f(1,0);glVertex3f(-42,.5,-9.5);
		glTexCoord2f(1,1);glVertex3f(-42,1,-9.5);
		glTexCoord2f(0,1);glVertex3f(-42, 1, -9);
		
		//8
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,0,-9);
		glTexCoord2f(1,0);glVertex3f(-42,0,-9);
		glTexCoord2f(1,1);glVertex3f(-42,0,-8.5);
		glTexCoord2f(0,1);glVertex3f(-40,0, -8.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,0,-9);
		glTexCoord2f(1,0);glVertex3f(-42,0,-9);
		glTexCoord2f(1,1);glVertex3f(-42,.5,-9);
		glTexCoord2f(0,1);glVertex3f(-40, .5, -9);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,0,-8.5);
		glTexCoord2f(1,0);glVertex3f(-42,0,-8.5);
		glTexCoord2f(1,1);glVertex3f(-42,.5,-8.5);
		glTexCoord2f(0,1);glVertex3f(-40, .5, -8.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,.5,-9);
		glTexCoord2f(1,0);glVertex3f(-42,.5,-9);
		glTexCoord2f(1,1);glVertex3f(-42,.5,-8.5);
		glTexCoord2f(0,1);glVertex3f(-40, .5, -8.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,0,-8.5);
		glTexCoord2f(1,0);glVertex3f(-42,0,-9);
		glTexCoord2f(1,1);glVertex3f(-42,.5,-9);
		glTexCoord2f(0,1);glVertex3f(-42, .5, -8.5);
		
		//9
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,-.5,-8.5);
		glTexCoord2f(1,0);glVertex3f(-42,-.5,-8.5);
		glTexCoord2f(1,1);glVertex3f(-42,-.5,-8);
		glTexCoord2f(0,1);glVertex3f(-40,-.5, -8);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,-.5,-8.5);
		glTexCoord2f(1,0);glVertex3f(-42,-.5,-8.5);
		glTexCoord2f(1,1);glVertex3f(-42,0,-8.5);
		glTexCoord2f(0,1);glVertex3f(-40, 0, -8.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,-.5,-8);
		glTexCoord2f(1,0);glVertex3f(-42,-.5,-8);
		glTexCoord2f(1,1);glVertex3f(-42,0,-8);
		glTexCoord2f(0,1);glVertex3f(-40, 0, -8);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,0,-8.5);
		glTexCoord2f(1,0);glVertex3f(-42,0,-8.5);
		glTexCoord2f(1,1);glVertex3f(-42,0,-8);
		glTexCoord2f(0,1);glVertex3f(-40, 0, -8);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,-.5,-8);
		glTexCoord2f(1,0);glVertex3f(-42,-.5,-8.5);
		glTexCoord2f(1,1);glVertex3f(-42,0,-8.5);
		glTexCoord2f(0,1);glVertex3f(-42, 0, -8);
		
		//10
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,-1,-8);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-8);
		glTexCoord2f(1,1);glVertex3f(-42,-1,-7.5);
		glTexCoord2f(0,1);glVertex3f(-40,-1, -7.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-40,-1,-8);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-8);
		glTexCoord2f(1,1);glVertex3f(-42,-.5,-8);
		glTexCoord2f(0,1);glVertex3f(-40, -.5, -8);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,-1,-7.5);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-7.5);
		glTexCoord2f(1,1);glVertex3f(-42,-.5,-7.5);
		glTexCoord2f(0,1);glVertex3f(-40, -.5, -7.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(-40,-.5,-8);
		glTexCoord2f(1,0);glVertex3f(-42,-.5,-8);
		glTexCoord2f(1,1);glVertex3f(-42,-.5,-7.5);
		glTexCoord2f(0,1);glVertex3f(-40, -.5, -7.5);
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(-42,-1,-7.5);
		glTexCoord2f(1,0);glVertex3f(-42,-1,-8);
		glTexCoord2f(1,1);glVertex3f(-42,-.5,-8);
		glTexCoord2f(0,1);glVertex3f(-42, -.5, -7.5);
		
	
		/*-- END OF STAIRS--*/
	
	
	glEnd();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//garage roof 
	//glColor3f(0.647059f, 0.164706f,0.164706f);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	glBegin(GL_QUADS);
		glColor3f(1,1,1);
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-20,3.1,-6);
		glTexCoord2f(1,0);glVertex3f(-31,3.1,-6);
		glTexCoord2f(1,1);glVertex3f(-31,3.1,6);
		glTexCoord2f(0,1);glVertex3f(-20, 3.1, 6);
	glEnd();
	
	
	//main roofS
	//glColor3f(0.647059f, 0.164706f,0.164706f); //ugly color fixed by textures
	glRotatef(10,1,0,0);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-15,6.9,-6);
		glTexCoord2f(1,0);glVertex3f(-36,6.9,-6);
		glTexCoord2f(1,1);glVertex3f(-36,6.9,-13.5);
		glTexCoord2f(0,1);glVertex3f(-15, 6.9, -13.5);
	glEnd();
	
	/* glColor3f(0.647059f, 0.164706f,0.164706f); */
	glRotatef(-20,1,0,0);
	
	glBegin(GL_QUADS);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(-15,11,-10);
		glTexCoord2f(1,0);glVertex3f(-36,11,-10);
		glTexCoord2f(1,1);glVertex3f(-36,11,-16.5);
		glTexCoord2f(0,1);glVertex3f(-15, 11, -16.5);
	glEnd();
	
	
	
	

	
	glDisable(GL_TEXTURE_2D);
	
	glPopMatrix();

}