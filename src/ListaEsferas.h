#pragma once
#include "Esfera.h"
#include "Caja.h"
#define MAX_ESFERAS 100
class ListaEsferas
{
public:
	ListaEsferas();
	//virtual ~ListaEsferas();
	bool agregar(Esfera* e);
	void dibuja();
	void mueve(float t);
	void rebote(Caja caja);

private:
	Esfera* lista[MAX_ESFERAS];
	int numero;
};
