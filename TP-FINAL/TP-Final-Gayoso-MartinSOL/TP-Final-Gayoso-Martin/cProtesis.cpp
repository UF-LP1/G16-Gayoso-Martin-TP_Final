	#include "cProtesis.h"

	cProtesis::cProtesis( cFabricante &fabricante, cFechass fecha, cFechass fecha_s) :Fabricante(fabricante), Fecha_Fabric(fecha), Fecha_solicitada(fecha_s)
	{
		this->Sup_Inf = true;
		this->Der_Izq = true;
	}

	cProtesis::~cProtesis()
	{
	}

	cFechass cProtesis::get_Fecha_Fab()
	{
		return this->Fecha_Fabric;
	}

	cFabricante cProtesis::get_Fabricante()
	{
		return this->Fabricante;
	}

	

	const bool cProtesis::get_Sup_Inf() const
	{
		return this->Sup_Inf;
	}

	const bool cProtesis::get_Der_Izq() const
	{
		return this->Der_Izq;
	}

	cFechass cProtesis::get_FechaSol()
	{
		return this->Fecha_solicitada;
	}

	void cProtesis::set_Fecha_Fab(cFechass FF)
	{
		this->Fecha_Fabric = FF;
	}

	void cProtesis::set_Fecha_Sol(cFechass FS)
	{
		this->Fecha_solicitada = FS;
	}

	void cProtesis::set_Sup_Inf(bool SF)
	{
		this->Sup_Inf = SF;
	}

	void cProtesis::set_Der_Izq(bool DI)
	{
		this->Der_Izq = DI;
	}

	string cProtesis::to_stringP()
	{
		stringstream salida;
		salida << "Fecha de Fabricacion: " << this->Fecha_Fabric.to_stringF() << " ,Fabricante: " << this->Fabricante.to_string()
			<< " ,Fecha de Solicitud" << this->Fecha_solicitada.to_stringF()
		 << " ,Derecho o Izquierdo: " << this->Der_Izq;
		return salida.str();
	}

	void cProtesis::imprimirP()
	{
		cout << this->to_stringP() << endl;
	}

	

	bool cProtesis::operator==( const cProtesis& prots)  
	{
		if (this->Der_Izq == prots.get_Der_Izq() && this->Sup_Inf == prots.get_Sup_Inf())
			return true;

		else
			return false;

	}

	

	ostream& operator<<(ostream& out,  cProtesis& prot)
	{
		out << prot.to_stringP();
		return out;
	}
