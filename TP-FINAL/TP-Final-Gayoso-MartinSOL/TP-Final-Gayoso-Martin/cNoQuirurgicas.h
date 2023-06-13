#pragma once
#include "cProtesis.h"
class cNoQuirurgicas: public cProtesis
{
public:
	cNoQuirurgicas(const cFabricante& fabricante);
	~cNoQuirurgicas();
	void set_Sup_Inf(bool SF);
	void set_Der_Izq(bool DI);
protected:
	float Radio;
	float Largo;
	float Ancho;
};

