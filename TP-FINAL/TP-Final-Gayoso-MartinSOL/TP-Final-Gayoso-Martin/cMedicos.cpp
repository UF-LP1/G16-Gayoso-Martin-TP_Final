#include "cMedicos.h"


cMedicos::cMedicos(string id,string Nom, string app):cPersonas(id,Nom,app)
{
	this->Matricula = " ";
	
}

cMedicos::~cMedicos()
{
}

void cMedicos::AsignarProtesis(cPacientes& _paciente, unsigned int k)
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
	aux = 0;
	aux = rand() % (1 - 0);
	if (aux == 1)
		var == true;
	else
		var == false;
	_paciente.get_Prot_Nec()->set_Sup_Inf(var);


	time_t tiempoActual = time(0);
	struct tm* tiempo = localtime(&tiempoActual);
	cFechass FechaSol(tiempo->tm_mday, tiempo->tm_mon + 1, tiempo->tm_year + 1900);

	_paciente.get_Prot_Nec()->set_Fecha_Sol(FechaSol);//le tenemos que pasar una variable fecha


	cQuirurgicas* CQ = dynamic_cast<cQuirurgicas*>(_paciente.get_Prot_Nec());
	if (CQ != NULL)
	{
		vector<string>Materiales;
		CQ->Agregar_Mat(Materiales);
		aux = 0;
		aux = rand() % (Materiales.size() - 0);
		
		do   
		{
			aux = rand() % (Materiales.size() - 0);
			CQ->set_Mat(Materiales[aux]);
		} while (aux==_paciente.get_Alergias());
		

		_paciente.set_Protesis_Nec(CQ); 
	}
	else
	{
		cNoQuirurgicas* CNQ = dynamic_cast<cNoQuirurgicas*>(_paciente.get_Prot_Nec());
		if (CNQ != NULL)
		{

			CNQ->set_Radio(_paciente.get_Radio_Amput());
			aux = 0;
			aux = rand() % (4 - 0);


			_paciente.set_Protesis_Nec(CNQ);
		
			_paciente.set_MatriculaMed(this->Matricula);
		}
	}
	

}

string cMedicos::get_Matric()
{
	return this->Matricula;
}

cMedicos& cMedicos::operator=(const cMedicos& acopiar)
{
	if (this != &acopiar)
	{
		this->Matricula = acopiar.Matricula;
	

	}
	return *this;
}
