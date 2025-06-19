#include "escalon.hpp"

float Escalon::activacion(float variable) const {
    return (variable >= 0) ? 1.0f : 0.0f;
}
