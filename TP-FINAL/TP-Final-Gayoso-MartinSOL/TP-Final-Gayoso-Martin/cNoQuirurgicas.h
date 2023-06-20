#pragma once
#ifndef _CNOQUIRURGICAS_H
#define _CNOQUIRURGICAS_H
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

	const float get_Radio()const;//USADOS
	const float get_Ancho()const;//USADOS
	const float get_Largo()const;//USADOS
	 
	friend ostream& operator<<(ostream& out, cNoQuirurgicas& NQ);
	string to_stringP();//USADO
	void imprimirP();//USADO
	 bool operator==(const cNoQuirurgicas& cNQ);
protected:
	float Radio;
	float Largo;
	float Ancho;
};

#endif
