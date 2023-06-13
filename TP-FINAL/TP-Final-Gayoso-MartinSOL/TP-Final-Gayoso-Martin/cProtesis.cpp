#include "cProtesis.h"

cProtesis::cProtesis( cFabricante fabricante):Fabricante(fabricante)
{
	this->Fecha_Fabric = { 0,0,0 };
	this->Sup_Inf = true;
	this->Der_Izq = true;
}

cProtesis::~cProtesis()
{
}

tm cProtesis::get_Fecha_Fab()
{
	return this->Fecha_Fabric;
}

cFabricante cProtesis::get_Fabricante()
{
	return this->Fabricante;
}

bool cProtesis::get_Sup_Inf()
{
	return this->Sup_Inf;
}

bool cProtesis::get_Der_Izq()
{
	return this->Der_Izq;
}

void cProtesis::set_Fecha_Fab(tm FF)
{
	this->Fecha_Fabric = FF;
}




