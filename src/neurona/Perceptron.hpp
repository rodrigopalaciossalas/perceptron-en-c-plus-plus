#ifndef PERCEPTRON_HPP
#define PERCEPTRON_HPP

#include <vector>
#include <random>      // pesos aleatorios
#include <iostream>
#include "FuncionMatematica.hpp"

class Perceptron
{
    public:
        float* pesos;    //investigar el uso de la libreria <vector> creo q seria mas facil que con punteros
        float t_aprendisaje;
        float sesgo;
        int Num_entradas;   
    
    void entrenamiento(float* datos_ingresados, float salida_esperada);
    float predecir(float* datos_ingresados);

    void establecer_pesos(float* N_pesos);
    const float obtener_pesos() const;

    Perceptron(int N_entradas, float T_aprendisaje);

    ~Perceptron()
    {
        delete[] pesos;
        if (pesos != nullptr)
            pesos = nullptr;
    }
};     

#endif