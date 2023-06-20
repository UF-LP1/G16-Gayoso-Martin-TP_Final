#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direc) :cEstablecimiento(_Nombre, _Direc)
{
	this->Lista_Medicos.clear();
	this->Lista_Pacientes.clear();
}

cHospital::~cHospital()
{
}

void cHospital::Agregar_Pac(cPacientes NewPac)   
{
	bool Pac_Registrado = false;

	list<cPacientes>::iterator it = Lista_Pacientes.begin();
	while (it != Lista_Pacientes.end())
	{
		if (*it == NewPac)
		{
			Pac_Registrado = true;
			break;
		}
		it++;
	}
	if (Pac_Registrado == false)
	{
		Lista_Pacientes.push_back(NewPac);
	}
	if (Pac_Registrado == true && it == Lista_Pacientes.end())
		throw NoAgregado();
	
	
}
void cHospital::Agregar_Med(cMedicos NewMed)
{
	Lista_Medicos.push_back(NewMed);

}

void cHospital::Imprimir_Pac()
{
	list<cPacientes>::iterator it = Lista_Pacientes.begin();
	for (it; it != Lista_Pacientes.end(); it++)
	{
		cout << *it;
	}

}

void cHospital::Imprimir_Med()
{
	list<cMedicos>::iterator it = Lista_Medicos.begin();
	for (it; it != Lista_Medicos.end(); it++)
	{
		cout << *it;
	}

}

void cHospital::operator+(cPacientes& pac)
{
	try
	{
		this->Agregar_Pac(pac);
	}
	catch (const std::exception& e)
	{
		throw NoAgregado();
	}
	
}

void cHospital::operator+(cMedicos& Med)
{
	this->Agregar_Med(Med);
}

cMedicos cHospital::BuscarPorMat()
{
	list<cPacientes>::iterator itp = Lista_Pacientes.begin();
	list<cMedicos>::iterator itm = Lista_Medicos.begin();
	for (itp; itp!= Lista_Pacientes.end(); itp++)
	{
		for (itm; itm != Lista_Medicos.end(); itm++)
		{
			if (itp->get_Mat() == itm->get_Matric())
			{
				return *itm;
			}
		}
		itm= Lista_Medicos.begin();
	}
//no hacemos excepcion aca porque si o si tiene que haber un medico si no nadie podria haverle seteado una matricula al paciente
}



cHospital& cHospital::operator=(const cHospital& acopiar)
{
	if (this != &acopiar)
	{
		this->Lista_Medicos = acopiar.Lista_Medicos;
		this->Lista_Pacientes = acopiar.Lista_Pacientes;

	}
	
	return *this;
}
//
//bool cHospital::operator==(cHospital& hosp)
//{
//	if (this->Direc == hosp.Direc && this->Nombre == hosp.Nombre)
//		return true;
//	else
//	{
//		return false;
//	}
//	
//}


std::string cHospital::to_stringH()
{
	stringstream salida;
	salida << "Nombre del Hospital: " << this->Nombre << "Direccion del Hospital: " << this->Direc;
	return salida.str();
}


void cHospital :: ImprimirH()
{
	cout << this -> to_stringH() << endl;
}

