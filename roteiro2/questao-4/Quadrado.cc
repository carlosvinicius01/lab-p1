#ifndef Quadrado_CPP
#define Quadrado_CPP

#include "Quadrado.h"

Quadrado::Quadrado(std::string n, double l)
{
	nome = n;	
	lado = l;
}

double Quadrado::calcularArea()
{
	return lado * lado;
}

#endif
