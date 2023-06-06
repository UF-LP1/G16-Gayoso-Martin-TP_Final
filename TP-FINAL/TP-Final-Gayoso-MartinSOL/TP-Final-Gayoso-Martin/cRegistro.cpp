#include "cRegistro.h"

cRegistro::cRegistro(cHospital hosp, cMedicos medic, cProtesis prot, cPacientes paciente) :Hospital(hosp), Medico(medic), P_Ort(prot),Paciente(paciente)
{
	this->Fecha_Sol = { 0,0,0 };
	this->Fecha_EstE = { 0,0,0 };
	this->Fecha_Entrega = { 0,0,0 };
}

cRegistro::~cRegistro()
{
}
