#pragma once
#ifndef _CHOSPITAL_H
#define _CHOSPITAL_H
#include "cEstablecimiento.h"
#include <list>
#include "cPacientes.h"      
#include "cMedicos.h"
#include "Except.h"
class cHospital: public cEstablecimiento
{
public:
	cHospital(string _Nombre, string _Direc);
	~cHospital();
	friend class cANPA;

	void Agregar_Pac(cPacientes NewPac);//USADOS EN SOBRECARGA
	void Agregar_Med(cMedicos NewMed);//USADOS EN SOBRECARGA
	

	void Imprimir_Pac();//USADA
	void Imprimir_Med();
	void operator+(cPacientes& pac);//USADA
	void operator+(cMedicos& Med);//USADA
	cMedicos BuscarPorMat();//USADA
	
	cHospital& operator=(const cHospital &acopiar);
	

	string to_stringH()const ;//USADA
	void ImprimirH();//USADA

	friend ostream& operator<<(ostream& out, const cHospital& hosp);
	
	
protected:
	list<cMedicos> Lista_Medicos;
	list<cPacientes> Lista_Pacientes;

};

#endif


