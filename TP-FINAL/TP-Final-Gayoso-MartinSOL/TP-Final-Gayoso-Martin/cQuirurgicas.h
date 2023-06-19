#pragma once
#include "cProtesis.h"
#include <vector>
class cQuirurgicas: public cProtesis
{
	
public:	
	cQuirurgicas(cFabricante& fabricante, cFechass fecha, cFechass fecha_s);
	~cQuirurgicas();

	void set_Sup_Inf(bool SF); //USADAS
	void set_Der_Izq(bool DI);//USADAS
	void set_Mat(string Mat);//USADAS
	
	bool operator==(cProtesis&prots) override;
	void Agregar_Mat(vector<string> Mats); //USADAS
	friend ostream& operator<<(ostream& out, cQuirurgicas& CQ);
	string to_stringP();
	void imprimirP();
protected:
	string Material;
	
};


