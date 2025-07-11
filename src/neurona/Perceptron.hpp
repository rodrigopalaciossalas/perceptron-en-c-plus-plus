#ifndef PERCEPTRON_HPP
#define PERCEPTRON_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funcion_activacion/FuncionMatematica.hpp"

class Perceptron
{
    protected:
        float* pesos; 
        float t_aprendisaje;
        float sesgo;
        int Num_entradas;
        FuncionMatematica* funcion_matematica;
    public:
    Perceptron();
    Perceptron(int Num_entradas, float t_aprendisaje, FuncionMatematica* funcion_matematica);
    ~Perceptron();

    float predecir(float* entrada);
    void entrenar(float* entrada, float salida_esperada);
    float getPeso(int i) const;
    float getSesgo() const;
};     

#endif