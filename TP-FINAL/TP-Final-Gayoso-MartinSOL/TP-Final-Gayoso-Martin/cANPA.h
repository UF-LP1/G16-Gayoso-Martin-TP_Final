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
	//buscara aca

	friend class cOrtopedia;

protected:
	list<cOrtopedia> Lista_Ortopedias;
	list<cRegistro>Lista_Registro;

};
