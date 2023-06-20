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
       try
       {
           var = (it)->Buscar_Prot(Pacs);
       }
       catch (const std::exception&)
       {
           throw NotFound();
       }
       
       if (var == true)
       {
           return true;
       }
      
           it++;    
   }
   
   
      
   
       
         return false;
}

void cANPA::Guardar_en_Registro()
{
    list<cHospital>::iterator ith = Lista_Hosp_Registrados.begin();
    list<cRegistro>::iterator itr = Lista_Registro.begin();

    for (itr; itr != Lista_Registro.end(); itr++)
    {
        for (ith; ith != Lista_Hosp_Registrados.end(); ith++)
        {
           
            itr->setHosp(*ith);
            itr->setMedico(ith->BuscarPorMat());
            try
            {
                itr->setPac(this->buscar_Hosp(*ith));
                itr->setProt(this->buscar_Hosp(*ith).get_Prot_Nec());//como la funcion buscar_hosp te devuelve un paciente, desde el paciente que te devuelve pedis la protesis

                itr->setFechaS(this->buscar_Hosp(*ith).get_Prot_Nec()->get_FechaSol());
                itr->generarFechaE();
            }
            catch (const std::exception& e)
            {
                throw NotFound();

            }
            
        }
    }
}

cPacientes cANPA::buscar_Hosp(cHospital hosp)
{
    list<cPacientes>::iterator it = hosp.Lista_Pacientes.begin();
    while (it != hosp.Lista_Pacientes.end())
    {
        if (it->get_nombre() == hosp.get_Nombre())
            return *it;
        it++;
    }
    if (it == hosp.Lista_Pacientes.end())
    {
        throw NotFound();
    }
    return *it;

}

void cANPA::Agregar_Ortopedias(cOrtopedia& c)
{
    Lista_Ortopedias.push_back(c);
}

void cANPA::Agregar_Registro(cRegistro& r)
{
    Lista_Registro.push_back(r);
}

void cANPA::Agregar_Hosp(cHospital& h)
{
    Lista_Hosp_Registrados.push_back(h);
}

void cANPA::Imprimir_Ortopedias()
{
    list<cOrtopedia>::iterator it = Lista_Ortopedias.begin();
    for (it; it != Lista_Ortopedias.end(); it++)
    {
        cout << *it;
    }

}

void cANPA::Imprimir_Registro()
{
    list<cRegistro>::iterator it = Lista_Registro.begin();
    for (it; it != Lista_Registro.end(); it++)
    {
        cout << *it;
    }

}

void cANPA::Imprimir_Hospitales()
{
    list<cHospital>::iterator it = Lista_Hosp_Registrados.begin();
    for (it; it != Lista_Hosp_Registrados.end(); it++)
    {
        cout << *it;
    }

}





