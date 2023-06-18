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
	string getNombreHosp();
	//string to_string();

	void Imprimir_Pac();

	void operator+(cPacientes& pac);
	void operator+(cMedicos& Med);
	cMedicos BuscarPorMat();
	
	cHospital& operator=(const cHospital &acopiar);
	//bool operator==(cHospital& hosp);

protected:
	list<cMedicos> Lista_Medicos;
	list<cPacientes> Lista_Pacientes;




};

ostream& operator<<(ostream& out, cPacientes& _Pac)
{
	
	out << _Pac.get_ID() << _Pac.get_nombre() << _Pac.get_apellido() << _Pac.get_Nombre_Hosp() << _Pac.get_Tel() << _Pac.get_Radio_Amput()<<_Pac.get_FechaNac().get_dia()
		<<_Pac.get_FechaNac().get_mes()<< _Pac.get_FechaNac().get_anio()<<endl;
	return out;
}