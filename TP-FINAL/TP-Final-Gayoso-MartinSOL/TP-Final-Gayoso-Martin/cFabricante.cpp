#include "cFabricante.h"

cFabricante::cFabricante(string _Nombre, string _Direc) :cEstablecimiento(_Nombre,_Direc)
{
	this->Nro_Habilitacion = 0;
	this->Solicitud = false;

}

cFabricante::~cFabricante()
{
}

unsigned int cFabricante::get_Nro_Hab()
{
	return this->Nro_Habilitacion;
}

bool cFabricante::get_Sol()
{
	return this->Solicitud;
}

void cFabricante::set_Nro_Hab(unsigned int nh)
{
	this->Nro_Habilitacion = nh;
}

void cFabricante::set_Sol(bool sol)
{
	this->Solicitud = sol;
}
