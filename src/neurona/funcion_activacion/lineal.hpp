#ifndef FUNCION_LINEAL_HPP
#define FUNCION_LINEAL_HPP

#include "FuncionMatematica.hpp"

class Lineal : public FuncionMatematica {
public:      

    float activacion(float y) const override;
};

#endif
