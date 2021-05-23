#pragma once
#include "Vector2D.h"
#include "Pared.h"
class Disparo
{
	friend class Interaccion;
public:
	
	Disparo();
	void dibuja();
	void mueve(float t);
	void setPos(float ix, float iy);
	void setVel(float vx, float vy);
	float getRadio() { return radio; }
	Vector2D getPos() { return posicion; }
	
private:
	float radio;
	Vector2D origen;
    Vector2D posicion, velocidad, aceleracion;
	Pared estela;


};
