#pragma once
#include <string>
#include <ctime>
#include "cHospital.h"
#include "cMedicos.h"
#include "cPacientes.h"
#include "cOrtopedia.h"
using namespace std;


class cRegistro
{
public:
	cRegistro(cHospital hosp, cMedicos medic, cProtesis *prot, cPacientes Paciente);
	~cRegistro();

	void setHosp(cHospital hosp);
	void setMedico(cMedicos med);
	void setPac(cPacientes pacs);
	void setProt(cProtesis *prot);


protected:
	cHospital Hospital;
	cMedicos Medico;
	cProtesis *P_Ort;
	cPacientes Paciente;
	tm Fecha_Sol;
	tm Fecha_EstE;
	tm Fecha_Entrega;

};