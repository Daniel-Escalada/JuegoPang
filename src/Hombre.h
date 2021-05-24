#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"
#include "ObjetoMovil.h"
using ETSIDI::SpriteSequence;

class Hombre :public ObjetoMovil
{
	friend class Interaccion;
public:
	Hombre();
	void dibuja();
	//void mueve(float t);
//	void setVel(float vx, float vy);
	float getAltura() { return altura; }
//	Vector2D getPos() { return posicion; }

private:
	float altura;
	//Vector2D posicion, velocidad, aceleracion;
	SpriteSequence sprite{"imagenes/pangPlayer.png", 5};

};



