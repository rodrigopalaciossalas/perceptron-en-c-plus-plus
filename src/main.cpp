#include <iostream>
#include "neurona/funcion_activacion/sigmoide.hpp"
#include "Red_neuronal/Red_Neuronal.hpp"
#include "Red_neuronal/capas/CapaBase.hpp"
#include "Red_neuronal/capas/capaDensa.hpp"
#include "Red_neuronal/capas/capaEntrada.hpp"
#include "Red_neuronal/capas/CapaSalida.hpp"

int main() {
    sigmoide funcion;

    Red_Neuronal red;

    red.nuevaCapa(new CapaEntrada(2)); 
    red.nuevaCapa(new capaDensa(3, 4, &funcion));   
    red.nuevaCapa(new capaDensa(3, 2, &funcion));    
    red.nuevaCapa(new capaSalida(2, 1, &funcion));   

    float datos[2] = {1.0f, 0.0f};

    red.propagacion(datos);

    float* salida = red.salida();

    std::cout << "Salida final: " << salida[0] << "\n";

    return 0;
}
