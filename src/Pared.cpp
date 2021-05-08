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

void Pared::setPos(float x1, float y1, float x2, float y2, float z1, float z2)
{
	limite1.x = x1;
	limite1.y = y1;
	limite2.x = x2;
	limite2.y = y2;
	limite3.x = z1;
	limite3.y = z2;
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

float Pared::distancia(Vector2D punto, Vector2D* direccion)
{
	Vector2D u = (punto - limite1);
	Vector2D v = (limite2 - limite1).unitario();
	float longitud = (limite1 - limite2).modulo();
	Vector2D dir;
	float valor = u * v;
	float distancia = 0;
	if (valor < 0)
		dir = u;
	else if (valor > longitud)
		dir = (punto - limite2);
	else
		dir = u - v * valor;
	distancia = dir.modulo();
	if (direccion != 0) //si nos dan un vector…
		*direccion = dir.unitario();
	return distancia;
}