#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	Disparo();
	virtual ~Disparo();

	float radio;
    Vector2D posicion, velocidad, aceleracion;
};
Disparo::Disparo()
{
	velocidad.x = 0;
	radio = 0.25f;
	aceleracion.y = aceleracion.x = 0;
}
