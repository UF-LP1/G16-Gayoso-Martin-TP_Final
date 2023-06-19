#pragma once
#include <string>
#include<iostream>
#include <ctime>
#include "cFabricante.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"
#include "cFechass.h"
using namespace std;

class cProtesis
{
public:
	friend class cQuirurgicas;
	friend class cNoQuirurgicas;
	cProtesis(cFabricante fabricante, cFechass fecha, cFechass fecha_s);
	~cProtesis();

	cFechass get_Fecha_Fab();
	cFabricante get_Fabricante();
	bool get_Sup_Inf();
	bool get_Der_Izq();
	cFechass get_FechaSol();

	void set_Fecha_Fab(cFechass FF);
	void set_Fecha_Sol(cFechass FS);
	virtual void set_Sup_Inf(bool SF)=0;
	virtual void set_Der_Izq(bool DI)=0;
	virtual string to_stringP()=0;
	virtual void imprimirP() = 0;

	virtual bool operator==(cProtesis& prots)=0;

	

protected:
	
	cFechass Fecha_Fabric; 
	cFabricante Fabricante;
	bool Sup_Inf; //true sup, false inf
	bool Der_Izq;// true Der, false Izq
	cFechass Fecha_solicitada;
	


};

ostream& operator<<(ostream& out, cProtesis& prot)
{
	//out<<_Prot.to_stringP()
	out << prot.get_Der_Izq() << prot.get_Sup_Inf() << prot.get_FechaSol().get_dia() << prot.get_FechaSol().get_mes() << prot.get_FechaSol().get_anio() <<
		prot.get_Fecha_Fab().get_dia() << prot.get_Fecha_Fab().get_mes() << prot.get_Fecha_Fab().get_anio() << prot.get_Fabricante().get_Direc()
		<< prot.get_Fabricante().get_Nombre() << prot.get_Fabricante().get_Nro_Hab() << prot.get_Fabricante().get_Sol() << endl;
	return out;
}