#ifndef EMPREGADO_HPP
#define EMPREGADO_HPP

#include <string>

class Empregado
{
    std::string nome, sobrenome;
    float salario;

  public:
    Empregado(std::string n, std::string sn, float s);
    void setSalario(float s);
    void setNome(std::string n);
    void setSobrenome(std::string sn);
    float getSalario();
    std::string getNome();
    std::string getSobrenome();
};

#endif
