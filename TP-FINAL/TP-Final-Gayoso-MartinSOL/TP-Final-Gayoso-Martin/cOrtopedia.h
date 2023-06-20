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
	
	friend ostream& operator<<(ostream& out, cOrtopedia& ort);

 void operator-(cProtesis& prot);//USADA

protected:
	list <cProtesis> Lista_Protesis;  
	list <cProtesis> Lista_Stock;


};
#endif

