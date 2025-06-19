#include "Perceptron.hpp"


Perceptron::Perceptron() {
    this->Num_entradas = 0;
    this->t_aprendisaje = 0.0f;
    this->sesgo = 0.0f;
    this->pesos = nullptr;
}

Perceptron::Perceptron(int N_entradas, float T_aprendisaje)
{

}

void Perceptron::entrenamiento(float* datos_ingresados, float salida_esperada)
{

}
void Perceptron::establecer_pesos(float* datos_ingresados)
{

}
float Perceptron::predecir(float* datos_ingresados)
{

}

const float Perceptron::obtener_pesos() const
{
    
}
//setters y getters
void Perceptron::setPesos(float* pesos) 
{
    for (int i = 0; i < this->Num_entradas; i++) 
    {
        this->pesos[i] = pesos[i];
    }
}

void Perceptron::setTasaAprendisaje(float t_aprendisaje) 
{
    this->t_aprendisaje = t_aprendisaje;
}

void Perceptron::setSesgo(float sesgo) {
    this->sesgo = sesgo;
}

void Perceptron::setNumEntradas(int Num_entradas) {
    this->Num_entradas = Num_entradas;

    if (this->pesos != nullptr) {
        delete[] this->pesos;
    }

    this->pesos = new float[this->Num_entradas];
    for (int i = 0; i < this->Num_entradas; i++) {
        this->pesos[i] = 0.0f;
    }
}


float* Perceptron::getPesos() const {
    return pesos;
}

float Perceptron::getTasaAprendisaje() const {
    return t_aprendisaje;
}

float Perceptron::getSesgo() const {
    return sesgo;
}

int Perceptron::getNumEntradas() const {
    return Num_entradas;
}