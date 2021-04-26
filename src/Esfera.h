#pragma once
#include "Vector2D.h"
class Esfera
{
public:
	Esfera();
	virtual ~Esfera();

	float radio;
	unsigned char rojo, verde, azul;
	Vector2D posicion, velocidad, aceleracion;

	void dibuja();
	void mueve(float t);
};
Esfera::Esfera()
{
	rojo = verde = azul = 255; //blanco
	radio = 1.0f;
	aceleracion.y = -9.8f;
}
