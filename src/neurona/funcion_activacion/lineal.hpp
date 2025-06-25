#ifndef FUNCION_LINEAL_HPP
#define FUNCION_LINEAL_HPP

#include "FuncionMatematica.hpp"

class Lineal : public FuncionMatematica {
public:
    Lineal();                
    virtual ~Lineal();        

    float activacion(float y) const override;
};

#endif
