#include "cFabricante.h"

cFabricante::cFabricante(string _Nombre, string _Direc) :cEstablecimiento(_Nombre,_Direc)
{
	this->Nro_Habilitacion = 0;
	this->Solicitud = false;

}

cFabricante::~cFabricante()
{
}

unsigned int cFabricante::get_Nro_Hab()
{
	return this->Nro_Habilitacion;
}

bool cFabricante::get_Sol()
{
	return this->Solicitud;
}

void cFabricante::set_Nro_Hab(unsigned int nh)
{
	this->Nro_Habilitacion = nh;
}

void cFabricante::set_Sol(bool& sol)
{
	sol= false; {}

	srand(time(NULL));
	int aux = rand() % (1 - 0);
	if (aux == 1)
		sol = true;
	else
		sol = false;
	this->Solicitud = sol;
}

string cFabricante::to_string()
{
	stringstream salida;
	salida << "Nombre del Fabricante: " << this->Nombre << "Direccion del Fabricante: " << this->Direc << "El Nro del Habilitacion del fabricante es: " << this->Nro_Habilitacion << "El estado de la solicitud es: " << this->Solicitud;
	return salida.str();
}

void cFabricante::Imprimir()
{
	cout << this->to_string() << endl;

}
