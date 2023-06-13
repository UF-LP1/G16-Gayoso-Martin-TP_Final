#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(const cFabricante& fabricante):cProtesis(fabricante)
{
	this->Material = " ";
}

cQuirurgicas::~cQuirurgicas()
{
	
}

void cQuirurgicas::set_Sup_Inf(bool SF)
{
		this->Sup_Inf = SF;	
}

void cQuirurgicas::set_Der_Izq(bool DI)
{
	this->Der_Izq = DI;
}

void cQuirurgicas::set_Mat(string Mat)
{
	this->Material = Mat;
}
