#pragma once
#ifndef _CFECHASS_H
#define _CFECHASS_H 
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

	int get_dia();//USADA
	int get_mes();//USADA
	int get_anio();//USADA
	void set_dia(int d);//USADA
	void set_mes(int m);//USADA
	void set_anio(int a);//USADA
	friend std::ostream& operator<<(std::ostream& out, cFechass& fecha);
	friend class cRegistro;
	friend class cPacientes;

	string to_stringF();//USADA
	void imprimirF();
	
	//cFechass& operator=(const cFechass& otro);
};

#endif