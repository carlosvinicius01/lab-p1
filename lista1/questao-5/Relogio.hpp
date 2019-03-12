#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
  private:
    int hora, minuto, segundo;

  public:
    Relogio(int h, int m, int s);
    void setHora(int d);
    void setMinuto(int m);
    void setSegundo(int a);
    int getHora();
    int getMinuto();
    int getSegundo();
    void avancarHorario();
};

#endif // RELOGIO_H