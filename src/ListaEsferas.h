#pragma once
#include "Esfera.h"
#include "Caja.h"
#include "Pared.h"

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
	void rebote(Pared p);
	void rebote();
	void destruirContenido();
	void eliminar(int index);
	void eliminar(Esfera* e);

private:
	Esfera* lista[MAX_ESFERAS];
	int numero;
};
