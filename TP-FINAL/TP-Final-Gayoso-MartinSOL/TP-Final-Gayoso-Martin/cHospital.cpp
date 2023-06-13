#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direc) :cEstablecimiento(_Nombre, _Direc)
{
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

list<cPacientes> operator+(list<cPacientes> list_p, cPacientes& pac)
{
	list_p.push_back(pac);
	return list_p;
}
