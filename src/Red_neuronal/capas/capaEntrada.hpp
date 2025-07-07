#ifndef CAPA_ENTRADA_HPP
#define CAPA_ENTRADA_HPP

#include "CapaBase.hpp"

class CapaEntrada : virtual public CapaBase {
public:
    CapaEntrada(int nEntradas);

    void Forward(float* datos) override;
    ~CapaEntrada();
    void imprimir() const override;

};

#endif