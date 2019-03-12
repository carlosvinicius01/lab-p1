#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    std::string nome;
    int idade;
    std::string telefone;

  public:
    virtual ~Pessoa();
    Pessoa(std::string n);
    Pessoa(std::string n, int i, std::string t);

    void setNome(std::string n);
    void setIdade(int i);
    void setTelefone(std::string t);

    std::string getNome();
    int getIdade();
    std::string getTelefone();
};

#endif // PESSOA_H