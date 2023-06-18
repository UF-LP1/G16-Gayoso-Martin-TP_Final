#include "cANPA.h"

cANPA::cANPA()
{
    this->Lista_Ortopedias.clear();
    this->Lista_Registro.clear();
}

cANPA::~cANPA()
{
}

bool cANPA::BuscarPorOrtopedia(cPacientes Pacs)
{
    list<cOrtopedia>::iterator it = Lista_Ortopedias.begin();
    bool var=false;
   while( it != Lista_Ortopedias.end())
    {
       var= (it)->Buscar_Prot(Pacs);
       if (var == true)
       {
           return true;
       }
       else
       {
           it++;
       }
       
    }
       if(var==false)
         return false;
}

void cANPA::Guardar_en_Registro()
{
    list<cHospital>::iterator ith = Lista_Hosp_Registrados.begin();
    list<cRegistro>::iterator itr = Lista_Registro.begin();

}
