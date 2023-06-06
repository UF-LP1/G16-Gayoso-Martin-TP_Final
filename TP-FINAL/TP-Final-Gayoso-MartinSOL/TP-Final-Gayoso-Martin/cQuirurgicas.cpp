#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(const cFabricante& fabricante):cProtesis(fabricante)
{
	this->Material = " ";
}

cQuirurgicas::~cQuirurgicas()
{
	
}
