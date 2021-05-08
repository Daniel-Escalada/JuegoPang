#pragma once
#include "Vector2D.h"
class Bonus
{
public:
	Bonus();
	void dibuja();
	void mueve(float t);
	
private:
	float lado;
	Vector2D posicion, velocidad, aceleracion;

};

