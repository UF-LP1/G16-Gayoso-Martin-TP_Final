#pragma once
#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H
#include "cEstablecimiento.h"
#include <list>
#include "cPacientes.h"
#include "Except.h"
using namespace std;
class cOrtopedia: public cEstablecimiento
{
public:
	cOrtopedia(string _Nombre, string _Direc);
	~cOrtopedia();

	bool Buscar_Prot( cPacientes _paciente);//USADAA
	bool Sol_Prot_F(cProtesis *Prot1);//USADA
	void Imprimir_Prot();//USADA
	void Imprimir_Prot_Stock();//USADA

	void agregar_Protesis(cProtesis&_Protesis);//USADA
	void agregar_Stock(cProtesis &_Protesis);//USADA
	void quitar_Protesis_delStock(cProtesis& _Protesis);//USADA
	


 void operator-(cProtesis& prot);//USADA

protected:
	list <cProtesis> Lista_Protesis;  
	list <cProtesis> Lista_Stock;


};
#endif
//ostream& operator<<(ostream& out, cProtesis& _Prot)
//{
//	//out<<_Prot.to_stringP();
//	//<< _Prot.get_Fecha_Fab()
//	out << _Prot.get_Der_Izq() << _Prot.get_Sup_Inf() << endl
//		<< _Prot.get_Fabricante().get_Nombre() << _Prot.get_Fabricante().get_Direc() << _Prot.get_Fabricante().get_Nro_Hab() << _Prot.get_Fabricante().get_Sol() << endl;
//	return out;
//}
