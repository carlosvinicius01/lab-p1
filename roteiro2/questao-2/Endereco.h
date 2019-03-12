#ifndef Endereco_H
#define Endereco_H

#include <string>

class Endereco{
    
    std::string rua, cep, bairro, cidade, estado;
    int numero;

    public:
        virtual ~Endereco();
        Endereco();
        Endereco(std::string r, std::string c, std::string b, std::string ci, std::string e, int n);
        std::string toString();

};

#endif
