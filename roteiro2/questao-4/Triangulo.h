#ifndef Triangulo_H
#define Triangulo_H

#include "FiguraGeometrica.h"
#include <string>

class Triangulo: public FiguraGeometrica{
	private:
		double base, altura;
	public:
		Triangulo(std::string n, double b, double h);
		double calcularArea();
};

#endif
