#include <iostream>
#include "neurona/Perceptron.hpp"
#include "neurona/sigmoide.hpp"
#include "neurona/escalon.hpp"

int main() {
    float entradas[4][2] = 
    {
        {0.0f, 0.0f},
        {0.0f, 1.0f},
        {1.0f, 0.0f},
        {1.0f, 1.0f}
    };
    float salidas[4] = 
        {0.0f, 1.0f, 1.0f, 1.0f};

    sigmoide sigmoide;
    Escalon escalon;

    Perceptron p_sig(2, 0.5f, &sigmoide);
    Perceptron p_esc(2, 0.5f, &escalon);

    for (int i = 0; i < 10; ++i) {
        for (int a = 0; a < 4; ++a) {
            p_sig.entrenar(entradas[a], salidas[a]);
            p_esc.entrenar(entradas[a], salidas[a]);
        }
    }

    std::cout << "Predicciones (Sigmoide):\n";
    for (int i = 0; i < 4; ++i)
        std::cout << entradas[i][0] << " OR " << entradas[i][1]
                  << " = " << p_sig.predecir(entradas[i]) << "\n";

    std::cout << "\nPredicciones (Escalon):\n";
    for (int i = 0; i < 4; ++i)
        std::cout << entradas[i][0] << " OR " << entradas[i][1]
                  << " = " << p_esc.predecir(entradas[i]) << "\n";

    return 0;
}
