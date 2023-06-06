#pragma once
#include "cProtesis.h"
class cQuirurgicas: public cProtesis
{
public:	
	cQuirurgicas(const cFabricante& fabricante);
	~cQuirurgicas();

protected:
	string Material;
};

