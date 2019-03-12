#ifndef Consultor_H
#define Consultor_H

#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor(std::string m, std::string n, double s);
        virtual ~Consultor();

        double getSalario();
};

#endif
