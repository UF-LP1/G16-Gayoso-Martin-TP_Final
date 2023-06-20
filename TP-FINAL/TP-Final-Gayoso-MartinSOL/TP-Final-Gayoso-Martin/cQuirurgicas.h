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
	const string getMat()const; //usadaa
	
	void Agregar_Mat(vector<string> Mats); //USADAS
	friend ostream& operator<<(ostream& out, cQuirurgicas& CQ);
	string to_stringP();//USADA
	void imprimirP();//USADAS
protected:
	string Material;
	
};


bool operator==(const cQuirurgicas& cQ, const cQuirurgicas& otrocQ)
{
	if (otrocQ.get_Der_Izq() == cQ.get_Der_Izq() && otrocQ.get_Sup_Inf() == cQ.get_Sup_Inf() && otrocQ.getMat() == cQ.getMat())
		return true;
	else
		return false;
}