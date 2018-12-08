#ifndef IMOVEIS_HPP
#define IMOVEIS_HPP

#include <string>

class Imovel
{
  protected:
    std::string rua;
    std::string bairro;
    std::string cep;
    std::string cidade;
    int numero;
    double valor;
    char disponibilidade; // 'v' - vender / 'a' - alugar

  public:
    Imovel() : rua(""), bairro(""), cep(""), cidade(""), numero(0), valor(0), disponibilidade(0) {}

    std::string getRua();
    std::string getBairro();
    std::string getCep();
    std::string getCidade();
    int getNumero();
    double getValor();
    char getDisponibilidade();

    void setRua(std::string r);
    void setBairro(std::string b);
    void setCep(std::string c);
    void setCidade(std::string cid);
    void setNumero(int num);
    void setValor(double val);
    void setDisponibilidade(char disp);
};

class Casa : public Imovel
{
    
};

#endif