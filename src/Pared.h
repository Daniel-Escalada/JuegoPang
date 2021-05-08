#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
class Pared
{

public:
	Pared();
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	void dibuja();

private:
	ColorRGB color;
	Vector2D limite1, limite2, limite3;
};
