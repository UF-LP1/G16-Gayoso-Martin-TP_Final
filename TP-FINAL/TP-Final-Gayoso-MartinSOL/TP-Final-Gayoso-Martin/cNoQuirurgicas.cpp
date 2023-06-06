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
