#include "house1.h"
#include "house3.h"
#include "details.h"
#include "CSCIx229.h"


unsigned int texture[21];





void yellowhouse(){
	glPushMatrix();
	
	/* MAIN BUILDING */
	
	
	//glColor3f(0.858824f, 0.576471f ,0.439216f);
	glEnable(GL_TEXTURE_2D);
	
	glBindTexture(GL_TEXTURE_2D, texture[4]);
	glBegin(GL_QUADS);
	//floor
	
		glVertex3f(16,-1,-6);
		glVertex3f(29,-1,-6);
		glVertex3f(29,-1,-17);
		glVertex3f(16, -1, -17);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0); glVertex3f(16,-1,-6);
		glTexCoord2f(2,0); glVertex3f(29,-1,-6);
		glTexCoord2f(2,2); glVertex3f(29,8,-6);
		glTexCoord2f(0,2); glVertex3f(16,8,-6);
		
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0); glVertex3f(16,-1,-17);
		glTexCoord2f(2,0); glVertex3f(29,-1,-17);
		glTexCoord2f(2,2); glVertex3f(29,10,-17);
		glTexCoord2f(0,2); glVertex3f(16,10,-17);
		
	//back 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(29,-1,-6);
		glTexCoord2f(1,0); glVertex3f(29,-1,-17);
		glTexCoord2f(1,2.5); glVertex3f(29,10,-17);
		glTexCoord2f(0,2); glVertex3f(29,8,-6);
		
	//font 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(16,-1,-6);
		glTexCoord2f(1,0); glVertex3f(16,-1,-17);
		glTexCoord2f(1,2.5); glVertex3f(16,10,-17);
		glTexCoord2f(0,2); glVertex3f(16,8,-6);
	

	
	
	//GARAGE
	
	//garage floor 
		glVertex3f(18,-1,-19);
		glVertex3f(27,-1,-19);
		glVertex3f(27,-1,-25);
		glVertex3f(18, -1, -25);
		
	//garage front 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(18,-1,-17);
		glTexCoord2f(1,0); glVertex3f(18,-1,-25);
		glTexCoord2f(1,1); glVertex3f(18,4,-25);
		glTexCoord2f(0,1.25); glVertex3f(18,5,-17);
		
	//garage left 
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0); glVertex3f(18,-1,-25);
		glTexCoord2f(1,0); glVertex3f(27,-1,-25);
		glTexCoord2f(1,1); glVertex3f(27,4,-25);
		glTexCoord2f(0,1); glVertex3f(18,4,-25);
	
	//garage back 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(27,-1,-17);
		glTexCoord2f(1,0); glVertex3f(27,-1,-25);
		glTexCoord2f(1,1); glVertex3f(27,4,-25);
		glTexCoord2f(0,1.25); glVertex3f(27,5,-17);
		
		
	//SHED
	
	//shed left 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(48,-1,-34);
		glTexCoord2f(1,0); glVertex3f(48,-1,-30);
		glTexCoord2f(1,1.75); glVertex3f(48,1.9,-30);
		glTexCoord2f(0,1.25); glVertex3f(48,1,-34);
		
	//shed right
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0); glVertex3f(53,-1,-34);
		glTexCoord2f(1,0); glVertex3f(53,-1,-30);
		glTexCoord2f(1,1.75); glVertex3f(53,1.9,-30);
		glTexCoord2f(0,1.25); glVertex3f(53,1,-34);
	
	//back
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0); glVertex3f(53,-1,-33.9);
		glTexCoord2f(1,0); glVertex3f(48,-1,-33.9);
		glTexCoord2f(1,1); glVertex3f(48,1,-33.9);
		glTexCoord2f(0,1); glVertex3f(53,1,-33.9);
		
	//font
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0); glVertex3f(53,-1,-30);
		glTexCoord2f(1,0); glVertex3f(48,-1,-30);
		glTexCoord2f(1,1); glVertex3f(48,1.9,-30);
		glTexCoord2f(0,1); glVertex3f(53,1.9,-30);
		
		
	glEnd();
	
	
	//CHIMEY
	//glColor3f(0.752941f, 0.752941f, 0.752941f);
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	glBegin(GL_QUADS);
	//cfront
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15,-1,-17);
		glTexCoord2f(1,0);glVertex3f(15,-1,-19);
		glTexCoord2f(1,1);glVertex3f(15,5,-19);
		glTexCoord2f(0,1);glVertex3f(15,5,-17);
		
		
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15,5,-17);
		glTexCoord2f(1,0);glVertex3f(15,5,-19);
		glTexCoord2f(1,1);glVertex3f(15,11,-19);
		glTexCoord2f(0,1);glVertex3f(15,11,-17);
		
	//cright
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(15,-1,-17);
		glTexCoord2f(1,0);glVertex3f(26,-1,-17);
		glTexCoord2f(1,1);glVertex3f(26,11,-17);
		glTexCoord2f(0,1);glVertex3f(15,11,-17);
	
	//cleft
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(15,-1,-19);
		glTexCoord2f(1,0);glVertex3f(26,-1,-19);
		glTexCoord2f(1,1);glVertex3f(26,11,-19);
		glTexCoord2f(0,1);glVertex3f(15,11,-19);
	
	//cback
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(26,-1,-17);
		glTexCoord2f(1,0);glVertex3f(26,-1,-19);
		glTexCoord2f(1,1);glVertex3f(26,11,-19);
		glTexCoord2f(0,1);glVertex3f(26,11,-17);
		
	//ctop
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(15,11,-17);
		glTexCoord2f(1,0);glVertex3f(26,11,-17);
		glTexCoord2f(1,1);glVertex3f(26,11,-19);
		glTexCoord2f(0,1);glVertex3f(15,11,-19);
		
	
	glEnd();
	
	
	/* ROOFS */
		
	//main roof
	//glColor3f(0.647059f, 0.164706f,0.164706f); //ugly color fixed by textures
	glRotatef(10,1,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glBegin(GL_QUADS);
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(14,7,-6);
		glTexCoord2f(1,0);glVertex3f(31,7,-6);
		glTexCoord2f(1,1);glVertex3f(31,7,-18.5);
		glTexCoord2f(0,1);glVertex3f(14, 7, -18.5);
	glEnd();
	
	
	//garage roof 
	//glColor3f(0.647059f, 0.164706f,0.164706f); //ugly color fixed by textures
	glRotatef(-10,1,0,0);
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	glBegin(GL_QUADS);
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(17,5,-17);
		glTexCoord2f(1,0);glVertex3f(28,5,-17);
		glTexCoord2f(1,1);glVertex3f(28,4,-26);
		glTexCoord2f(0,1);glVertex3f(17, 4, -26);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(47.5,2,-29.5);
		glTexCoord2f(1,0);glVertex3f(53.5,2,-29.5);
		glTexCoord2f(1,1);glVertex3f(53.5,1,-34.5);
		glTexCoord2f(0,1);glVertex3f(47.5, 1, -34.5);
	glEnd();
	
	
	
	
	//FRONT WOOD DETAIL
	glColor3f(1,1,1);
	glBindTexture(GL_TEXTURE_2D, texture[7]);
	
	glBegin(GL_QUADS);
	
	//---main ledge
	
	//bottom
		glVertex3f(13,4,-17);
		glVertex3f(16,4,-17);
		glVertex3f(16,4,-7);
		glVertex3f(13, 4, -7);
		
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(13,4.5,-17);
		glTexCoord2f(1,0);glVertex3f(16,4.5,-17);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -7);
		
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(13,4,-17);
		glTexCoord2f(1,0);glVertex3f(16,4,-17);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-17);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -17);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(13,4,-7);
		glTexCoord2f(1,0);glVertex3f(16,4,-7);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -7);
		
	//front
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(13,4,-7);
		glTexCoord2f(1,0);glVertex3f(13,4,-17);
		glTexCoord2f(1,1);glVertex3f(13,4.5,-17);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -7);
		
	//---leg
	
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(13,4.5,-7);
		glTexCoord2f(1,0);glVertex3f(16,4.5,-7);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-6.7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -6.7);
	
	//left
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(13,-1,-7);
		glTexCoord2f(1,0);glVertex3f(16,-1,-7);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -7);
		
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(13,-1,-6.7);
		glTexCoord2f(1,0);glVertex3f(16,-1,-6.7);
		glTexCoord2f(1,1);glVertex3f(16,4.5,-6.7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -6.7);
	
	//front 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(13,-1,-6.7);
		glTexCoord2f(1,0);glVertex3f(13,-1,-7);
		glTexCoord2f(1,1);glVertex3f(13,4.5,-7);
		glTexCoord2f(0,1);glVertex3f(13, 4.5, -6.7);
		
	
	glEnd();
	
	//BACK WOOD DETAIL
	glColor3f(1,1,1);
	glBindTexture(GL_TEXTURE_2D, texture[7]);
	glBegin(GL_QUADS);
		
	//---1f patio 
	//bottom 
		glVertex3f(27,-1,-24);
		glVertex3f(40,-1,-24);
		glVertex3f(40,-1,-6);
		glVertex3f(27, -1, -6);
		
	//left
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(27,-1,-24);
		glTexCoord2f(1,0);glVertex3f(40,-1,-24);
		glTexCoord2f(1,1);glVertex3f(40,-.5,-24);
		glTexCoord2f(0,1);glVertex3f(27, -.5, -24);
	
	
	//right
		glNormal3d(0, 0, -1);
		glTexCoord2f(0,0);glVertex3f(27,-1,-6);
		glTexCoord2f(1,0);glVertex3f(40,-1,-6);
		glTexCoord2f(1,1);glVertex3f(40,-.5,-6);
		glTexCoord2f(0,1);glVertex3f(27, -.5, -6);
	
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(27,-.5,-24);
		glTexCoord2f(1,0);glVertex3f(40,-.5,-24);
		glTexCoord2f(1,1);glVertex3f(40,-.5,-6);
		glTexCoord2f(0,1);glVertex3f(27, -.5, -6);
	
	//front
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(40,-1,-6);
		glTexCoord2f(1,0);glVertex3f(40,-1,-24);
		glTexCoord2f(1,1);glVertex3f(40,-.5,-24);
		glTexCoord2f(0,1);glVertex3f(40, -.5, -6);
		
	//---legs---
	//font left 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,-1,-8);
		glTexCoord2f(1,0);glVertex3f(37,-1,-8.5);
		glTexCoord2f(1,1);glVertex3f(37,4,-8.5);
		glTexCoord2f(0,1);glVertex3f(37, 4, -8);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(36.5,-1,-8);
		glTexCoord2f(1,0);glVertex3f(36.5,-1,-8.5);
		glTexCoord2f(1,1);glVertex3f(36.5,4,-8.5);
		glTexCoord2f(0,1);glVertex3f(36.5, 4, -8);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(36.5,-1,-8.5);
		glTexCoord2f(1,0);glVertex3f(37,-1,-8.5);
		glTexCoord2f(1,1);glVertex3f(37,4,-8.5);
		glTexCoord2f(0,1);glVertex3f(36.5, 4, -8.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(36.5,-1,-8);
		glTexCoord2f(1,0);glVertex3f(37,-1,-8);
		glTexCoord2f(1,1);glVertex3f(37,4,-8);
		glTexCoord2f(0,1);glVertex3f(36.5, 4, -8);
		
	//back left 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29.5,-1,-8);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-8.5);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-8.5);
		glTexCoord2f(0,1);glVertex3f(29.5, 4, -8);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29,-1,-8.5);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-8.5);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-8.5);
		glTexCoord2f(0,1);glVertex3f(29, 4, -8.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(29,-1,-8);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-8);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-8);
		glTexCoord2f(0,1);glVertex3f(29, 4, -8);
		
	//front right
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(35,-1,-16.5);
		glTexCoord2f(1,0);glVertex3f(35,-1,-17);
		glTexCoord2f(1,1);glVertex3f(35,4,-17);
		glTexCoord2f(0,1);glVertex3f(35, 4, -16.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(34.5,-1,-16.5);
		glTexCoord2f(1,0);glVertex3f(34.5,-1,-17);
		glTexCoord2f(1,1);glVertex3f(34.5,4,-17);
		glTexCoord2f(0,1);glVertex3f(34.5, 4, -16.5);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(34.5,-1,-17);
		glTexCoord2f(1,0);glVertex3f(35,-1,-17);
		glTexCoord2f(1,1);glVertex3f(35,4,-17);
		glTexCoord2f(0,1);glVertex3f(34.5, 4, -17);
		
		glNormal3d(0, 0,1);
		glTexCoord2f(0,0);glVertex3f(34.5,-1,-16.5);
		glTexCoord2f(1,0);glVertex3f(35,-1,-16.5);
		glTexCoord2f(1,1);glVertex3f(35,4,-16.5);
		glTexCoord2f(0,1);glVertex3f(34.5, 4, -16.5);
		
	//back right 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29.5,-1,-16.5);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-17);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-17);
		glTexCoord2f(0,1);glVertex3f(29.5, 4, -16.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29,-1,-17);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-17);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-17);
		glTexCoord2f(0,1);glVertex3f(29, 4, -17);
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(29,-1,-16.5);
		glTexCoord2f(1,0);glVertex3f(29.5,-1,-16.5);
		glTexCoord2f(1,1);glVertex3f(29.5,4,-16.5);
		glTexCoord2f(0,1);glVertex3f(29, 4, -16.5);
		
		
		
	//2f patio
	//bottom 
		
		glVertex3f(29,4,-17);
		glVertex3f(35,4,-17);
		glVertex3f(35,4,-8);
		glVertex3f(29,4, -8);
	
	//left
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(29,4,-17);
		glTexCoord2f(1,0);glVertex3f(35,4,-17);
		glTexCoord2f(1,1);glVertex3f(35,4.5,-17);
		glTexCoord2f(0,1);glVertex3f(29, 4.5, -17);
	
	
	//right
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(29,4,-8);
		glTexCoord2f(1,0);glVertex3f(35,4,-8);
		glTexCoord2f(1,1);glVertex3f(35,4.5,-8);
		glTexCoord2f(0,1);glVertex3f(29, 4.5, -8);
	
	//top
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(29,4.5,-17);
		glTexCoord2f(1,0);glVertex3f(35,4.5,-17);
		glTexCoord2f(1,1);glVertex3f(35,4.5,-8);
		glTexCoord2f(0,1);glVertex3f(29, 4.5, -8);
	
	//front
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(35,4,-8);
		glTexCoord2f(1,0);glVertex3f(35,4,-17);
		glTexCoord2f(1,1);glVertex3f(35,4.5,-17);
		glTexCoord2f(0,1);glVertex3f(35, 4.5, -8);
		
	//--toplanding
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,4,-11);
		glTexCoord2f(1,0);glVertex3f(37,4,-11);
		glTexCoord2f(1,1);glVertex3f(37,4,-8);
		glTexCoord2f(0,1);glVertex3f(35,4, -8);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,4,-11);
		glTexCoord2f(1,0);glVertex3f(37,4,-11);
		glTexCoord2f(1,1);glVertex3f(37,4.5,-11);
		glTexCoord2f(0,1);glVertex3f(35, 4.5, -11);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,4,-8);
		glTexCoord2f(1,0);glVertex3f(37,4,-8);
		glTexCoord2f(1,1);glVertex3f(37,4.5,-8);
		glTexCoord2f(0,1);glVertex3f(35, 4.5, -8);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,4.5,-11);
		glTexCoord2f(1,0);glVertex3f(37,4.5,-11);
		glTexCoord2f(1,1);glVertex3f(37,4.5,-8);
		glTexCoord2f(0,1);glVertex3f(35, 4.5, -8);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,4,-8);
		glTexCoord2f(1,0);glVertex3f(37,4,-11);
		glTexCoord2f(1,1);glVertex3f(37,4.5,-11);
		glTexCoord2f(0,1);glVertex3f(37, 4.5, -8);
		
	/* ---STAIRS ---*/
		glColor3f(1,1,1);
		//1
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,3.5,-11.5);
		glTexCoord2f(1,0);glVertex3f(37,3.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(37,3.5,-11);
		glTexCoord2f(0,1);glVertex3f(35,3.5, -11);
	
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,3.5,-11.5);
		glTexCoord2f(1,0);glVertex3f(37,3.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(37,4,-11.5);
		glTexCoord2f(0,1);glVertex3f(35, 4, -11.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,3.5,-11);
		glTexCoord2f(1,0);glVertex3f(37,3.5,-11);
		glTexCoord2f(1,1);glVertex3f(37,4,-11);
		glTexCoord2f(0,1);glVertex3f(35, 4, -11);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,4,-11.5);
		glTexCoord2f(1,0);glVertex3f(37,4,-11.5);
		glTexCoord2f(1,1);glVertex3f(37,4,-11);
		glTexCoord2f(0,1);glVertex3f(35, 4, -11);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,3.5,-11);
		glTexCoord2f(1,0);glVertex3f(37,3.5,-11.5);
		glTexCoord2f(1,1);glVertex3f(37,4,-11.5);
		glTexCoord2f(0,1);glVertex3f(37, 4, -11);
		
		//2
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,3,-12);
		glTexCoord2f(1,0);glVertex3f(37,3,-12);
		glTexCoord2f(1,1);glVertex3f(37,3,-11.5);
		glTexCoord2f(0,1);glVertex3f(35,3, -11.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,3,-12);
		glTexCoord2f(1,0);glVertex3f(37,3,-12);
		glTexCoord2f(1,1);glVertex3f(37,3.5,-12);
		glTexCoord2f(0,1);glVertex3f(35, 3.5, -12);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,3,-11.5);
		glTexCoord2f(1,0);glVertex3f(37,3,-11.5);
		glTexCoord2f(1,1);glVertex3f(37,3.5,-11.5);
		glTexCoord2f(0,1);glVertex3f(35, 3.5, -11.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,3.5,-12);
		glTexCoord2f(1,0);glVertex3f(37,3.5,-12);
		glTexCoord2f(1,1);glVertex3f(37,3.5,-11.5);
		glTexCoord2f(0,1);glVertex3f(35, 3.5, -11.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,3,-11.5);
		glTexCoord2f(1,0);glVertex3f(37,3,-12);
		glTexCoord2f(1,1);glVertex3f(37,3.5,-12);
		glTexCoord2f(0,1);glVertex3f(37, 3.5, -11.5);
		
		//3
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,2.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(37,2.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(37,2.5,-12);
		glTexCoord2f(0,1);glVertex3f(35,2.5, -12);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,2.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(37,2.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(37,3,-12.5);
		glTexCoord2f(0,1);glVertex3f(35, 3, -12.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,2.5,-12);
		glTexCoord2f(1,0);glVertex3f(37,2.5,-12);
		glTexCoord2f(1,1);glVertex3f(37,3,-12);
		glTexCoord2f(0,1);glVertex3f(35, 3, -12);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,3,-12.5);
		glTexCoord2f(1,0);glVertex3f(37,3,-12.5);
		glTexCoord2f(1,1);glVertex3f(37,3,-12);
		glTexCoord2f(0,1);glVertex3f(35, 3, -12);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,2.5,-12);
		glTexCoord2f(1,0);glVertex3f(37,2.5,-12.5);
		glTexCoord2f(1,1);glVertex3f(37,3,-12.5);
		glTexCoord2f(0,1);glVertex3f(37, 3, -12);
		
		//4
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,2,-13);
		glTexCoord2f(1,0);glVertex3f(37,2,-13);
		glTexCoord2f(1,1);glVertex3f(37,2,-12.5);
		glTexCoord2f(0,1);glVertex3f(35,2, -12.5);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,2,-13);
		glTexCoord2f(1,0);glVertex3f(37,2,-13);
		glTexCoord2f(1,1);glVertex3f(37,2.5,-13);
		glTexCoord2f(0,1);glVertex3f(35, 2.5, -13);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,2,-12.5);
		glTexCoord2f(1,0);glVertex3f(37,2,-12.5);
		glTexCoord2f(1,1);glVertex3f(37,2.5,-12.5);
		glTexCoord2f(0,1);glVertex3f(35, 2.5, -12.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,2.5,-13);
		glTexCoord2f(1,0);glVertex3f(37,2.5,-13);
		glTexCoord2f(1,1);glVertex3f(37,2.5,-12.5);
		glTexCoord2f(0,1);glVertex3f(35, 2.5, -12.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,2,-12.5);
		glTexCoord2f(1,0);glVertex3f(37,2,-13);
		glTexCoord2f(1,1);glVertex3f(37,2.5,-13);
		glTexCoord2f(0,1);glVertex3f(37, 2.5, -12.5);
		
		//5
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,1.5,-13.5);
		glTexCoord2f(1,0);glVertex3f(37,1.5,-13.5);
		glTexCoord2f(1,1);glVertex3f(37,1.5,-13);
		glTexCoord2f(0,1);glVertex3f(35,1.5, -13);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,1.5,-13.5);
		glTexCoord2f(1,0);glVertex3f(37,1.5,-13.5);
		glTexCoord2f(1,1);glVertex3f(37,2,-13.5);
		glTexCoord2f(0,1);glVertex3f(35, 2, -13.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,1.5,-13);
		glTexCoord2f(1,0);glVertex3f(37,1.5,-13);
		glTexCoord2f(1,1);glVertex3f(37,2,-13);
		glTexCoord2f(0,1);glVertex3f(35, 2., -13);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,2,-13.5);
		glTexCoord2f(1,0);glVertex3f(37,2,-13.5);
		glTexCoord2f(1,1);glVertex3f(37,2,-13);
		glTexCoord2f(0,1);glVertex3f(35, 2, -13);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,1.5,-13);
		glTexCoord2f(1,0);glVertex3f(37,1.5,-13.5);
		glTexCoord2f(1,1);glVertex3f(37,2,-13.5);
		glTexCoord2f(0,1);glVertex3f(37, 2, -13);
		
		//6
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,1,-14);
		glTexCoord2f(1,0);glVertex3f(37,1,-14);
		glTexCoord2f(1,1);glVertex3f(37,1,-13.5);
		glTexCoord2f(0,1);glVertex3f(35,1, -13.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,1,-14);
		glTexCoord2f(1,0);glVertex3f(37,1,-14);
		glTexCoord2f(1,1);glVertex3f(37,1.5,-14);
		glTexCoord2f(0,1);glVertex3f(35, 1.5, -14);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,1,-13.5);
		glTexCoord2f(1,0);glVertex3f(37,1,-13.5);
		glTexCoord2f(1,1);glVertex3f(37,1.5,-13.5);
		glTexCoord2f(0,1);glVertex3f(35, 1.5, -13.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,1.5,-14);
		glTexCoord2f(1,0);glVertex3f(37,1.5,-14);
		glTexCoord2f(1,1);glVertex3f(37,1.5,-13.5);
		glTexCoord2f(0,1);glVertex3f(35, 1.5, -13.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,1,-13.5);
		glTexCoord2f(1,0);glVertex3f(37,1,-14);
		glTexCoord2f(1,1);glVertex3f(37,1.5,-14);
		glTexCoord2f(0,1);glVertex3f(37, 1.5, -13.5);
		
		//7
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,.5,-14.5);
		glTexCoord2f(1,0);glVertex3f(37,.5,-14.5);
		glTexCoord2f(1,1);glVertex3f(37,.5,-14);
		glTexCoord2f(0,1);glVertex3f(35,.5, -14);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,.5,-14.5);
		glTexCoord2f(1,0);glVertex3f(37,.5,-14.5);
		glTexCoord2f(1,1);glVertex3f(37,1,-14.5);
		glTexCoord2f(0,1);glVertex3f(35, 1, -14.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,.5,-14);
		glTexCoord2f(1,0);glVertex3f(37,.5,-14);
		glTexCoord2f(1,1);glVertex3f(37,1,-14);
		glTexCoord2f(0,1);glVertex3f(35, 1, -14);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,1,-14.5);
		glTexCoord2f(1,0);glVertex3f(37,1,-14.5);
		glTexCoord2f(1,1);glVertex3f(37,1,-14);
		glTexCoord2f(0,1);glVertex3f(35, 1, -14);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,.5,-14);
		glTexCoord2f(1,0);glVertex3f(37,.5,-14.5);
		glTexCoord2f(1,1);glVertex3f(37,1,-14.5);
		glTexCoord2f(0,1);glVertex3f(37, 1, -14);
		
		//8
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,0,-15);
		glTexCoord2f(1,0);glVertex3f(37,0,-15);
		glTexCoord2f(1,1);glVertex3f(37,0,-14.5);
		glTexCoord2f(0,1);glVertex3f(35,0, -14.5);

		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,0,-15);
		glTexCoord2f(1,0);glVertex3f(37,0,-15);
		glTexCoord2f(1,1);glVertex3f(37,.5,-15);
		glTexCoord2f(0,1);glVertex3f(35, .5, -15);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,0,-14.5);
		glTexCoord2f(1,0);glVertex3f(37,0,-14.5);
		glTexCoord2f(1,1);glVertex3f(37,.5,-14.5);
		glTexCoord2f(0,1);glVertex3f(35, .5, -14.5);	

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,.5,-15);
		glTexCoord2f(1,0);glVertex3f(37,.5,-15);
		glTexCoord2f(1,1);glVertex3f(37,.5,-14.5);
		glTexCoord2f(0,1);glVertex3f(35, .5, -14.5);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,0,-14.5);
		glTexCoord2f(1,0);glVertex3f(37,0,-15);
		glTexCoord2f(1,1);glVertex3f(37,.5,-15);
		glTexCoord2f(0,1);glVertex3f(37, .5, -14.5);
		
		//9
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,-.5,-15.5);
		glTexCoord2f(1,0);glVertex3f(37,-.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(37,-.5,-15);
		glTexCoord2f(0,1);glVertex3f(35,-.5, -15);
		
		glNormal3d(0, 1, 0);
		glTexCoord2f(0,0);glVertex3f(35,-.5,-15.5);
		glTexCoord2f(1,0);glVertex3f(37,-.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(37,0,-15.5);
		glTexCoord2f(0,1);glVertex3f(35, 0, -15.5);

		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,-.5,-15);
		glTexCoord2f(1,0);glVertex3f(37,-.5,-15);
		glTexCoord2f(1,1);glVertex3f(37,0,-15);
		glTexCoord2f(0,1);glVertex3f(35, 0, -15);	
		
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(35,0,-15.5);
		glTexCoord2f(1,0);glVertex3f(37,0,-15.5);
		glTexCoord2f(1,1);glVertex3f(37,0,-15);
		glTexCoord2f(0,1);glVertex3f(35, 0, -15);
		
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(37,-.5,-15);
		glTexCoord2f(1,0);glVertex3f(37,-.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(37,0,-15.5);
		glTexCoord2f(0,1);glVertex3f(37, 0, -15);
		
	
		/*-- END OF STAIRS--*/
	

	
	glEnd();
	
	
	

	
	//WINDOWS
	
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	glBegin(GL_QUADS);
		
		//font- top right
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15.9,5,-7.5);
		glTexCoord2f(1,0);glVertex3f(15.9,5,-10.5);
		glTexCoord2f(1,1);glVertex3f(15.9,8,-10.5);
		glTexCoord2f(0,1);glVertex3f(15.9,8,-7.5);
		
		//font - top left 
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15.9,5,-12.5);
		glTexCoord2f(1,0);glVertex3f(15.9,5,-15.5);
		glTexCoord2f(1,1);glVertex3f(15.9,8,-15.5);
		glTexCoord2f(0,1);glVertex3f(15.9,8,-12.5);
		
		//font - bottom left
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15.9,0.5,-12.5);
		glTexCoord2f(1,0);glVertex3f(15.9,0.5,-15.5);
		glTexCoord2f(1,1);glVertex3f(15.9,3.5,-15.5);
		glTexCoord2f(0,1);glVertex3f(15.9,3.5,-12.5);
		
		
		
	glEnd();
	
	
	//door
	glColor3f(1.0f, 1.0f, 1.0f);
	glBindTexture(GL_TEXTURE_2D, texture[8]);
	glBegin(GL_QUADS);
		
	//font door
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(15.9,-1,-8);
		glTexCoord2f(1,0);glVertex3f(15.9,-1,-10);
		glTexCoord2f(1,1);glVertex3f(15.9,2.5,-10);
		glTexCoord2f(0,1);glVertex3f(15.9,2.5,-8);
		
	//back door 
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29.1,-.5,-10);
		glTexCoord2f(1,0);glVertex3f(29.1,-.5,-12);
		glTexCoord2f(1,1);glVertex3f(29.1,3,-12);
		glTexCoord2f(0,1);glVertex3f(29.1,3,-10);
		
	//back door top
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(29.1,4.5,-12);
		glTexCoord2f(1,0);glVertex3f(29.1,4.5,-14);
		glTexCoord2f(1,1);glVertex3f(29.1,7.5,-14);
		glTexCoord2f(0,1);glVertex3f(29.1,7.5,-12);
		
	//garage doors
		glNormal3d(-1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(27.1,-.5,-20);
		glTexCoord2f(1,0);glVertex3f(27.1,-.5,-22);
		glTexCoord2f(1,1);glVertex3f(27.1,3,-22);
		glTexCoord2f(0,1);glVertex3f(27.1,3,-20);
		
	//shed door 
		glNormal3d(0, 0, 1);
		glTexCoord2f(0,0);glVertex3f(51,-1,-29.9);
		glTexCoord2f(1,0);glVertex3f(49.5,-1,-29.9);
		glTexCoord2f(1,1);glVertex3f(49.5,1.5,-29.9);
		glTexCoord2f(0,1);glVertex3f(51,1.5,-29.9);
	glEnd();
		
		
	glBindTexture(GL_TEXTURE_2D, texture[9]);
	glBegin(GL_QUADS);
		glNormal3d(1, 0, 0);
		glTexCoord2f(0,0);glVertex3f(17.9,-1,-20);
		glTexCoord2f(1,0);glVertex3f(17.9,-1,-24);
		glTexCoord2f(1,1);glVertex3f(17.9,2.5,-24);
		glTexCoord2f(0,1);glVertex3f(17.9,2.5,-20);
		
	
	glEnd();
	
	glDisable(GL_TEXTURE_2D);
	
	//body
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(51,.9, -28);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.9,.23,.23,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(50.75,.9, -28);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	//arm
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(51.25,.9, -28);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(.7,.1,.1,12,12);
	glPopMatrix();
	
	//legs
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(51.15,0, -28);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(50.85,0, -28);
	glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
	cylinder(1.1,.1,.1,12,12);
	glPopMatrix();
	
	//head
	glPushMatrix();
	glColor3f( 0.658824f, 0.658824f, 0.658824f);
	glTranslatef(51,1.1,-28);
	sphere(.25);
	glPopMatrix();
	
	glPopMatrix();
}
