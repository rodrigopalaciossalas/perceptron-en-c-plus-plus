#ifndef CAPADENSA_HPP
#define CAPADENSA_HPP

#include "../../neurona/Perceptron.hpp"
#include "CapaBase.hpp"

class capaDensa : virtual public CapaBase
{
    protected:
        Perceptron **neurona;
    public:
        capaDensa(int nEntradas, int nNeuronas, FuncionMatematica* funcion);
        
        void Forward(float* entradas) override;
        ~capaDensa() override;

        Perceptron* getNeuronas(int New) const;

};
#endif
