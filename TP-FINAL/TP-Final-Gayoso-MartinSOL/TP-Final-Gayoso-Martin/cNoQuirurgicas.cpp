#include "cNoQuirurgicas.h"

cNoQuirurgicas::cNoQuirurgicas(cFabricante fabricante, cFechass fecha, cFechass fecha_s) : cProtesis(fabricante, fecha, fecha_s)
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

void cNoQuirurgicas::set_Radio(float Rad)
{
	this->Radio = Rad;

}

void cNoQuirurgicas::set_Largo(float Larg)
{
	this->Largo = Larg;
}

void cNoQuirurgicas::set_Ancho(float Anch)
{
	this->Ancho = Anch;
}

//bool cNoQuirurgicas::operator==(cProtesis& prots)
//{
//	if (this->Der_Izq == prots.Der_Izq && this->Sup_Inf == prots.Sup_Inf)
//	{
//		cNoQuirurgicas* CNQ = dynamic_cast<cNoQuirurgicas*>(&prots);
//		if (CNQ != NULL)
//		{
//			if (this->Radio == CNQ->Radio && this->Largo == CNQ->Largo && this->Ancho == CNQ->Ancho)
//			{
//				return true; 
//			}	
//
//		}
//	}
//	else
//		return false;
//}

ostream& operator<<(ostream& out, cNoQuirurgicas& NQ)
{
	out << NQ.Ancho << NQ.Largo << NQ.Radio;
	cProtesis* aux = &NQ;
	out << *aux;
	return out;
}
