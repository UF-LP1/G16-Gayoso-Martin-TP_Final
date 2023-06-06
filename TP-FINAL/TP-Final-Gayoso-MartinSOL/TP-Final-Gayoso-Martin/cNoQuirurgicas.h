#pragma once
#include "cProtesis.h"
class cNoQuirurgicas: public cProtesis
{
public:
	cNoQuirurgicas(const cFabricante& fabricante);
	~cNoQuirurgicas();

protected:
	float Radio;
	float Largo;
	float Ancho;
};

