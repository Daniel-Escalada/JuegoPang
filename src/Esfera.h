#pragma once
#include "Vector2D.h"
class Esfera
{

private:

	float radio;
	unsigned char rojo, verde, azul;
	Vector2D posicion, velocidad, aceleracion;

public:

	Esfera();
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	// Radio minimo
	void setRadio(float r);
	// Posicion x e y
	void setPos(float ix, float iy);


	void dibuja();
	void mueve(float t);
};

