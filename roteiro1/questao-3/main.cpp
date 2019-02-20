#include <iostream>
#include <string>
#include <vector>
#include "Empregado.hpp"

int main()
{
	Empregado eraDasMaquinas("Joaozinho", "Silva", 1000.0);
	Empregado noCeuTemPao("E", "Morreu", 900);

	std::cout << eraDasMaquinas.getSalario() * 12 << "\n";
	std::cout << noCeuTemPao.getSalario() * 12 << "\n";

	eraDasMaquinas.setSalario(eraDasMaquinas.getSalario()*1.1);
	noCeuTemPao.setSalario(noCeuTemPao.getSalario()*1.1);

	std::cout << eraDasMaquinas.getSalario() * 12 << "\n";
	std::cout << noCeuTemPao.getSalario() * 12 << "\n";

	


}
