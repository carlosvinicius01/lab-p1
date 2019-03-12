#ifndef Funcionario_H
#define Funcionario_H

#include <string>

class Funcionario
{
  protected:
    std::string matricula, nome;
    double salario;

    public:
    Funcionario();
    Funcionario(std::string m, std::string n, double s);
    virtual ~Funcionario();
    std::string getMatricula();
    std::string getNome();
    double getSalario();

    void setMatricula(std::string m);
    void setNome(std::string n);
    void setSalario(double s);

};

#endif
