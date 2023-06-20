#pragma once
#include "cProtesis.h"
class cNoQuirurgicas: public cProtesis
{
public:
	cNoQuirurgicas(cFabricante& fabricante, cFechass fecha , cFechass fecha_s);
	~cNoQuirurgicas();
	void set_Sup_Inf(bool SF);//USADO
	void set_Der_Izq(bool DI);//USADO
	void set_Radio(float Rad); //USADO
	void set_Largo(float Larg);//USADO
	void set_Ancho(float Anch);//USADO

	const float get_Radio()const;
	const float get_Ancho()const;
	const float get_Largo()const;
	 
	friend ostream& operator<<(ostream& out, cNoQuirurgicas& NQ);
	string to_stringP();
	void imprimirP();
protected:
	float Radio;
	float Largo;
	float Ancho;
};


bool operator==(const cNoQuirurgicas& cNQ, const cNoQuirurgicas& otrocNQ)
{
	if (otrocNQ.get_Der_Izq() == cNQ.get_Der_Izq() && otrocNQ.get_Sup_Inf() == cNQ.get_Sup_Inf() && otrocNQ.get_Radio() == cNQ.get_Radio() && otrocNQ.get_Largo() == cNQ.get_Largo() && otrocNQ.get_Ancho() == cNQ.get_Ancho())
		return true;
	else
		return false;
}