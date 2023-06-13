#include "cMedicos.h"


cMedicos::cMedicos(string id,string Nom, string app):cPersonas(id,Nom,app)
{
	this->Matricula = " ";
}

cMedicos::~cMedicos()
{
}

void cMedicos::AsignarProtesis(cPacientes& _paciente)
{
	//srand((unsigned) time(NULL));
	
	bool var=false;{} 

	srand(time(NULL));
	int aux = rand() % (1 - 0);
	if (aux == 1)
		var = true;
	else
		var = false;

	_paciente.get_Prot_Nec()->set_Der_Izq(var);

	aux = rand() % (1 - 0);
	if (aux == 1)
		var == true;
	else
		var == false;
	_paciente.get_Prot_Nec()->set_Sup_Inf(var);

	cQuirurgicas* CQ = dynamic_cast<cQuirurgicas*>(_paciente.get_Prot_Nec());
	if (CQ != NULL)
	{
		vector<string>Materiales;
		CQ->Agregar_Mat(Materiales);

		aux = rand() % (Materiales.size() - 0);

		CQ->set_Mat(Materiales[aux]);

		_paciente.set_Protesis_Nec(CQ);
	}
	else
	{
		cNoQuirurgicas* CNQ = dynamic_cast<cNoQuirurgicas*>(_paciente.get_Prot_Nec());
		if (CNQ != NULL)
		{
			CNQ->set_Radio(_paciente.get_Radio_Amput());

			float largo = float(rand() % int((135.3 - 29.8) * 100 + 1)) / 100.0f + 29.8f;

			CNQ->set_Largo(largo);

			float ancho = float(rand() % int((40.0 - 2.4) * 100 + 1)) / 100.0f + 2.4f;

			CNQ->set_Ancho(ancho);

			_paciente.set_Protesis_Nec(CNQ);

		}
	}
	

}
