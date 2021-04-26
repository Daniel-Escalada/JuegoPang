#include "Caja.h"

Caja::Caja()
{
	suelo.limite1.x = -10.0f;
	suelo.limite2.x = 10.0f;
	suelo.limite1.y = suelo.limite2.y = 0;
	suelo.setColor(0, 100, 0);

	techo.limite1.x = -10.0f;
	techo.limite2.x = 10.0f;
	techo.limite1.y = techo.limite2.y = 15.0f;
	techo.setColor(0, 100, 0);

	pared_dcha.limite1.x = pared_dcha.limite2.x = 10.0f;
	pared_dcha.limite1.y = 0;
	pared_dcha.limite2.y = 15.0f;
	pared_dcha.setColor(0, 150, 0);

	pared_izq.limite1.x = pared_izq.limite2.x = -10.0f;
	pared_izq.limite1.y = 0;
	pared_izq.limite2.y = 15.0f;
	pared_izq.setColor(0, 150, 0);


}

void Caja::dibuja() {

	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();
}