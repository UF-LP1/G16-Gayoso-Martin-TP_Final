#include "cOrtopedia.h"

cOrtopedia::cOrtopedia(string _Nombre, string _Direc):cEstablecimiento(_Nombre, _Direc)
{
}

cOrtopedia::~cOrtopedia()
{
}

void cOrtopedia::Buscar_Prot(cANPA c,cPacientes _paciente)
{
	list<cOrtopedia>::iterator it = c.Lista_Ortopedias.begin();
	list<cProtesis>::iterator it2 = Lista_Stock.begin();

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

void cOrtopedia::agregar_Protesis(cProtesis _Protesis)
{
	Lista_Protesis.push_back(_Protesis);
}

void cOrtopedia::agregar_Stock(cProtesis _Protesis)
{
	Lista_Stock.push_back(_Protesis);
}

void cOrtopedia::quitar_Protesis(cProtesis _Protesis)
{
	Lista_Protesis = Lista_Protesis - _Protesis;
}

list<cProtesis> operator-(list<cProtesis> list_pro, cProtesis& prot)
{
	list_pro.remove(prot);
	return list_pro;
}
