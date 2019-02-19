#ifndef DATA_HPP
#define DATA_HPP



class Data
{
    int dia, mes, ano;
    

    public:
        Data(int d, int m, int a);
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        void printData();

        int getDia();
        int getMes();
        int getAno();
}; 

#endif
