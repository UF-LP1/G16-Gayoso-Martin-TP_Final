#pragma once
#ifndef _CANPA_H
#define _CANPA_H

#include <string>
#include <list>
#include "cOrtopedia.h"
#include "cRegistro.h"

class cANPA
{
public:

	cANPA();
	~cANPA();
	
	bool BuscarPorOrtopedia(cPacientes Pacs);//USADA
	friend class cOrtopedia;
	void Guardar_en_Registro();//USADA
	cPacientes buscar_Hosp(cHospital hosp);//USADA
	//friend ostream& operator<<(ostream& out, cRegistro& reg);

	void Agregar_Ortopedias(cOrtopedia& c); //USADA//esta funcion es para que nosotras podamos agegar cosas desde el main
	void Agregar_Registro(cRegistro& r); //USADA
	void Agregar_Hosp(cHospital& h);//USADA


	void Imprimir_Ortopedias();//USADA
	void Imprimir_Registro();//USADA
	void Imprimir_Hospitales();//USADA

	//friend ostream& operator<<(ostream& out, const cHospital& hosp);
	//friend ostream& operator<<(ostream& out, cOrtopedia& ort);
	//friend ostream& operator<<(ostream& out, cRegistro& reg);

protected:
	list<cOrtopedia> Lista_Ortopedias;
	list<cRegistro>Lista_Registro;
	list<cHospital>Lista_Hosp_Registrados;
};





//ostream& operator<<(ostream& out, cHospital& hosp)
//{
//	out<<hosp.to_stringH();
//	
//	return out;
//}
//ostream& operator<<(ostream& out, cOrtopedia& ort)
//{
//	
//	out << ort.get_Nombre()<<ort.get_Direc()<< endl;
//	return out;
//}
//ostream& operator<<(ostream& out, cRegistro& reg)
//{
//	out<<reg.to_stringR();
//	return out;
//}

#endif