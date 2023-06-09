#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(cFabricante& fabricante, cFechass fecha , cFechass fecha_s) : cProtesis(fabricante, fecha, fecha_s)
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

const string cQuirurgicas::getMat()const
{
	return this->Material;
}

bool cQuirurgicas::operator==( const cQuirurgicas& cQ)
{
	
	if (this->Der_Izq == cQ.get_Der_Izq() && this->Sup_Inf == cQ.get_Sup_Inf() && this->Material == cQ.Material)
	{
		return true;
	}
	else
		return false;
		
}

void cQuirurgicas::Agregar_Mat(vector<string> Mats)
{
	Mats.push_back("Acero");
	Mats.push_back("CobaltoyCromo");
	Mats.push_back("Titanio");
	Mats.push_back("Tantalio");
	Mats.push_back("Ceramica");
}

ostream& operator<<(ostream& out, cQuirurgicas& CQ)
{
	out << CQ.to_stringP();
	return out;
}
string cQuirurgicas::to_stringP()
{
	stringstream salida;
	salida << " ,Fecha de Fabricacion: " << this->Fecha_Fabric.to_stringF() << " ,Fabricante: " << this->Fabricante.to_string()
		<< " ,Fecha de Solicitud" << this->Fecha_solicitada.to_stringF()
		<< " ,Superior o inferior: " << this->Sup_Inf
		<< " ,Derecho o Izquierdo: " << this->Der_Izq
		<< " ,Material: " << this->Material<<endl;
	return salida.str();
}

void cQuirurgicas::imprimirP()
{
	cout << this->to_stringP() << endl;

}