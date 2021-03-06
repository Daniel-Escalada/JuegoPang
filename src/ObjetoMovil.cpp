#include "ObjetoMovil.h"

void ObjetoMovil::mueve(float t) {

	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

}
Vector2D ObjetoMovil::getPos()
{
	return posicion;
}
void ObjetoMovil::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
void ObjetoMovil::setVel(Vector2D vel)
{
	velocidad = vel;
}
void ObjetoMovil::setPos(float x, float y)
{
	posicion.x = x;
	posicion.y = y;
}
void ObjetoMovil::setPos(Vector2D pos)
{
	posicion = pos;
}
void ObjetoMovil::setPos(float ox, float oy, float x, float y)
{
	origen.x = ox;
	origen.y = oy;
	posicion.x = x;
	posicion.y = y;
}