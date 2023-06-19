	#include "cProtesis.h"

	cProtesis::cProtesis( cFabricante &fabricante, cFechass fecha={1,1,2001}, cFechass fecha_s={1,1,2001}) :Fabricante(fabricante), Fecha_Fabric(fecha), Fecha_solicitada(fecha_s)
	{
		this->Sup_Inf = true;
		this->Der_Izq = true;
	}

	cProtesis::~cProtesis()
	{
	}

	cFechass cProtesis::get_Fecha_Fab()
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

	cFechass cProtesis::get_FechaSol()
	{
		return this->Fecha_solicitada;
	}

	void cProtesis::set_Fecha_Fab(cFechass FF)
	{
		this->Fecha_Fabric = FF;
	}

	void cProtesis::set_Fecha_Sol(cFechass FS)
	{
		this->Fecha_solicitada = FS;
	}





