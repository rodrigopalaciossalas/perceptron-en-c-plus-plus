#include "capaDensa.hpp"

capaDensa::capaDensa(int nEntradas, int nNeuronas, FuncionMatematica* funcion) 
            : CapaBase(nEntradas, nNeuronas){
                this->neurona = new Perceptron*[nNeuronas];
                
                for(int n = 0; n < nNeuronas; ++n){
                    this->neurona[n] = new Perceptron(nEntradas, 0.1f, funcion);
                }
                this->salida = new float[nNeuronas];
            }

void capaDensa::Forward(float* entradas){
    for(int i = 0; i < nNeuronas; ++i){
        salida[i] = neurona[i] -> predecir(entradas);
    }
}

Perceptron* capaDensa::getNeuronas(int New) const {
            return neurona[New];
        }

capaDensa::~capaDensa(){
    for(int n = 0; n < nNeuronas; ++n){
       delete this->neurona[n];
    }
    delete[] this->neurona; 
}

