#include "capaEntrada.hpp"

void CapaEntrada::Forward(float* datos) {
    for (int i = 0; i < nNeuronas; ++i) {
        salida[i] = datos[i];
    }
}