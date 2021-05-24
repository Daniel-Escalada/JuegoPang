#pragma once
#include "Vector2D.h"
#include "ObjetoMovil.h"
class Bonus :public ObjetoMovil
{
public:
	Bonus();
	void dibuja();
//	void mueve(float t);
	void setPos(float ix, float iy);
private:
	float lado;
	//Vector2D posicion, velocidad, aceleracion;

};

