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

bool cQuirurgicas::operator==(cProtesis& prots)
{
	if (this->Der_Izq == prots.Der_Izq && this->Sup_Inf == prots.Sup_Inf )
	{
		cQuirurgicas* CQ = dynamic_cast<cQuirurgicas*>(&prots);
		if (CQ != NULL)
		{
			if (this->Material==CQ->Material)
			{
				return true;

			}
		}
	}
	else
		return false;
}

void cQuirurgicas::Agregar_Mat(vector<string> Mats)
{
	Mats.push_back("Acero de grado medico");
	Mats.push_back("Cobalto y Cromo");
	Mats.push_back("Titanio");
	Mats.push_back("Tantalio");
	Mats.push_back("Ceramica");
}
