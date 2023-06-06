#pragma once
#include "cEstablecimiento.h"
class cFabricante: public cEstablecimiento
{
public:
	cFabricante(string _Nombre, string _Direc);
	~cFabricante();

	unsigned int get_Nro_Hab();
	bool get_Sol();

	void set_Nro_Hab(unsigned int nh);
	void set_Sol(bool sol);

protected:
	unsigned int Nro_Habilitacion;
	bool Solicitud;



};

