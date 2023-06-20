#include "cMedicos.h"
#ifndef __STD_LIB_EXT1__
#define __STD_LIB_EXT1__
#endif
#define __STD__WANT_LIB_EXT1__1

cMedicos::cMedicos(string id,string Nom, string app):cPersonas(id,Nom,app)
{
	this->Matricula = " ";
	
}

cMedicos::~cMedicos()
{
}

void cMedicos::AsignarProtesis(cPacientes& _paciente, unsigned int k)
{
	
	
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
		var = true;
	else
		var = false;
	_paciente.get_Prot_Nec()->set_Sup_Inf(var);


	time_t tiempoActual = time(0);
	

	struct tm tiempo;
	localtime_s(&tiempo ,&tiempoActual);
	
	cFechass FechaSol(tiempo.tm_mday, tiempo.tm_mon + 1, tiempo.tm_year + 1900);

	_paciente.get_Prot_Nec()->set_Fecha_Sol(FechaSol);

	_paciente.get_Prot_Nec()->set_Fecha_Fab(FechaSol);
	
	
	unsigned int vark = 0;

	vark = rand() % (15 - 10);
	tm FechaE = {};
	FechaE.tm_mday = _paciente.get_Prot_Nec()->get_Fecha_Fab().get_dia();
	FechaE.tm_mon = _paciente.get_Prot_Nec()->get_Fecha_Fab().get_mes() - 1;
	FechaE.tm_year = _paciente.get_Prot_Nec()->get_Fecha_Fab().get_anio() - 1900;

	time_t tiempoE = mktime(&FechaE); //paso la fecha de entrega a segundos

	time_t diasEs =  vark * 24 * 60 * 60;// paso los dias estimados a segundos

	tiempoE += diasEs;

	tm NFechaE;
	localtime_s(&NFechaE,&tiempoE);
	_paciente.get_Prot_Nec()->get_Fecha_Fab().set_dia(NFechaE.tm_mday);
	_paciente.get_Prot_Nec()->get_Fecha_Fab().set_mes(NFechaE.tm_mon+1);
	_paciente.get_Prot_Nec()->get_Fecha_Fab().set_anio(NFechaE.tm_year+1900);


	
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
		

		_paciente.set_Protesis_Nec(*CQ); 
	}
	else
	{
		cNoQuirurgicas* CNQ = dynamic_cast<cNoQuirurgicas*>(_paciente.get_Prot_Nec());
		if (CNQ != NULL)
		{

			CNQ->set_Radio(_paciente.get_Radio_Amput());
			aux = 0;
			aux = rand() % (4 - 0);
			Switch(_paciente, k, *CNQ);

			_paciente.set_Protesis_Nec(*CNQ);
		
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
void cMedicos::set_Matricula(string mat)
{
	this->Matricula = mat;
}
std::string cMedicos::to_stringM() const
{
	stringstream salida;
	salida << "Nombre del Medico: " << this->nombre << " ,Apellido del Medico: " << this->apellido << " ,ID del Medico: " << this->ID << "  ,Matricula del Medico: " << this->Matricula<<endl;
	return salida.str();
}

void cMedicos::ImprimirM()
{
	cout << this->to_stringM() << endl;
}

ostream& operator<<(ostream& out, const cMedicos& med)
{
	
		out << med.to_stringM();
		return out;
	
}
