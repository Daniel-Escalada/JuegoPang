#pragma once

#include "Vector2D.h"
#include "ColorRGB.h"


class Esfera
{

	friend class Interaccion;

public:

	Esfera();
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	// Radio minimo
	void setRadio(float r);
	// Posicion x e y
	void setPos(float ix, float iy);
	void setVel(float vx, float vy);

	void dibuja();
	void mueve(float t);
	//bool colision();

private:

	float radio;
	ColorRGB color;
	Vector2D posicion, velocidad, aceleracion;
};

