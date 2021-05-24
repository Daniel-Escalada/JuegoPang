#pragma once
#include "Vector2D.h"
class ObjetoMovil
{
protected:
	Vector2D posicion, velocidad, aceleracion;
public:
	void mueve(float t);

};

