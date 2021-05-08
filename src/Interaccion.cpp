#include "Interaccion.h"
#include <math.h>
#define PI 3.141592

void Interaccion::rebote(Hombre& h, Caja c)
{
	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if (h.posicion.x > xmax)h.posicion.x = xmax;
	if (h.posicion.x < xmin)h.posicion.x = xmin;
}

bool Interaccion::rebote(Esfera& e, Pared p)
{
	Vector2D dir;
	float dif = p.distancia(e.posicion, &dir) - e.radio;
	if (dif <= 0.0f)
	{
		Vector2D v_inicial = e.velocidad;
		e.velocidad = v_inicial - dir * 2.0 * (v_inicial * dir);
		e.posicion = e.posicion - dir * dif;
		return true;
	}
	return false;
}

void Interaccion::rebote(Esfera& e, Caja c)
{
	rebote(e, c.techo);
	rebote(e, c.pared_izq);
	rebote(e, c.pared_dcha);
	rebote(e, c.suelo);

}

void Interaccion::rebote(Esfera& e1, Esfera& e2) 
{

	float area1 = pow(e1.radio, 2) * 4 * PI;
	float area2 = pow(e2.radio, 2) * 4 * PI;
    float dist = (float)sqrt(pow(e1.posicion.x - e2.posicion.x,2) + pow(e1.posicion.y - e2.posicion.y,2));
	if (dist <= (e1.radio + e2.radio)) {
		Vector2D v_inicial1 = e1.velocidad;
		Vector2D v_inicial2 = e2.velocidad;
		e1.velocidad.x = (v_inicial1.x * ((area1 - area2) / (area1 + area2))) + (v_inicial2.x * ((2 * area2) / (area1 + area2)));
		e2.velocidad.x = (v_inicial1.x * ((2 * area1) / (area1 + area2))) + (v_inicial2.x * ((area2 - area1) / (area1 + area2)));
		e1.velocidad.y = (v_inicial1.y * ((area1 - area2) / (area1 + area2))) + (v_inicial2.y * ((2 * area2) / (area1 + area2)));
		e2.velocidad.y = (v_inicial1.y * ((2 * area1) / (area1 + area2))) + (v_inicial2.y * ((area2 - area1) / (area1 + area2)));
	}
    
}