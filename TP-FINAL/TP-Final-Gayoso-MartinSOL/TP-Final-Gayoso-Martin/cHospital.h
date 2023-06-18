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
	
	void Agregar_Pac(cPacientes NewPac); 
	void Agregar_Med(cMedicos NewMed);
	string getNombreHosp();
	//string to_string();

	void Imprimir_Pac();

	void operator+(cPacientes& pac);
	void operator+(cMedicos& Med);
	cMedicos BuscarPorMat();
	list<cPacientes>::iterator buscar_Hosp(cHospital hosp); 
	cHospital& operator=(const cHospital &acopiar);
	//bool operator==(cHospital& hosp);

protected:
	list<cMedicos> Lista_Medicos;
	list<cPacientes> Lista_Pacientes;




};

ostream& operator<<(ostream& out, cPacientes& _Pac)
{
	
	out << _Pac.get_ID() << _Pac.get_nombre() << _Pac.get_apellido() << _Pac.get_Nombre_Hosp() << _Pac.get_Tel() << _Pac.get_Radio_Amput()<<_Pac.
		endl;
	return out;
}