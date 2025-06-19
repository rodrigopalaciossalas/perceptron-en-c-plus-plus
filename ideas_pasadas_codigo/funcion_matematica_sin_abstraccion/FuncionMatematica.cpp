#include "FuncionMatematica.hpp"

// Constructor por defecto
FuncionMatematica::FuncionMatematica()
{
    this->exprecion = 0.0f;
    this->suma = 0;
}

// Destructor
FuncionMatematica::~FuncionMatematica() {}

// Constructor con parámetros
FuncionMatematica::FuncionMatematica(float suma, double exprecion)
{
    this->exprecion = exprecion;
    this->suma = suma;
}

// Getters
double FuncionMatematica::GetExprecion() const
{
    return exprecion;
}

float FuncionMatematica::GetSuma() const 
{
    return suma;
}

// Setters
void FuncionMatematica::setExprecion(double exprecion)
{
    this->exprecion = exprecion;
}

void FuncionMatematica::setSuma(float suma)
{
    this->suma = suma;
}

// Función escalón
float FuncionMatematica::Funcion_escalon(float suma) const
{
    if (suma >= 0)
    {
        return 1.0f;
    }
    else 
    {
        return 0.0f;
    }
}

// Aproximación de e^x
double FuncionMatematica::expAproximado(float x) const {
    const int N = 10; // Número de términos de la serie
    double resultado = 1.0;
    double numerador = 1.0;
    double denominador = 1.0;

    for (int i = 1; i <= N; ++i) {
        numerador *= x;
        denominador *= i;
        resultado += numerador / denominador;
    }
    return resultado;
}

// Función sigmoide
double FuncionMatematica::Funcion_sigmoide(float exprecion) const
{
    return 1.0 / (1.0 + expAproximado(-exprecion));
}


//en el caso que el profe no nos deje usar c++ debes intentar formar esta funcion matematica
/*
no nos dejo usar cmath aproximadamente la funcio sigmoide debe salir algo asi
podria ser util usar la deribada se sigmoide preguntarle al profe sus usos
f(x)= 1/ 1+e^−x
*/
