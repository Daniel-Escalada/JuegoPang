#pragma once
#include "Pared.h"

class Caja
{
	friend class Interaccion;
public:
	Caja();
	void dibuja();

private:
	Pared suelo, techo, pared_dcha, pared_izq;


};

