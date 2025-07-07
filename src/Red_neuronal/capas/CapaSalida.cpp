#include "CapaSalida.hpp"

capaSalida::capaSalida(int nEntradas, int nNeuronas, FuncionMatematica* funcion)
    : CapaBase(nEntradas, nNeuronas) {
    
    neurona = new Perceptron*[nNeuronas];
        for (int i = 0; i < nNeuronas; ++i) {
            neurona[i] = new Perceptron(nEntradas, 0.1f, funcion);
        }
    
     salida = new float[nNeuronas];
        for (int i = 0; i < nNeuronas; ++i) {
        salida[i] = 0.0f;
        }

    }

void capaSalida::Forward(float* entradas) {
    for (int i = 0; i < nNeuronas; ++i) {
        salida[i] = neurona[i]->predecir(entradas);
    }
}

capaSalida::~capaSalida() {
    if (neurona) {
        for (int i = 0; i < nNeuronas; ++i) {
            delete neurona[i];
        }
        delete[] neurona;
        neurona = nullptr;
    }
}
void capaSalida::imprimir() const {
    std::cout << "capa salida: " << nNeuronas << " neuronas" << std::endl;
    for (int i = 0; i < nNeuronas; ++i) {
        std::cout << "  neurona " << i << ":" << std::endl;
        std::cout << "    pesos: ";
        for (int j = 0; j < nEntradas; ++j) {
            std::cout << neurona[i]->getPeso(j) << " ";
        }
        std::cout << std::endl;
        std::cout << "   sesgo: " << neurona[i]->getSesgo() << std::endl;
    }
}
