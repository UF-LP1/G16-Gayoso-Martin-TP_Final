#pragma once
#include <string>
using namespace std;

class cPersonas
{
public:
	cPersonas(string id,string Nom, string app);
	~cPersonas();

	//string get_ID();
	string get_nombre();
	//string get_apellido();


protected:
	const string ID; 
	const string nombre;
	const string apellido;
};
