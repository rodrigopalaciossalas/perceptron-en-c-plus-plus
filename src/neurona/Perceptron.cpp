#include "Perceptron.hpp"


Perceptron::Perceptron()
{
    this->Num_entradas = 0;
    this->t_aprendisaje = 0.0f;
    this->sesgo = 0.0f;
    this->pesos = nullptr;
    this->funcion_matematica = nullptr;
}

Perceptron::Perceptron(int Num_entradas, float t_aprendisaje, FuncionMatematica* funcion_matematica)
{
    this -> Num_entradas = Num_entradas;
    this -> t_aprendisaje = t_aprendisaje;
    this -> sesgo = 0.0f;
    this -> funcion_matematica = funcion_matematica;

    pesos = new float[Num_entradas];
        for(int i = 0; i < Num_entradas; i++)
            {
                pesos[i] = 0.0f;
            }
}
Perceptron::~Perceptron()
{
    if (pesos != nullptr) 
    {
        delete[] pesos;
        pesos = nullptr;
    }
}

float Perceptron::predecir(float* datos_ingresados)
{
    float suma = 0.0f;

    for (int i = 0; i < Num_entradas; i++)
    {
        suma += datos_ingresados[i] * pesos[i];
    }

    suma += sesgo;

    return funcion_matematica->activacion(suma);
}

void Perceptron::entrenar(float* datos_ingresados, float salida_esperada)
{
    float salida_obtenida = predecir(datos_ingresados);
    float error = salida_esperada - salida_obtenida;

    // pesos
    for (int i = 0; i < Num_entradas; i++)
    {
        pesos[i] += t_aprendisaje * error * datos_ingresados[i];
    }

    // sesgo
    sesgo += t_aprendisaje * error;
}