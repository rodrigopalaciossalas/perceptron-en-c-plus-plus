#include "sigmoide.hpp"

float sigmoide::activacion(float x) const 
{
    return 1.0f / (1.0f + std::exp(-x));
}
