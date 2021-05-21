#include "ListaEsferas.h"
#include "Interaccion.h" 

ListaEsferas::ListaEsferas()
{
	numero = 0;
	for (int i = 0; i < MAX_ESFERAS; i++)
		lista[i] = 0;
}
bool ListaEsferas::agregar(Esfera* e)
{
	if (numero < MAX_ESFERAS)
		lista[numero++] = e; // último puesto sin rellenar
	else
		return false; // capacidad máxima alcanzada
	return true;
}
void ListaEsferas::dibuja()
{
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}
void ListaEsferas::mueve(float t)
{
	for (int i = 0; i < numero; i++)
		lista[i]->mueve(t);
}

void ListaEsferas::rebote(Caja caja)
{
	for (int i = 0; i < numero; i++)
		Interaccion::rebote(*(lista[i]), caja);
}
void ListaEsferas::rebote(Pared p)
{
	for (int i = 0; i < numero; i++)
		Interaccion::rebote(*(lista[i]), p);
}
void ListaEsferas::rebote()
{
	for (int i = 0; i < numero - 1; i++)
		for (int j = i + 1; j < numero; j++)
			Interaccion::rebote(*(lista[i]), *(lista[j]));
}
void ListaEsferas::destruirContenido()
{
	for (int i = 0; i < numero; i++) // destrucción de esferas contenidas
		delete lista[i];
	numero = 0; // inicializa lista
}