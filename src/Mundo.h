#include "Caja.h"
#include "Hombre.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h"
#include "ListaEsferas.h"
#include "ListaDisparos.h"
#include "EsferaPulsante.h"
#include "DisparoEspecial.h"

class Mundo
{
public: 

	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();
	void teclaEspecial(unsigned char key);
	~Mundo();
	

	float x_ojo;
	float y_ojo;
	float z_ojo;
	
private:
	//Disparo disparo;
	Esfera esfera,esfera2;
	Hombre hombre;
	Caja caja;
	Bonus bonus;
	Pared plataforma;
	ListaEsferas esferas;
	ListaDisparos disparos;
	EsferaPulsante esferaPulsante;
	DisparoEspecial disparoEspecial;
};
