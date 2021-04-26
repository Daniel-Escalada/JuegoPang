#include "Pared.h"
#include "freeglut.h"

Pared::Pared()
{
	rojo, verde, azul = 255;
	limite1.x = limite2.x = limite1.y = limite2.y = 0;
	limite3.x = 10;
	limite3.y = -10;
}

void Pared::setColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

void Pared::dibuja() {

	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, limite3.x);
	glVertex3d(limite2.x, limite2.y, limite3.x);
	glVertex3d(limite2.x, limite2.y, limite3.y);
	glVertex3d(limite1.x, limite1.y, limite3.y);
	glEnd();
	glEnable(GL_LIGHTING);

}