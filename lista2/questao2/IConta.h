#ifndef ICONTA_H 
#define ICONTA_H

class IConta
{
    virtual void sacar(double) = 0;
    virtual void depositar(double) = 0;
};

#endif