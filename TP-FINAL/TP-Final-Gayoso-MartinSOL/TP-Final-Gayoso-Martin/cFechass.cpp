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
{
	out << fecha.dia << fecha.mes << fecha.anio;
	return out;
}
