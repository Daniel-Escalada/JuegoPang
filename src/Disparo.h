#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	Disparo();
	

	float radio;
    Vector2D posicion, velocidad, aceleracion;

	void dibuja();
	void mueve(float t);
};
