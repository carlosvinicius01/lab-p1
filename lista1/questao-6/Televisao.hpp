#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao
{
  private:
    int canal, volume;

  public:
    Televisao();
    int getCanal();
    int getVolume();
    void setarCanal(int c);
    void aumentarVolume();
    void diminuirVolume();
    void aumentarCanal();

    void diminuirCanal();
};

#endif // TELEVISAO_H