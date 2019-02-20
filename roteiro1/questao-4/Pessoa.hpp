#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
#include <vector>

class Pessoa
{
	std::string nome, telefone;
	int idade;
	
	public:
        Pessoa();
		Pessoa(std::string n);
		Pessoa(std::string n, int i, std::string t);

		void setIdade(int i);
		void setNome(std::string n);
		void setTelefone(std::string t);
		int getIdade();
		std::string getNome();
		std::string getTelefone();

};

#endif
