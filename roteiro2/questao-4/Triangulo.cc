#ifndef Triangulo_CPP
#define Triangulo_CPP

#include "Triangulo.h"

Triangulo::Triangulo(std::string n, double l)
{
	nome = n;	
	lado = l;
}

double Triangulo::calcularArea()
{
	return 1.73205080757/4*lado*lado;
}

#endif
