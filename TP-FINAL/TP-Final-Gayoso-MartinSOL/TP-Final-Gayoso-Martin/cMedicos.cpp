#include "cMedicos.h"


cMedicos::cMedicos(string id,string Nom, string app):cPersonas(id,Nom,app)
{
	this->Matricula = " ";
}

cMedicos::~cMedicos()
{
}

void cMedicos::AsignarProtesis(cPacientes _paciente)
{
	if (_paciente.get_Radio_Amput() == 0)
	{

	}
	
}
