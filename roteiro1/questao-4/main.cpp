#include <iostream>
#include "Pessoa.hpp"

int main()
{
	Pessoa p1;
	p1.setNome("Joao");
	p1.setTelefone("8888-8888");
	p1.setIdade(20);
	std::cout << p1.getNome() << " " << p1.getTelefone() << " " << p1.getIdade() << "\n";

	Pessoa *p2 = new Pessoa("Joaozin");

	std::cout << p2->getNome() << "\n";

	delete p2;

	p2 = new Pessoa("Joaozin Retorna", 30, "8888-6666");

	std::cout << p2->getNome() << " " << p2->getTelefone() << " " << p2->getIdade() << "\n";

	delete p2;

}
