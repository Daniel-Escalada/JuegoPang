#include "Disparo.h"
#include "freeglut.h"

Disparo::Disparo()
{
	velocidad.x = 0;
	radio = 0.25f;
	aceleracion.y = aceleracion.x = 0;
}


void Disparo::dibuja() {

	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
}

void Disparo::mueve(float t) {

	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;

}