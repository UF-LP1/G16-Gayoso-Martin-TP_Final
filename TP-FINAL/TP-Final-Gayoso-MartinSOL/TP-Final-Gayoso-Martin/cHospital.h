#pragma once
#include "cEstablecimiento.h"
#include <list>
#include "cPacientes.h"      
#include "cMedicos.h"

class cHospital: public cEstablecimiento
{
public:
	cHospital(string _Nombre, string _Direc);
	~cHospital();
	friend class cANPA;

	void Agregar_Pac(cPacientes NewPac); 
	void Agregar_Med(cMedicos NewMed);
	//string to_string();

	void Imprimir_Pac();
	void Imprimir_Med();
	void operator+(cPacientes& pac);
	void operator+(cMedicos& Med);
	cMedicos BuscarPorMat();
	
	cHospital& operator=(const cHospital &acopiar);
	//bool operator==(cHospital& hosp);

	string to_stringH();
	void ImprimirH();
protected:
	list<cMedicos> Lista_Medicos;
	list<cPacientes> Lista_Pacientes;

};

ostream& operator<<(ostream& out, cPacientes& _Pac)
{
	//out<<_Pac.tostringpac();
	_Pac.Imprimirpac();
	/*out << _Pac.get_ID() << _Pac.get_nombre() << _Pac.get_apellido() << _Pac.get_Nombre_Hosp() << _Pac.get_Tel() << _Pac.get_Radio_Amput()<<_Pac.get_FechaNac().get_dia()
		<<_Pac.get_FechaNac().get_mes()<< _Pac.get_FechaNac().get_anio()<<endl;*/
	return out;
}

ostream& operator<<(ostream& out, cMedicos& med)
{
	//out<<med.to_stringM();
	out << med.get_ID() << med.get_nombre() << med.get_apellido() << med.get_Matric();
	return out;
}