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
	estela.setColor(0, 255, 255);

}
void Disparo::dibuja() {

	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();

	//estela
	
	glPushMatrix();


	estela.setPos(origen.x, origen.y,posicion.x,posicion.y, 0.1f, -0.1f);

	
	estela.dibuja();

	glPopMatrix();
	//fin estela
}

void Disparo::mueve(float t) {

	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;


}

void Disparo::setPos(float ix, float iy) {
	posicion.x = origen.x = ix;
	posicion.y = origen.y = iy;
	
}