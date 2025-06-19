#ifndef FUNCION_MATEMATICA_HPP
#define FUNCION_MATEMATICA_HPP

#include <vector>
#include <iostream>

class FuncionMatematica
{
protected:
    float suma;
    double exprecion;

public:
    FuncionMatematica();
    FuncionMatematica(float suma, double exprecion);
    virtual ~FuncionMatematica();

    void setSuma(float suma);
    void setExprecion(double exprecion);

    float GetSuma() const;
    double GetExprecion() const;

    float Funcion_escalon(float suma) const;
    double expAproximado(float x) const;
    double Funcion_sigmoide(float exprecion) const;
    
};

#endif