#include "cMedicos.h"


cMedicos::cMedicos(string id,string Nom, string app):cPersonas(id,Nom,app)
{
	this->Matricula = " ";
}

cMedicos::~cMedicos()
{
}

void cMedicos::AsignarProtesis(cPacientes& _paciente)
{//srand((unsigned) time(NULL));
	bool var;

	srand(time(NULL));
	int aux = rand() % (1 - 0);
	if (aux == 1)
		var == true;
	else
		var == false;

	_paciente.get_Prot_Nec()->set_Der_Izq(var);

	aux = rand() % (1 - 0);
	if (aux == 1)
		var == true;
	else
		var == false;
	_paciente.get_Prot_Nec()->set_Sup_Inf(var);

	//     C* pc = dynamic_cast<C*>(pd); 

	if (_paciente.get_Prot_Nec() == dynamic_cast<cQuirurgicas*>(_paciente.get_Prot_Nec()))
	{
		_paciente.get_Prot_Nec()->

	}
	

}
