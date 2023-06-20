#include "cFechass.h"

cFechass::cFechass(int _dia, int _mes, int _anio)
{
	this->dia = _dia;
	this->mes = _mes;
	this->anio = _anio;

}

cFechass::~cFechass()
{

}

int cFechass::get_dia()
{
	return this->dia;
}

int cFechass::get_mes()
{
	return this->mes;
}

int cFechass::get_anio()
{
	return this->anio;
}

void cFechass::set_dia(int d)
{
	this->dia = d;
}

void cFechass::set_mes(int m)
{
	this->mes = m;
}

void cFechass::set_anio(int a)
{
	this->anio = a;
}

string cFechass::to_stringF() const 
{
	stringstream salida;
	salida << "Dia: " << this->dia << "Mes: " << this->mes << "Anyo: " << this->anio; 
	return salida.str();
}
void cFechass::imprimirF()
{
	cout << this->to_stringF() << endl;

}


//cFechass& cFechass::operator=(const cFechass& otro)
//{
//	if (this != &otro)
//	{
//		this->dia = otro.dia;
//		this->mes = otro.mes;
//		this->anio = otro.anio;
//	}
//
//	return *this;
//}

std::ostream& operator<<(std::ostream& out, cFechass& fecha)
{	//out<<fecha.to_stringF();
	out << fecha.dia << fecha.mes << fecha.anio;
	return out;
}
