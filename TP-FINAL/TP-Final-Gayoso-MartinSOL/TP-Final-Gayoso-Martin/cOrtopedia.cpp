#include "cOrtopedia.h"

cOrtopedia::cOrtopedia(string _Nombre, string _Direc):cEstablecimiento(_Nombre, _Direc)
{
	this->Lista_Protesis.clear();
	this->Lista_Stock.clear();
}

cOrtopedia::~cOrtopedia()
{
}

bool cOrtopedia::Buscar_Prot(cPacientes _paciente)
{
	list<cProtesis>::iterator it = Lista_Stock.begin();

	bool var = false;
	while (it != Lista_Stock.end())
	{
		if (*_paciente.get_Prot_Nec() == *it)
		{
			this->quitar_Protesis_delStock(*it);//para sacarla del stock
			return true;
		}
		else
		{
			var = Sol_Prot_F(_paciente.get_Prot_Nec());
			if (var == true)
				return true;
		
		}
		it++;
	}
	if (it == Lista_Stock.end())
		return false;

}

bool cOrtopedia::Sol_Prot_F(cProtesis* Prot1)
{
	if (Prot1->get_Fabricante().get_Sol() == true)
		return true;//significa que el fabricante me da la proteisis 
	else
		return false;
}

void cOrtopedia::Imprimir_Prot()
{
	list<cProtesis>::iterator it = Lista_Protesis.begin();
	for (it; it != Lista_Protesis.end(); it++)
	{
		cout << *it; 
	}
}

void cOrtopedia::Imprimir_Prot_Stock()
{
	list<cProtesis>::iterator it = Lista_Stock.begin();
	for (it; it != Lista_Stock.end(); it++)
	{
		cout << *it;
	}
}

void cOrtopedia::agregar_Protesis(cProtesis& _Protesis)
{
	Lista_Protesis.push_back(_Protesis);
}

void cOrtopedia::agregar_Stock(cProtesis& _Protesis)
{
	Lista_Stock.push_back(_Protesis);
} 

void cOrtopedia::quitar_Protesis_delStock(cProtesis &_Protesis)
{
	Lista_Stock.remove(_Protesis);
}

void cOrtopedia::operator-(cProtesis& prot)
{
	this->quitar_Protesis(prot);
}



