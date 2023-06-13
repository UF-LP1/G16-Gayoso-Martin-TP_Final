#include "cNoQuirurgicas.h"

cNoQuirurgicas::cNoQuirurgicas(const cFabricante& fabricante) :cProtesis(fabricante)
{
	this->Radio = 0.0;
	this->Largo = 0.0;
	this->Ancho = 0.0;
}

cNoQuirurgicas::~cNoQuirurgicas()
{
}

void cNoQuirurgicas::set_Sup_Inf(bool SF)
{
	this->Sup_Inf = SF;
}

void cNoQuirurgicas::set_Der_Izq(bool DI)
{
	this->Der_Izq = DI;
}
