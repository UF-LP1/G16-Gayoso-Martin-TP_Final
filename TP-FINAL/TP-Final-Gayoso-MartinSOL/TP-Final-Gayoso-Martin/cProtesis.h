#pragma once
#ifndef _CPROTESIS_H 
#define _CPROTESIS_H
#include <string>
#include<iostream>
#include <ctime>
#include "cFabricante.h"

#include "cFechass.h"
using namespace std;

class cProtesis
{
public:
	
	cProtesis(cFabricante &fabricante, cFechass fecha, cFechass fecha_s);
	~cProtesis();

	cFechass get_Fecha_Fab();//USADA
	cFabricante get_Fabricante(); // USADA
	const bool get_Sup_Inf()const;// USADA
	const bool get_Der_Izq()const ;// USADA
	cFechass get_FechaSol();// USADA

	void set_Fecha_Fab(cFechass FF);// USADA
	void set_Fecha_Sol(cFechass FS);// USADA
	virtual void set_Sup_Inf(bool SF);// USADA
	virtual void set_Der_Izq(bool DI);// USADA
	virtual string to_stringP();// USADA
	virtual void imprimirP();
	virtual bool operator==(const cProtesis& prots);

	friend ostream& operator<<(ostream& out, cProtesis& prot);

protected:
	
	cFechass Fecha_Fabric; 
	cFabricante Fabricante;
	bool Sup_Inf; //true sup, false inf
	bool Der_Izq;// true Der, false Izq
	cFechass Fecha_solicitada;
	


};

#endif 
 
//ostream& operator<<(ostream& out, cProtesis& prot)
//{
//	out << prot.to_stringP();
//	return out;
//}
//bool operator==(cProtesis& prots, cProtesis& pro)
//{
//	if (pro.get_Der_Izq() == prots.get_Der_Izq() && pro.get_Sup_Inf() == prots.get_Sup_Inf())
//		return true;
//
//	else
//		return false;
//}