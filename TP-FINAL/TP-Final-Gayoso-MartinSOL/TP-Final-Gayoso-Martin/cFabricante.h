#pragma once
#include "cEstablecimiento.h"
#include <sstream>
class cFabricante : public cEstablecimiento
{
public:
	cFabricante(string _Nombre, string _Direc);
	~cFabricante();

	unsigned int get_Nro_Hab();//USADA
	bool get_Sol();//USADA

	void set_Nro_Hab(unsigned int nh);//USADO
	void set_Sol(bool& sol);//USADO
	string to_string();//usada
	void Imprimir();//USADO

protected:
	unsigned int Nro_Habilitacion;
	bool Solicitud;



};