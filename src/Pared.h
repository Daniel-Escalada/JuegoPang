#pragma once
#include "Vector2D.h"
class Pared
{
public:
	Pared();
	virtual ~Pared();

	unsigned char rojo, verde, azul;
	Vector2D limite1, limite2;
};
