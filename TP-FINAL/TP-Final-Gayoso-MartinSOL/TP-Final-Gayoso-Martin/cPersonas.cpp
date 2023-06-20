#include "cPersonas.h"

cPersonas::cPersonas(string id,string Nom, string app):ID(id),nombre(Nom),apellido(app)
{
}

cPersonas::~cPersonas()
{
}

string cPersonas::get_nombre()
{
	return this->nombre ;//USADSO
}
