#pragma once
#include <string>
#include <ctime>
#include "cHospital.h"
#include "cMedicos.h"
#include "cPacientes.h"
#include "cOrtopedia.h"


class cRegistro
{
public:
	cRegistro(cHospital hosp, cMedicos medic, cProtesis prot, cPacientes Paciente);
	~cRegistro();

	cPacientes Buscar_Pac_Protesis();

protected:
	cHospital Hospital;
	cMedicos Medico;
	cProtesis P_Ort;
	cPacientes Paciente;
	tm Fecha_Sol;
	tm Fecha_EstE;
	tm Fecha_Entrega;

};