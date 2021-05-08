#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
class Pared
{
	friend class Interaccion;
public:
	Pared();
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	void dibuja();
	void setPos(float x1, float y1, float x2, float y2, float z1, float z2);

private:
	ColorRGB color;
	Vector2D limite1, limite2, limite3;
};
