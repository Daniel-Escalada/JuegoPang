#pragma once
#include "Pared.h"

class Caja
{
public:
	Caja();
	virtual ~Caja();

	Pared suelo, techo, pared_izq, pared_dcha;
};

