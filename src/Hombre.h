#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"
using ETSIDI::SpriteSequence;
class Hombre
{
	friend class Interaccion;
public:
	Hombre();
	void dibuja();
	void mueve(float t);
	void setVel(float vx, float vy);

private:
	float altura;
	Vector2D posicion, velocidad, aceleracion;
	SpriteSequence sprite{"imagenes/pangPlayer.png", 5};

};



