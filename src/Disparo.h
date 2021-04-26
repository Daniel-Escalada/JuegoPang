#pragma once
#include "Vector2D.h"
#include "Pared.h"
class Disparo
{
public:
	Disparo();
	

	float radio;
	Vector2D origen;
    Vector2D posicion, velocidad, aceleracion;
	Pared estela;

	void dibuja();
	void mueve(float t);
};
