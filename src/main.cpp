#include <iostream>
#include "includes.hpp"

int main() {
    Red_Neuronal red;

    red.nuevaCapa(new CapaEntrada(8));

    red.nuevaCapa(new capaDensa(8, 4, &Sigmoide));
    red.nuevaCapa(new capaDensa(4, 2, &escalon));
    red.nuevaCapa(new capaDensa(2, 5, &relu));
    red.nuevaCapa(new capaSalida(5, 1, &tanH));

    float datos[8] = {1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f};

    red.propagacion(datos);
    red.imprimir();

    return 0;
}

/*
    NOMBRE DE LAS FUNCIONES DE ACTIVACION
        sigmoide Sigmoide;
        Escalon escalon;
        Lineal lineal;
        Tanh tanH;
        Relu relu;

*/