#include <iostream>
#include "Red_neuronal/capas/capaDensa.hpp"
#include "neurona/funcion_activacion/sigmoide.hpp"

int main() {
    sigmoide funcion;
    capaDensa capa(2, 3, &funcion); // 2 entradas, 3 neuronas, sigmoide

    float datos[2] = {1.0f, 0.0f};
    capa.Forward(datos);

    float* salida = capa.Osalida();
    for (int i = 0; i < capa.GetnNeuronas(); ++i)
        std::cout << "Neurona " << i << ": " << salida[i] << "\n";

    return 0;
}
