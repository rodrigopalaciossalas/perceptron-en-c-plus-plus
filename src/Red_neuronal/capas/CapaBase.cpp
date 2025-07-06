#include "CapaBase.hpp"

CapaBase::CapaBase(int nEntradas, int nNeuronas) 
    : nEntradas(nEntradas), nNeuronas(nNeuronas) {
     
        this->salida = new float[nNeuronas]; 
        for (int i = 0; i < nNeuronas; ++i) {
        this->salida[i] = 0.0f;
    }
}


float* CapaBase::Osalida() const {
    return salida;
}

int CapaBase::GetnEntradas() const {
    return nEntradas;
}

int CapaBase::GetnNeuronas() const {
    return nNeuronas;
}

    CapaBase::~CapaBase(){
        if (this->salida != nullptr) {
        delete[] this->salida;
        this->salida = nullptr; 
    }
}