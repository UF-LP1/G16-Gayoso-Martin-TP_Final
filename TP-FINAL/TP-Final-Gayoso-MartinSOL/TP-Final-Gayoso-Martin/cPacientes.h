#pragma once
#include<list>
#include "cProtesis.h"
#include "cPersonas.h"
#include "cAlergias.h" 
#include "Miembros.h"
#include "cFechass.h"

class cMedicos;
class cPacientes : public cPersonas
{
public:
	
	cPacientes(string id,string Nom, string app, cProtesis& prot, Alergias Aler, Miembros Miemb, cFechass fecha);
	~cPacientes();
	
	
	bool operator==(const cPacientes& pac) const;
	cPacientes &operator=(const cPacientes& acopiar);


	cFechass get_FechaNac();
	string get_Tel();
	string get_Nombre_Hosp();
	float  get_Radio_Amput();
	cProtesis* get_Prot_Nec();//USADA
	Alergias get_Alergias();
	Miembros get_Miembro();
	string get_Mat();
	
	void CrearPac(string T,string NH,float RA);

	void set_Tel(string _Tel);//USADA
	void set_Nombre_Hosp(string _N_H);//USADA
	void set_Rad_Amput(float R_A);//USADA
	void set_Protesis_Nec(cProtesis* Prot); //USADA
	void set_Alergias(Alergias ale);//USADA
	void set_Miembro(Miembros M);//USADA
	void set_MatriculaMed(string Mat);//Usada
	
	
	string to_stringpac();//USADA
	void Imprimirpac();

	static int cant_pacientes;
	
protected:
	const cFechass Fecha_Nac;
	string Telefono;
	string Nombre_Hosp;
	float Radio_Amput;
	cProtesis* Prot_Necesitada; 
	bool ProtesisConseguida; //true consiguio la protesis flase no la consiguio
	Alergias Alergia;
	Miembros MiembroProtesis;
	string MatriculadelMed;
	
}; 

