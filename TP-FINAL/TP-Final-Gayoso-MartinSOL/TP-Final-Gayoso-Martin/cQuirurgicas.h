#pragma once
#ifndef _CQUIRURGICAS_H
#define _CQUIRURGICAS_H
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
	bool operator==(const cQuirurgicas& cQ);
protected:
	string Material;
	
};
#endif

