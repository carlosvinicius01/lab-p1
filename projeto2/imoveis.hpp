#ifndef IMOVEIS_HPP
#define IMOVEIS_HPP

#include <string>

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
};

class Casa : public Imovel
{
  private:
    int nPavimentos, nQuartos;
    double areaTerreno, areaConstruida;

  public:
    Casa() : nPavimentos(0), nQuartos(0), areaTerreno(0), areaConstruida(0){};

    int getNPavimentos();
    int getNQuartos();
    double getAreaTerreno();
    double getAreaConstruida();

    void setNPavimentos(int nP);
    void setNQuartos(int nQ);
    void setAreaTerreno(double aT);
    void setAreaConstruida(double aC);

    void cadastrar();
    void exibir();
    
};

class Apartamento : public Imovel
{
  private:
    int andar, nQuartos, nVagas;
    double area;
    char posicao;

  public:
    Apartamento() : andar(0), nQuartos(0), nVagas(0), area(0), posicao(0){};

    int getAndar();
    int getNQuartos();
    int getNVagas();
    double getArea();
    char getPosicao();

    void setAndar(int a);
    void setNQuartos(int nQ);
    void setNVagas(int nV);
    void setArea(double a);
    void setPosicao(char p);

    void cadastrar();
    void exibir();
};

class Terreno : public Imovel
{
  private:
    double area;

  public:
    Terreno() :area(0) {};

    double getArea();

    void setArea(double a);

    void cadastrar();
    void exibir();
};


#endif