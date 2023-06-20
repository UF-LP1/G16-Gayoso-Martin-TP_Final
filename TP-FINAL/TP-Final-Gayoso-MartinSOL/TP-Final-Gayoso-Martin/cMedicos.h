#pragma once
#ifndef _CMEDICOS_H
#define _CMEDICOS_H
#include "cPersonas.h" 
#include "cPacientes.h"
#include <ctime>
#include "cNoQuirurgicas.h"
#include "cQuirurgicas.h"
#include"Funciones.h"
using namespace std;  

class cMedicos : public cPersonas
{
public:
	cMedicos(string id,string Nom, string app);
	~cMedicos();  

	void AsignarProtesis(cPacientes & _paciente, unsigned int k);//USADA
	string get_Matric();//USADA
	cMedicos& operator=(const cMedicos& acopiar);//USADA
	void set_Matricula(string mat);
	string to_stringM();//USADA
	void ImprimirM();//USADA


protected:
	string Matricula;
	
};

#endif

