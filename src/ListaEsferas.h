#pragma once
#include "Esfera.h"
#define MAX_ESFERAS 100
class ListaEsferas
{
public:
	ListaEsferas();
	virtual ~ListaEsferas();
	bool agregar(Esfera* e);
	void dibuja();
	void mueve(float t);
private:
	Esfera* lista[MAX_ESFERAS];
	int numero;
};
