#include "Red_Neuronal.hpp"

void Red_Neuronal::nuevaCapa(CapaBase* capa) {
    capas.push_back(capa);
}

void Red_Neuronal::propagacion(float* entrada) {
    float* datos = entrada;
    for (auto capa : capas) {
        capa->Forward(datos);
        datos = capa->Osalida(); 
    }
}

float* Red_Neuronal::salida() {
    if (!capas.empty()) {
        return capas.back()->Osalida();
    }
    return nullptr;
}

Red_Neuronal::~Red_Neuronal() {
    for (auto capa : capas) {
        delete capa;
    }
}
void Red_Neuronal::imprimir() const {
    std::cout << "=== Estado de la Red ===" <<  std::endl;
    for (size_t i = 0; i < capas.size(); ++i) {
        std::cout << "Capa " << i << ":" << std::endl;
        capas[i]->imprimir();
    }

    std::cout << "-----------------------------------------" << std::endl;
    imprimirResultado();
}

void Red_Neuronal::imprimirResultado() const {
    const CapaBase* salida = capas.back();
    std::cout << std::endl;
    std::cout << "--- resultado final de la red ---" << std::endl;
    const float* out = salida->Osalida();
    for (int i = 0; i < salida->GetnNeuronas(); ++i) {
        std::cout << "       salida[" << i << "] = " << out[i] << std::endl;
    }
}

