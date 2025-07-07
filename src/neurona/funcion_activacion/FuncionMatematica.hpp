#ifndef FUNCION_MATEMATICA_HPP
#define FUNCION_MATEMATICA_HPP

#include <vector>
#include <iostream>
#include <cmath>

class FuncionMatematica  // clase virtual para heredas a mas funciones matematicas
{

public:
    virtual float activacion(float variable) const = 0;
    virtual ~FuncionMatematica() {}

};
#endif
