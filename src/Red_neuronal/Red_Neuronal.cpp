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