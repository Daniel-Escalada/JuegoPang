#include "EsferaPulsante.h"


EsferaPulsante::EsferaPulsante()
{
	radio_max = 2.0f;
	radio_min = 0.5f;
	pulso = 0.5f;
	aceleracion.y = 0.0f;
	posicion.x = 0.0f;
	posicion.y = 5.0f;
}

void EsferaPulsante::mueve(float t)
{
	//posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	//velocidad = velocidad + aceleracion * t;
	Esfera::mueve(t);
	if (radio > radio_max)
		pulso = -pulso;
	if (radio < radio_min)
		pulso = -pulso;
	radio += pulso * t;
	color.r = radio * 255;
	color.g = 255 - radio * 100;
	color.b = 100 + radio * 50;
}
