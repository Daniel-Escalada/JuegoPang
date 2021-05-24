#pragma once
#include "Esfera.h"
class EsferaPulsante : public Esfera
{
protected:
	float pulso, radio_max, radio_min;
public:
	void mueve(float t);
	EsferaPulsante();
};

