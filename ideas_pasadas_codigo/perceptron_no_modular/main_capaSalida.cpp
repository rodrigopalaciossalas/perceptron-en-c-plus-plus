#include <iostream>
#include "Red_neuronal/capas/CapaSalida.hpp"
#include "neurona/funcion_activacion/sigmoide.hpp"

int main() {
    sigmoide funcion;

    capaSalida capaSalida(3, 1, &funcion); 

    float datosOcultos[3] = {0.8f, 0.4f, 0.6f};
    capaSalida.Forward(datosOcultos);

    float* salida = capaSalida.Osalida();
    for (int i = 0; i < capaSalida.GetnNeuronas(); ++i) {
        std::cout << "Salida " << i << ": " << salida[i] << "\n";
    }

    return 0;
}