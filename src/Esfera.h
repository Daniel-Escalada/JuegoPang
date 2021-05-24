#pragma once

#include "Vector2D.h"
#include "ColorRGB.h"
#include "ObjetoMovil.h"

class Esfera :public ObjetoMovil
{

	friend class Interaccion;

public:
	Esfera();
	Esfera(float rad, float x = 0.0f, float y = 0.0f,float vx = 0.0f, float vy = 0.0f);
	
	// Modificar color esfera
	void setColor(unsigned char r, unsigned char v, unsigned char a);
	// Radio minimo
	void setRadio(float r);
	// Posicion x e y
//	void setPos(float ix, float iy);
//	void setVel(float vx, float vy);

	void dibuja();
	//void mueve(float t);
	//bool colision();
//	Vector2D getPos() { return posicion; }
protected:

	float radio;
	ColorRGB color;
	// Vector2D posicion, velocidad, aceleracion;
};

