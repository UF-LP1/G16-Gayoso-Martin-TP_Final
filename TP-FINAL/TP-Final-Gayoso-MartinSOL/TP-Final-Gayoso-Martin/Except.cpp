#include "Except.h"

const char* NoAgregado::what() const throw()
{
    return"No se pudo agregar a la lista";
}

const char* NotFound::what() const throw()
{
    return"No se encontro el elemento buscado";
}
