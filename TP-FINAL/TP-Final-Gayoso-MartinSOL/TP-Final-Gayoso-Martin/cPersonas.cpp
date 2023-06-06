#include "cPersonas.h"

cPersonas::cPersonas(string id,string Nom, string app):ID(id),nombre(Nom),apellido(app)
{
} 

cPersonas::~cPersonas()
{
}

string cPersonas::get_ID()
{
	return this->ID ;
}

string cPersonas::get_nombre()
{
	return this->nombre ;
}

string cPersonas::get_apellido()
{
	return this->apellido;
}
