#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

int main()
{
	Circulo	*c1 = new Circulo("Joaozin", 2);
	Circulo *c2 = new Circulo("MARIAa", 3);

	std::cout << c1->calcularArea() << "\n";
	std::cout << c2->calcularArea() << "\n";

	Quadrado *q1 = new Quadrado("Adilson", 15);
	Triangulo *t1 = new Triangulo("Illuminati", 3);

	std::cout << q1->calcularArea() << "\n";
	std::cout << t1->calcularArea() << "\n";
	
}
