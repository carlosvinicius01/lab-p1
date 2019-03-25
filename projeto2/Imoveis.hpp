#ifndef IMOVEIS_HPP
#define IMOVEIS_HPP

#include <string>
#include <fstream>

class Imovel
{
  protected:
    std::string tituloAnuncio;
    std::string rua;
    std::string bairro;
    std::string cep;
    std::string cidade;
    int numero;
    double valor;
    char disponibilidade; // 'v' - vender / 'a' - alugar

  public:
    Imovel() : tituloAnuncio(""), rua(""), bairro(""), cep(""), cidade(""), numero(0), valor(0), disponibilidade(0) {}

    std::string getTituloAnuncio();
    std::string getRua();
    std::string getBairro();
    std::string getCep();
    std::string getCidade();
    int getNumero();
    double getValor();
    char getDisponibilidade();

    void setTituloAnuncio(std::string t);
    void setRua(std::string r);
    void setBairro(std::string b);
    void setCep(std::string c);
    void setCidade(std::string cid);
    void setNumero(int num);
    void setValor(double val);
    void setDisponibilidade(char disp);

    virtual void cadastrar() = 0;
    virtual void exibir() = 0;
	virtual void write(std::ostream& f) = 0;
	virtual void read(std::istream& f) = 0;
	
	void readEndereco(std::istream& f);	
};

#endif
