#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico
{
  protected:
    std::string nome, curso;
    double altura, peso;

  public:
    Medico();
    void setNome(std::string n);
    void setCurso(std::string c);
    void setAltura(double a);
    void setPeso(double p);
    std::string getNome();
    std::string getCurso();
    double getAltura();
    double getPeso();
    virtual void especializacao() = 0;
    virtual ~Medico();
};

#endif // MEDICO_H