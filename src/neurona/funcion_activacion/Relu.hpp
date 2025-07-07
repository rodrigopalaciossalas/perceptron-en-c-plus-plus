// ReLU.hpp
#ifndef RELU_HPP
#define RELU_HPP

#include "FuncionMatematica.hpp"

class Relu : public FuncionMatematica {
public:
    float activacion(float x) const override;
};

#endif
