#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direc) :cEstablecimiento(_Nombre, _Direc)
{
	this->Lista_Medicos.clear();
	this->Lista_Pacientes.clear();
}

cHospital::~cHospital()
{
}

void cHospital::Agregar_Pac(cPacientes NewPac)
{
	Lista_Pacientes = Lista_Pacientes + NewPac; 
}
void cHospital::Imprimir_Pac()
{
	list<cPacientes>::iterator it = Lista_Pacientes.begin();
	for (it; it != Lista_Pacientes.end(); it++)
	{
		cout << *it;
	}

}

list<cPacientes>::iterator cHospital::buscar_Pac(cProtesis* prot)
{
	list<cPacientes>::iterator it = Lista_Pacientes.begin();
	while (it != Lista_Pacientes.end())
	{    
		if (it->get_Prot_Nec() == prot)
			return it;
		it++;
	}
	if (it == Lista_Pacientes.end())
		return Lista_Pacientes.end(); //te devuelve el ultimo de la lista 
}

list<cPacientes> operator+(list<cPacientes> list_p, cPacientes& pac)
{
	list_p.push_back(pac);
	return list_p;
}
