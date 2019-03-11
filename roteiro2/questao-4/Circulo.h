#ifndef Circulo_H
#define Circulo_H

#include "FiguraGeometrica.h"
#include <string>

class Circulo : public FiguraGeometrica{
	private:
		double raio;
	public:
		Circulo(std::string n, double r);
		double calcularArea();
};

#endif
