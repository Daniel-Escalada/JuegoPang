#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	Hombre();
	void dibuja();
	void mueve(float t);
	
private:
	float altura;
	Vector2D posicion, velocidad, aceleracion;


};



