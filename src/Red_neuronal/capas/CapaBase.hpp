#ifndef CAPABASE_HPP
#define CAPABASE_HPP

#include <iostream>

class CapaBase
{
    protected:
        int nEntradas;
        int nNeuronas;
        float * salida;
    public:

        CapaBase(int nEntradas, int nNeuronas);
        
        virtual ~CapaBase();
        virtual void Forward(float* entrada) = 0;
        
        float* Osalida() const; 
        int GetnEntradas() const;
        int GetnNeuronas() const;



};

#endif
