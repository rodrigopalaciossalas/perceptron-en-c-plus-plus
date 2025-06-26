#ifndef CAPAENTRADA_HPP
#define CAPAENTRADA_HPP


#include <iostream>
#include "capaBase.hpp"


class CapaEntrada : public CapaBase{
    
    public:
    void Forward(float* entrada) override;
    float* Osalida() const override;
    CapaEntrada(int Nneuronas);

};

#endif