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

	void setHosp(cHospital hosp);//USADO
	void setMedico(cMedicos med);//USADO
	void setPac(cPacientes pacs);//USADO
	void setProt(cProtesis *prot);//USADO
	void setFechaS(cFechass FS);//USADO
	unsigned int generarFechaEst();
	cFechass generarFechaE();//USADO
	cFechass get_FechaSol();//USADO
	cPacientes get_pac();//USADO
	cMedicos get_med();//USADO
	cHospital get_hosp();//USADO
	
	string to_stringR();//USADO
	void imprimirR();//USADO

protected:
	cHospital Hospital;
	cMedicos Medico;
	cProtesis *P_Ort;
	cPacientes Paciente;
	cFechass Fecha_Sol;
	unsigned int Fecha_EstE;
	cFechass Fecha_Entrega;

};