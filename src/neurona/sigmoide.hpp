#ifndef SIGMOIDE_HPP
#define SIGMOIDE_HPP

#include "FuncionMatematica.hpp"

class sigmoide : public FuncionMatematica
{
    public:
        float activacion(float x) const override;
};

#endif