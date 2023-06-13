#pragma once
#include "cProtesis.h"
class cQuirurgicas: public cProtesis
{
public:	
	cQuirurgicas(const cFabricante& fabricante);
	~cQuirurgicas();

	void set_Sup_Inf(bool SF);
	void set_Der_Izq(bool DI);
	void set_Mat(string Mat);

protected:
	string Material;
};

