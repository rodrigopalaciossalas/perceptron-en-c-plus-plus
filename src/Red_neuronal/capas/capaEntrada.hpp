#ifndef CAPA_ENTRADA_HPP
#define CAPA_ENTRADA_HPP

#include "CapaBase.hpp"

class CapaEntrada : virtual public CapaBase {
public:
    CapaEntrada(int nEntradas)
        : CapaBase(nEntradas, nEntradas) {}

    void Forward(float* datos) override;
};

#endif