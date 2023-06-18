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

protected:
	list<cOrtopedia> Lista_Ortopedias;
	list<cRegistro>Lista_Registro;
	list<cHospital>Lista_Hosp_Registrados;
};
