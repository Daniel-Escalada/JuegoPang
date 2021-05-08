#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	Hombre();
	void dibuja();
	void mueve(float t);
	void setVel(float vx, float vy);
	
private:
	float altura;
	Vector2D posicion, velocidad, aceleracion;


};



