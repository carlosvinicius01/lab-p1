#include <iostream>
#include <string>
#include <vector>
#include "Invoice.hpp"

int main()
{
	Invoice in1;
	Invoice *in2 = new Invoice(13, 5, 301, "Calça de mais de trezentos reais");

	in1.setNumero(666);
	in1.setQuantComprada(10);
	in1.setPreco(3);
	in1.setDescricao("Produto que custa 3 reais");

	std::cout << in1.getNumero() << " " << in1.getQuantComprada() << " " << in1.getPreco() << " " << in1.getDescricao() << "\n";
	
	std::cout << in2->getNumero() << " " << in2->getQuantComprada() << " " << in2->getPreco() << " " << in2->getDescricao() << "\n";

	std::cout << in2->getInvoiceAmount() << "\n";
	
	in2->setQuantComprada(-30);
	in2->setPreco(-10000.7);
	std::cout << in2->getNumero() << " " << in2->getQuantComprada() << " " << in2->getPreco() << " " << in2->getDescricao() << "\n";

}
