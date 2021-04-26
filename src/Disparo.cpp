#include "Disparo.h"
#include "freeglut.h"


Disparo::Disparo()
{
	velocidad.x = 0;
	radio = 0.25f;
	aceleracion.y = aceleracion.x = 0;
	velocidad.y = 10.0f;
	origen.x = 5.0f;
	origen.y = 0;
	estela.limite3.x = 0.1f;
	estela.limite3.y = -0.1f;
}


void Disparo::dibuja() {

	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();

	//estela
	
	glPushMatrix();

	estela.limite1.x = origen.x;
	estela.limite1.y = origen.y;
	estela.limite2.x = posicion.x;
	estela.limite2.y = posicion.y;
	
	estela.dibuja();

	
	glPopMatrix();
	//fin estela
}

void Disparo::mueve(float t) {

	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;

}