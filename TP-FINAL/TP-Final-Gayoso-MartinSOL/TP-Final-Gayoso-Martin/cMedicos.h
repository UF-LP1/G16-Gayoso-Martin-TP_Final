#pragma once

#include "cPersonas.h" 
#include "cPacientes.h"
#include <ctime>
#include "cNoQuirurgicas.h"
#include "cQuirurgicas.h"
using namespace std;  

class cMedicos : public cPersonas
{
public:
	cMedicos(string id,string Nom, string app);
	~cMedicos();  

	void AsignarProtesis(cPacientes & _paciente, unsigned int k);
	string get_Matric();
	cMedicos& operator=(const cMedicos& acopiar);

	string to_stringM();
	void ImprimirM();


protected:
	string Matricula;
	
};

