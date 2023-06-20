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
	//string to_string();

	void Imprimir_Pac();//USADA
	void Imprimir_Med();
	void operator+(cPacientes& pac);//USADA
	void operator+(cMedicos& Med);//USADA
	cMedicos BuscarPorMat();//USADA
	
	cHospital& operator=(const cHospital &acopiar);
	//bool operator==(cHospital& hosp);

	string to_stringH();//USADA
	void ImprimirH();//USADA
protected:
	list<cMedicos> Lista_Medicos;
	list<cPacientes> Lista_Pacientes;

};

#endif
ostream& operator<<(ostream& out, cMedicos& med)
{
	out << med.to_stringM();

	return out;
}
ostream& operator<<(ostream& out, cPacientes& _Pac)
{
	out << _Pac.to_stringpac();
	return out;
}

