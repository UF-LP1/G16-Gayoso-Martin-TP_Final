#pragma once
#ifndef _CPACIENTES_H
#define _CPACIENTES_H
#include<list>
#include "cProtesis.h"
#include "cPersonas.h"
#include "cAlergias.h" 
#include "Miembros.h"


class cMedicos;
class cPacientes : public cPersonas
{
public:      
	
	cPacientes(string id,string Nom, string app, cProtesis& prot, Alergias Aler, Miembros Miemb, cFechass fecha);
	~cPacientes();
	
	
	bool operator==(const cPacientes& pac)const ;
	cPacientes &operator=(const cPacientes& acopiar);
	friend ostream& operator<<(ostream& out, const cPacientes& _Pac);


	float  get_Radio_Amput();//USADA
	cProtesis* get_Prot_Nec();//USADA
	Alergias get_Alergias();//USADA
	string get_Tel();//USADA
	string get_Mat();//USADA
	string get_Hosp();
	void CrearPac(string T,string NH,float RA);

	void set_Tel(string _Tel);//USADA
	void set_Nombre_Hosp(string _N_H);//USADA
	void set_Rad_Amput(float R_A);//USADA
	void set_Protesis_Nec(cProtesis& Prot); //USADA
	void set_Alergias(Alergias ale);//USADA
	void set_Miembro(Miembros M);//USADA
	void set_MatriculaMed(string Mat);//Usada
	void set_Hosp(string h);
	
	
	string to_stringpac() const;//USADA
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

#endif

