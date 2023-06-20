#pragma once
#include <exception>
#include <string>
using namespace std;

class NoAgregado :public exception
{
public:
	const char* what() const throw();
};

class NotFound :public exception
{
public:
	const char* what() const throw();
};

