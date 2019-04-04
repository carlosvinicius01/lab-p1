
#include <iostream>
#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"

int main()
{
    Medico *medicos[2];

    medicos[0] = new Cirurgiao();
    medicos[1] = new Oftalmologista();

    medicos[1]->setNome("Braia");
    medicos[1]->setCurso("Especialização em Oftalmologia");

    for (int i = 0; i < 2; i++)
    {
        medicos[i]->especializacao();
    }

    return 0;
}
