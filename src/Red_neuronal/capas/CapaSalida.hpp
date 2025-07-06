#include "CapaBase.hpp"
#include "../../neurona/Perceptron.hpp"

class capaSalida : virtual public CapaBase {

    protected:
        Perceptron** neurona;
    public:
        capaSalida(int nEntradas, int nNueronas, FuncionMatematica *funcion);
        ~capaSalida();
        void Forward(float* entrada) override;

};