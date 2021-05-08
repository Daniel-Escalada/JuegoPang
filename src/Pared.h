#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
class Pared
{
private:
	ColorRGB color;
public:
	Pared();
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);


	Vector2D limite1, limite2, limite3;

	void dibuja();
};
