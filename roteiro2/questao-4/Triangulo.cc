#ifndef Triangulo_CPP
#define Triangulo_CPP

#include "Triangulo.h"

Triangulo::Triangulo(std::string n, double b, double h)
{
	nome = n;	
	base = b;
	altura = h;
}

double Triangulo::calcularArea()
{
	return base*altura/2;
}

#endif
