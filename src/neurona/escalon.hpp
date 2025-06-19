#ifndef ESCALON_HPP
#define ESCALON_HPP

#include "FuncionMatematica.hpp"

class Escalon : public FuncionMatematica {
public:
    float activacion(float variable) const override;
};

#endif
