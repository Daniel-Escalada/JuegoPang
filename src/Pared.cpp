#include "Pared.h"
#include "freeglut.h"
#include "ColorRGB.h"

Pared::Pared()
{
	
	limite1.x = limite2.x = limite1.y = limite2.y = 0;
	limite3.x = 10;
	limite3.y = -10;
}

void Pared::setColor(unsigned char r, unsigned char v, unsigned char a)
{
	color.set(r,v,a);
}

void Pared::dibuja() {

	glDisable(GL_LIGHTING);
	color.ponColor();
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, limite3.x);
	glVertex3d(limite2.x, limite2.y, limite3.x);
	glVertex3d(limite2.x, limite2.y, limite3.y);
	glVertex3d(limite1.x, limite1.y, limite3.y);
	glEnd();
	glEnable(GL_LIGHTING);

}