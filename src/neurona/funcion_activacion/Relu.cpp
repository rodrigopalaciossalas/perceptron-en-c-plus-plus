#include "Relu.hpp"

 float Relu::activacion(float x) const {
        return x > 0 ? x : 0;
    }