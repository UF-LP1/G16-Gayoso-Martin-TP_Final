#pragma once
#include<list>
#include "cProtesis.h"
#include "cPersonas.h"
#include "cAlegrias.h"
class cPacientes : public cPersonas
{
public:
	cPacientes(string id,string Nom, string app, const cProtesis& prot);
	~cPacientes();
	
	friend list<cPacientes> operator+(list<cPacientes> list_p, cPacientes& pac);
	bool operator==(const cPacientes& pac) const;

	tm get_FechaNac();
	string get_Tel();
	string get_Nombre_Hosp();
	float  get_Radio_Amput();
	cProtesis get_Prot_Nec();

	void set_FechaNac(tm _Fecha);
	void set_Tel(string _Tel);
	void set_Nombre_Hosp(string _N_H);
	void set_Rad_Amput(float R_A);
	
	
protected:
	tm Fecha_Nac;
	string Telefono;
	string Nombre_Hosp;
	float Radio_Amput;
	cProtesis Prot_Necesitada;
	list<cAlergias> list_Alergias;
}; 
