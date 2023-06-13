#include "cPacientes.h"


int cPacientes::cant_pacientes = 0;

cPacientes::cPacientes(string id,string Nom, string app, cProtesis& prot) :cPersonas(id,Nom, app), Prot_Necesitada(&prot)
{
	this->Fecha_Nac = { 0,0,0 };
	this->Telefono = " ";
	this->Nombre_Hosp = " ";
	this->Radio_Amput = 0.0;

	cant_pacientes++;
}
list<cPacientes> operator+(list<cPacientes> list_p, cPacientes& pac)
{
	bool Pac_Registrado=false;

	list<cPacientes>::iterator it = list_p.begin();
	while (it != list_p.end())
	{
		if (*it == pac)
		{
			Pac_Registrado = true;
			break;
		}
		it++;
	}  
	if (Pac_Registrado==false)
	{
		list_p.push_back(pac);
	}
	return list_p;
}

bool cPacientes::operator==(const cPacientes& pac) const 
{

	return (this->ID == pac.ID && this->Prot_Necesitada == pac.Prot_Necesitada);
}

tm cPacientes::get_FechaNac()
{
	return this->Fecha_Nac;
}

string cPacientes::get_Tel()
{
	return this->Telefono;
}

string cPacientes::get_Nombre_Hosp()
{
	return this->Nombre_Hosp;
}

float cPacientes::get_Radio_Amput()
{
	return this->Radio_Amput;
}

cProtesis* cPacientes::get_Prot_Nec()
{
	return this->Prot_Necesitada;
}

void cPacientes::set_FechaNac(tm _Fecha)
{
	this->Fecha_Nac = _Fecha;
}

void cPacientes::set_Tel(string _Tel)
{
	this->Telefono = _Tel;
}

void cPacientes::set_Nombre_Hosp(string _N_H)
{
	this->Nombre_Hosp = _N_H;
}

void cPacientes::set_Rad_Amput(float R_A)
{
	this->Radio_Amput = R_A;
}

void cPacientes::set_Protesis_Nec(cProtesis *Prot)
{
	this->Prot_Necesitada = Prot;
}

cPacientes::~cPacientes()
{
	cant_pacientes--;
}





