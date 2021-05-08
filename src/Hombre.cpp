#include "Hombre.h"
#include "freeglut.h"

Hombre::Hombre()
{
	altura = 1.8f;
	aceleracion.y = aceleracion.x = velocidad.y = 0;
}

void Hombre::dibuja() {

	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();

}

void Hombre::mueve(float t) {

	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;


}