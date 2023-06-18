#include "cRegistro.h"

cRegistro::cRegistro(cHospital hosp, cMedicos medic, cProtesis* prot, cPacientes paciente) :Hospital(hosp), Medico(medic), P_Ort(prot),Paciente(paciente)
{
	this->Fecha_Sol = { 0,0,0 };
	this->Fecha_EstE = { 0,0,0 };
	this->Fecha_Entrega = { 0,0,0 };
}

cRegistro::~cRegistro()
{
}

void cRegistro::setHosp(cHospital hosp)
{
	this->Hospital = hosp;
}

void cRegistro::setMedico(cMedicos med)
{
	this->Medico = med;
}

void cRegistro::setPac(cPacientes pacs)
{
	this->Paciente = pacs;
}

void cRegistro::setProt(cProtesis* prot)
{
	this->P_Ort = prot;
}

