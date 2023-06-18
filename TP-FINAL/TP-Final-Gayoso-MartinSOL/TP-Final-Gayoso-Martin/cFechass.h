#pragma once

#include <iostream>

class cFechass
{
	int dia;
	int mes;
	int anio;

public:
	cFechass(int _dia, int _mes, int _anio);
	~cFechass();

	int get_dia();
	int get_mes();
	int get_anio();
	friend std::ostream& operator<<(std::ostream& out, cFechass& fecha);
	friend class cRegistro;
	friend class cPacientes;

	
	//cFechass& operator=(const cFechass& otro);
};

