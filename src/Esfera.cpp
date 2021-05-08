#include "Esfera.h"
#include "freeglut.h"
#include "ColorRGB.h"

Esfera::Esfera()
{
	
	radio = 1.0f;
	aceleracion.y = -9.8f;
}

void Esfera::setRadio(float r)
{
	if (r < 0.1f) r = 0.1f;
	radio = r;
}
void Esfera::setColor(unsigned char r, unsigned char v, unsigned char a)
{
	color.set(r,v,a);
}
void Esfera::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}

void Esfera::dibuja() {

	color.ponColor();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);

}

void Esfera::mueve(float t) {

	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

}