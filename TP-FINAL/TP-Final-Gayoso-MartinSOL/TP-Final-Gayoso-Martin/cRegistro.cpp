#include "cRegistro.h"

cRegistro::cRegistro(cHospital hosp, cMedicos medic, cProtesis* prot, cPacientes paciente, cFechass fecha_e, cFechass fecha_s) :Hospital(hosp), Medico(medic), P_Ort(prot),Paciente(paciente), Fecha_Entrega(fecha_e), Fecha_Sol(fecha_s)
{
	this->Fecha_EstE = 0;
}

cRegistro::~cRegistro()
{
}

void cRegistro::setHosp(cHospital hosp)
{
	this->Hospital = hosp;
}

void cRegistro::setMedico(cMedicos med)
{
	this->Medico = med;
}

void cRegistro::setPac(cPacientes pacs)
{
	this->Paciente = pacs;
}

void cRegistro::setProt(cProtesis* prot)
{
	this->P_Ort = prot;
}

void cRegistro::setFechaS(cFechass FS)
{
	this->Fecha_Sol = FS;
}

unsigned int cRegistro::generarFechaEst()
{
	unsigned int var = 0;

	var = rand() % (40 - 20);
	return var;
}

cFechass cRegistro::generarFechaE()
{
    this->Fecha_Entrega = this->Fecha_Sol;

    tm FechaE = {};
    FechaE.tm_mday = this->Fecha_Entrega.dia;
    FechaE.tm_mon = this->Fecha_Entrega.mes-1;
    FechaE.tm_year = this->Fecha_Entrega.anio - 1900;

    time_t tiempoE = mktime(&FechaE); //paso la fecha de entrega a segundos

    time_t diasEs = this->Fecha_EstE * 24 * 60 * 60;// paso los dias estimados a segundos

    tiempoE += diasEs;

    tm NFechaE;
    localtime_s(&NFechaE,&tiempoE);
    this->Fecha_Entrega.dia = NFechaE.tm_mday;
    this->Fecha_Entrega.mes = NFechaE.tm_mon + 1;
    this->Fecha_Entrega.anio = NFechaE.tm_year + 1900;

    return this->Fecha_Entrega;
}

cFechass cRegistro::get_FechaSol()
{
	return this->Fecha_Sol;
}

cPacientes cRegistro::get_pac()
{
    return this->Paciente;
}

cMedicos cRegistro::get_med()
{
    return this->Medico;
}

cHospital cRegistro::get_hosp()
{
    return this->Hospital;
}

string cRegistro::to_stringR() const
{
    stringstream salida;
    salida << "Fecha de Entrega:" << this->Fecha_Entrega.to_stringF()
        << "Cantidad de dias estimados para la entrega:" << this->Fecha_EstE
        << "Fecha de Solicitud de l Protesis: " << this->Fecha_Sol.to_stringF()
        << "Hospital: " << this->Hospital.to_stringH()
        << "Medico: " << this->Medico.to_stringM()
        << "Paciente: " << this->Paciente.to_stringpac()
        << "Pieza Ortopedica:" << this->P_Ort->to_stringP();
    
    return salida.str();
    return string();
}

void cRegistro::imprimirR()
{
    cout << this->to_stringR() << endl;

}

ostream& operator<<(ostream& out, const cRegistro& reg)
{
    
        out << reg.to_stringR();
        return out;

}
