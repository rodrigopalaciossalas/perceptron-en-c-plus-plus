#include <iostream>
#include "neurona/Perceptron.hpp"
#include "neurona/funcion_activacion/sigmoide.hpp"
#include "red_neuronal/capas/CapaDensa.hpp"

int main() 
{
    // Crear función sigmoide
    sigmoide funcion;

    // Crear capa de entrada: 2 entradas, 3 neuronas, función sigmoide
    capaDensa capa(2, 3, &funcion);

    float datos[2] = {1.0f, 0.0f};

    // Propagar datos
    capa.Forward(datos);

    float* salida = capa.Osalida();
    for (int i = 0; i < 3; ++i)
        std::cout << "Salida " << i << ": " << salida[i] << "\n";

    return 0;
}