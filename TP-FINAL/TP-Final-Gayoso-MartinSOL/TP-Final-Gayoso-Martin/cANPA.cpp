#include "cANPA.h"

cANPA::cANPA()
{
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
