#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"
using namespace std;

int main()
{
    Circulo c1 = Circulo("Circulo",10);
    Quadrado q1 = Quadrado("Quadrado",3);
    Triangulo t1 = Triangulo("Triangulo",5);
    cout << q1.calcularArea() << endl;
    cout << c1.calcularArea() << endl;
    cout << t1.calcularArea() << endl;
    return 0;
}