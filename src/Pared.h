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
Pared::Pared()
{
	rojo, verde, azul = 255;
	limite1.x = limite2.x = limite1.y = limite2.y = 0;
}
