#pragma once
#ifndef _ESTABLECIMIENTO_H
#define _ESTABLECIMIENTO_H
#include <string>
#include<iostream>
using namespace std;

class cEstablecimiento
{
public:
	cEstablecimiento(string _Nombre, string _Direc);
	~cEstablecimiento();
	
	string get_Nombre();//USADA
	string get_Direc();//USADA



protected:
	const string Nombre;
	const string Direc;



};

#endif