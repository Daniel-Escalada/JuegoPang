#include "Pared.h"
#include "freeglut.h"

Pared::Pared()
{
	rojo, verde, azul = 255;
	limite1.x = limite2.x = limite1.y = limite2.y = 0;
}


void Pared::dibuja() {

	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 10);
	glVertex3d(limite2.x, limite2.y, 10);
	glVertex3d(limite2.x, limite2.y, -10);
	glVertex3d(limite1.x, limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);

}