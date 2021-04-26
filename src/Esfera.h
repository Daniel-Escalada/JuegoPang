#pragma once
#include "Vector2D.h"
class Esfera
{
public:
	Esfera();
	

	float radio;
	unsigned char rojo, verde, azul;
	Vector2D posicion, velocidad, aceleracion;

	void dibuja();
	void mueve(float t);
};

