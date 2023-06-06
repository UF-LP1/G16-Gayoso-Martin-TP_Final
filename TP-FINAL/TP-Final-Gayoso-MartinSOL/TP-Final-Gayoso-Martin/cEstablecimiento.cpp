#include "cEstablecimiento.h"

cEstablecimiento::cEstablecimiento(string _Nombre, string _Direc):Nombre(_Nombre),Direc(_Direc) 
{
}

cEstablecimiento::~cEstablecimiento()
{
}

string cEstablecimiento::get_Nombre()
{
    return this->Nombre;
}

string cEstablecimiento::get_Direc()
{
    return this->Direc;
}
