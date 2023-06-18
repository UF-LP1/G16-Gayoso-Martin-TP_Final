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
	cRegistro(cHospital hosp, cMedicos medic, cProtesis *prot, cPacientes Paciente, cFechass fecha_e, cFechass fecha_s);
	~cRegistro();

	void setHosp(cHospital hosp);
	void setMedico(cMedicos med);
	void setPac(cPacientes pacs);
	void setProt(cProtesis *prot);
	void setFechaS(cFechass FS);
	unsigned int generarFechaEst();
	void generarFechaE();
	cFechass get_FechaSol();

protected:
	cHospital Hospital;
	cMedicos Medico;
	cProtesis *P_Ort;
	cPacientes Paciente;
	cFechass Fecha_Sol;
	unsigned int Fecha_EstE;
	cFechass Fecha_Entrega;

};