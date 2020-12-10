#ifndef house3
#define house3

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


void redhouse();
void cylinder(double height, double rb, double rt, int slices, int stacks);

#endif