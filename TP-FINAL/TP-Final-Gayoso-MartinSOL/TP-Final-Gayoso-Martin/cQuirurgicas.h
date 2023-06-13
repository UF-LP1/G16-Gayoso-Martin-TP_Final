#pragma once
#include "cProtesis.h"
#include <vector>
class cQuirurgicas: public cProtesis
{
	
public:	
	cQuirurgicas(const cFabricante& fabricante);
	~cQuirurgicas();

	void set_Sup_Inf(bool SF); //USADAS
	void set_Der_Izq(bool DI);//USADAS
	void set_Mat(string Mat);//USADAS
	
	bool operator==(cProtesis&prots) override;
	void Agregar_Mat(vector<string> Mats); //USADAS
protected:
	string Material;
	
};


