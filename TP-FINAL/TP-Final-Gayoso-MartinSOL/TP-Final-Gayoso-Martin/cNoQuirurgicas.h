#pragma once
#include "cProtesis.h"
class cNoQuirurgicas: public cProtesis
{
public:
	cNoQuirurgicas(cFabricante& fabricante, cFechass fecha, cFechass fecha_s);
	~cNoQuirurgicas();
	void set_Sup_Inf(bool SF);//USADO
	void set_Der_Izq(bool DI);//USADO
	void set_Radio(float Rad); //USADO
	void set_Largo(float Larg);//USADO
	void set_Ancho(float Anch);//USADO

	bool operator==(cProtesis& prots);
	friend ostream& operator<<(ostream& out, cNoQuirurgicas& NQ);
	string to_stringP();
	void imprimirP();
protected:
	float Radio;
	float Largo;
	float Ancho;
};


