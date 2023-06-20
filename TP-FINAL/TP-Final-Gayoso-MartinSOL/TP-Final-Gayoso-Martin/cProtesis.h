#pragma once
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

	cFechass get_Fecha_Fab();
	cFabricante get_Fabricante();
	const bool get_Sup_Inf()const;
	const bool get_Der_Izq()const ;
	cFechass get_FechaSol();

	void set_Fecha_Fab(cFechass FF);
	void set_Fecha_Sol(cFechass FS);
	virtual void set_Sup_Inf(bool SF);
	virtual void set_Der_Izq(bool DI);
	virtual string to_stringP();
	virtual void imprimirP();

	

	

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
bool operator==(cProtesis& prots, cProtesis& pro)
{
	if (pro.get_Der_Izq() == prots.get_Der_Izq() && pro.get_Sup_Inf() == prots.get_Sup_Inf())
		return true;

	else
		return false;
}