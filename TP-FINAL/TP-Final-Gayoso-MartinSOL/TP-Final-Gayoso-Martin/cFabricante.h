#pragma once
#include "cEstablecimiento.h"
#include <sstream>
class cFabricante : public cEstablecimiento
{
public:
	cFabricante(string _Nombre, string _Direc);
	~cFabricante();

	unsigned int get_Nro_Hab();
	bool get_Sol();

	void set_Nro_Hab(unsigned int nh);
	void set_Sol(bool sol);
	string to_string();
	void Imprimir();

protected:
	unsigned int Nro_Habilitacion;
	bool Solicitud;



};