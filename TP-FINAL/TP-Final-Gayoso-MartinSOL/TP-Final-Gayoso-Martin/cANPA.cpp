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

    for (itr; itr != Lista_Registro.end(); itr++)
    {
        for (ith; ith != Lista_Hosp_Registrados.end(); ith++)
        {
            itr->setHosp(*ith);
            itr->setMedico(ith->BuscarPorMat());
            itr->setPac(this->buscar_Hosp(*ith));
            itr->setProt(this->buscar_Hosp(*ith).get_Prot_Nec());//como la funcion buscar_hosp te devuelve un paciente, desde el paciente que te devuelve pedis la protesis
            //Falta tema fechas!!!!
            itr->setFechaS(this->buscar_Hosp(*ith).get_Prot_Nec()->get_FechaSol());
            itr->generarFechaE();
        }
    }
}

cPacientes cANPA::buscar_Hosp(cHospital hosp)
{
    list<cPacientes>::iterator it = hosp.Lista_Pacientes.begin();
    while (it != hosp.Lista_Pacientes.end())
    {
        if (it->get_Nombre_Hosp() == hosp.getNombreHosp())
            return *it;
        it++;
    }
    //if (it == Lista_Pacientes.end())
        //return Lista_Pacientes.end(); //te devuelve el ultimo de la lista hacer excepcion
}
