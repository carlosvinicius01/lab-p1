#ifndef CadastroDePessoas_H
#define CadastroDePessoas_H

#include <vector>
#include "Pessoa.h"

class CadastroDePessoas{
    std::vector<Pessoa*> pessoa;
    public:
        CadastroDePessoas();
        virtual ~CadastroDePessoas();
        void cadastrarPessoa(Pessoa *p);
        std::vector<Pessoa *> getPessoa();
};

#endif
