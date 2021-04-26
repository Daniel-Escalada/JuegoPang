#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	Hombre();
	

	float altura;
	Vector2D posicion, velocidad, aceleracion;

	void dibuja();
	void mueve(float t);
};



