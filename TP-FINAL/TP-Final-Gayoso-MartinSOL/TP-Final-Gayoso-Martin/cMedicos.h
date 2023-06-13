#pragma once
#include<string>
#include "cPersonas.h" 
#include "cPacientes.h"
#include "cProtesis.h"
#include "cNoQuirurgicas.h"
#include "cQuirurgicas.h"

using namespace std;

class cMedicos : public cPersonas
{
public:
	cMedicos(string id,string Nom, string app);
	~cMedicos();

	void AsignarProtesis(cPacientes & _paciente);

protected:
	string Matricula;

};
