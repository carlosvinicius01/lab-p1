#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
  protected:
    std::string nome;
    int matricula;

  public:
    Funcionario();
    virtual double calculaSalario() = 0;
    void setNome(std::string n);
    void setMatricula(int m);
    std::string getNome();
    int getMatricula();
    virtual ~Funcionario();
};

#endif // FUNCIONARIO_H