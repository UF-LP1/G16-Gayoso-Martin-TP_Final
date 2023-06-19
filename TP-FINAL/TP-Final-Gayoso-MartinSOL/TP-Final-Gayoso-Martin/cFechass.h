#pragma once
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

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
	void set_dia(int d);
	void set_mes(int m);
	void set_anio(int a);
	friend std::ostream& operator<<(std::ostream& out, cFechass& fecha);
	friend class cRegistro;
	friend class cPacientes;

	string to_stringF();
	void imprimirF();
	
	//cFechass& operator=(const cFechass& otro);
};

