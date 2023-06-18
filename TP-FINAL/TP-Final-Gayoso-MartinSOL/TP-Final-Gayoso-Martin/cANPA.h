#pragma once
#include <string>
#include <list>
#include "cOrtopedia.h"
#include "cRegistro.h"

class cANPA
{
public:

	cANPA();
	~cANPA();
	
	bool BuscarPorOrtopedia(cPacientes Pacs);
	friend class cOrtopedia;
	void Guardar_en_Registro();
	cPacientes buscar_Hosp(cHospital hosp);
	friend ostream& operator<<(ostream& out, cRegistro& reg);

	void Imprimir_Ortopedias();
	void Imprimir_Registro();
	void Imprimir_Hospitales();
protected:
	list<cOrtopedia> Lista_Ortopedias;
	list<cRegistro>Lista_Registro;
	list<cHospital>Lista_Hosp_Registrados;
};



ostream& operator<<(ostream& out, cHospital& hosp)
{
	out << hosp.get_Nombre() << hosp.get_Direc() << endl;
	return out;
}
ostream& operator<<(ostream& out, cOrtopedia& ort)
{
	out << ort.get_Nombre()<<ort.get_Direc()<< endl;
	return out;
}
