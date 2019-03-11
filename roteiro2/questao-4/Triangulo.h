#ifndef Triangulo_H
#define Triangulo_H

#include "FiguraGeometrica.h"
#include <string>

class Triangulo: public FiguraGeometrica{
	private:
		double lado;
	public:
		Triangulo(std::string n, double l);
		double calcularArea();
};

#endif
