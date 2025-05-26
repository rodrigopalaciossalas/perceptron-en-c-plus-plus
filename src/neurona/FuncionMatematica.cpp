#include "FuncionMatematica.hpp"


float FuncionMatematica::Funcion_escalon(float suma)
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