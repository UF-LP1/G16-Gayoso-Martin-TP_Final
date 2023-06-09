#include "cNoQuirurgicas.h"

cNoQuirurgicas::cNoQuirurgicas(cFabricante& fabricante, cFechass fecha, cFechass fecha_s ) : cProtesis(fabricante, fecha, fecha_s)
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

const float cNoQuirurgicas::get_Radio()const
{
	return this->Radio;
}

const float cNoQuirurgicas::get_Ancho()const
{
	return this->Ancho;
}

const float cNoQuirurgicas::get_Largo()const
{
	return this->Largo;
}

bool cNoQuirurgicas::operator==(const cNoQuirurgicas& cNQ)
{
	if (this->Der_Izq == cNQ.get_Der_Izq() && this->Sup_Inf == cNQ.get_Sup_Inf() && this->Radio == cNQ.Radio && this->Largo == cNQ.Largo && this->Ancho == cNQ.Ancho)
	{
		return true;
	}
	else
		return false;
}






ostream& operator<<(ostream& out, cNoQuirurgicas& NQ)
{
	out << NQ.to_stringP();
	return out;
}

string cNoQuirurgicas::to_stringP()
{
	stringstream salida;
	salida << " Fecha de Fabricacion: " << this->Fecha_Fabric.to_stringF() << " ,Fabricante: " << this->Fabricante.to_string()
		<< " ,Fecha de Solicitud" << this->Fecha_solicitada.to_stringF()
		<< " ,Ancho: " << this->Ancho << " ,Largo: " << this->Largo << " ,Superior o inferior: " << this->Sup_Inf
		<< " ,Radio: " << this->Radio << " ,Derecho o Izquierdo, imprime bool: " << this->Der_Izq<<endl;
		return salida.str();
}

void cNoQuirurgicas::imprimirP()
{
	cout << this->to_stringP() << endl;

}