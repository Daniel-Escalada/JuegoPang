#pragma once
#include "Vector2D.h"
class ObjetoMovil
{
protected:
	Vector2D posicion, velocidad, aceleracion,origen;
public:
	void mueve(float t);
	Vector2D getPos();
	void setPos(float vx, float vy);
	void setPos(Vector2D vel);
	void setVel(float vx, float vy);
	void setVel(Vector2D vel);
	void setPos(float ox, float oy, float x, float y);

};

