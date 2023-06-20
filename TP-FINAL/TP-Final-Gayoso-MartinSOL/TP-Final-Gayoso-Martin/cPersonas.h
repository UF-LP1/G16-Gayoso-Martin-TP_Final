#pragma once
#ifndef _CPERSONAS_H
#define _CPERSONAS_H
#include <string>
using namespace std;

class cPersonas
{
public:
	cPersonas(string id,string Nom, string app);
	~cPersonas();

	
	string get_nombre();
	


protected:
	const string ID; 
	const string nombre;
	const string apellido;
};

#endif