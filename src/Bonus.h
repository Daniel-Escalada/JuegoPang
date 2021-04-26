#pragma once
#include "Vector2D.h"
class Bonus
{
public:
	Bonus();
	

	float lado;
	Vector2D posicion, velocidad, aceleracion;

	void dibuja();
	void mueve(float t);
};

