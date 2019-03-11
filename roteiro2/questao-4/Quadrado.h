#ifndef Quadrado_H
#define Quadrado_H

#include "FiguraGeometrica.h"
#include <string>

class Quadrado : public FiguraGeometrica{
	private:
		double lado;
	public:
		Quadrado(std::string n, double l);
		double calcularArea();
};

#endif
