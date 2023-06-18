#include "cPacientes.h"


int cPacientes::cant_pacientes = 0;

cPacientes::cPacientes(string id,string Nom, string app, cProtesis& prot, Alegrias Aler, Miembros Miemb, cFechass fecha):cPersonas(id,Nom, app), Prot_Necesitada(&prot), Fecha_Nac(fecha)
{
	this->Radio_Amput = 0.0;
	this->Telefono = " ";
	this->Nombre_Hosp = " ";
	this->Alergia = Aler;
	

	cant_pacientes++;
}


bool cPacientes::operator==(const cPacientes& pac) const 
{

	return (this->ID == pac.ID && this->Prot_Necesitada == pac.Prot_Necesitada);
}

cPacientes& cPacientes::operator=(const cPacientes& acopiar)
{
	if (this != &acopiar)
	{
		this->Telefono = acopiar.Telefono;
		this->ProtesisConseguida = acopiar.ProtesisConseguida;
		this->Alergia = acopiar.Alergia;
		this->MiembroProtesis = acopiar.MiembroProtesis;
		this->Nombre_Hosp = acopiar.Nombre_Hosp;
		this->Prot_Necesitada = acopiar.Prot_Necesitada;
		this->MatriculadelMed = acopiar.MatriculadelMed;
		this->Radio_Amput = acopiar.Radio_Amput;

	}

	return *this;
}

cFechass cPacientes::get_FechaNac()
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

Alegrias cPacientes::get_Alergias()
{
	return this->Alergia;
}

Miembros cPacientes::get_Miembro()
{
	return this->MiembroProtesis;
}

string cPacientes::get_Mat()
{
	return this->MatriculadelMed;
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

void cPacientes::set_Alergias(Alegrias ale)
{
	this->Alergia = ale;
}

void cPacientes::set_Miembro(Miembros M)
{
	this->MiembroProtesis = M;
}

void cPacientes::set_MatriculaMed(string Mat)
{
	this->MatriculadelMed = Mat;
}

cPacientes::~cPacientes()
{
	cant_pacientes--;
}





