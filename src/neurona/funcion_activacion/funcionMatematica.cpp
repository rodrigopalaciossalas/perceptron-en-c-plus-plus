#include "FuncionMatematica.hpp"

float FuncionMatematica::expoSercano(float expo) const
{
        const int N = 10; // Número de términos de la serie
    double resultado = 1.0;
    double numerador = 1.0;
    double denominador = 1.0;

    for (int i = 1; i <= N; ++i) {
        numerador *= expo;
        denominador *= i;
        resultado += numerador / denominador;
    }
    return resultado;
}