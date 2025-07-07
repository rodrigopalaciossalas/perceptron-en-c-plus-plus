// Tanh.hpp
#ifndef TANH_HPP
#define TANH_HPP

#include "FuncionMatematica.hpp"

class Tanh : public FuncionMatematica {
public:
    float activacion(float x) const override;
};

#endif
