#pragma once
#include<list>
#include "cProtesis.h"
#include "cPersonas.h"
#include "cAlegrias.h"
#include "Miembros.h"
class cPacientes : public cPersonas
{
public:
	
	cPacientes(string id,string Nom, string app, cProtesis& prot, Alegrias Aler, Miembros Miemb);
	~cPacientes();
	
	friend list<cPacientes> operator+(list<cPacientes> list_p, cPacientes& pac);
	bool operator==(const cPacientes& pac) const;



	tm get_FechaNac();
	string get_Tel();
	string get_Nombre_Hosp();
	float  get_Radio_Amput();
	cProtesis* get_Prot_Nec();//USADA
	Alegrias get_Alergias();
	Miembros get_Miembro();
	

	void set_FechaNac(tm _Fecha);
	void set_Tel(string _Tel);
	void set_Nombre_Hosp(string _N_H);
	void set_Rad_Amput(float R_A);
	void set_Protesis_Nec(cProtesis* Prot); //USADA
	void set_Alergias(Alegrias ale);
	void set_Miembro(Miembros M);


	static int cant_pacientes;


	
protected:
	tm Fecha_Nac;
	string Telefono;
	string Nombre_Hosp;
	float Radio_Amput;
	cProtesis* Prot_Necesitada; 
	bool ProtesisConseguida; //true consiguio la protesis flase no la consiguio
	Alegrias Alergia;
	Miembros MiembroProtesis;
}; 
