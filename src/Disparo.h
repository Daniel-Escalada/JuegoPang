#pragma once
#include "Vector2D.h"
#include "Pared.h"
#include "ObjetoMovil.h"
class Disparo :public ObjetoMovil
{
	friend class Interaccion;
public:
	
	Disparo();
	void dibuja();
//	void mueve(float t);
	//void setPos(float ix, float iy);
//	void setVel(float vx, float vy);
	float getRadio() { return radio; }
//	Vector2D getPos() { return posicion; }
	
protected:
	float radio;
//	Vector2D origen;
  //  Vector2D posicion, velocidad, aceleracion;
	Pared estela;


};
