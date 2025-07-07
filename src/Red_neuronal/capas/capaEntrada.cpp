#include "capaEntrada.hpp"


CapaEntrada::CapaEntrada(int nEntradas)
    : CapaBase(nEntradas, nEntradas)
{
    salida = new float[nEntradas];
    for (int i = 0; i < nEntradas; ++i) {
        salida[i] = 0.0f;
    }
}

void CapaEntrada::Forward(float* datos) {
    for (int i = 0; i < nNeuronas; ++i) {
        salida[i] = datos[i];
    }
}

CapaEntrada::~CapaEntrada() {
    if (salida) {
        delete[] salida;
        salida = nullptr;
    }

}
void CapaEntrada::imprimir() const {
    std::cout << "Capa Entrada: " << nNeuronas << " entradas\n";
}
