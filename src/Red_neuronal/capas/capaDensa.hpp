#ifndef CAPADENSA_HPP
#define CAPADENSA_HPP

#include "../../neurona/Perceptron.hpp"
#include "../../neurona/funcion_activacion/FuncionMatematica.hpp"
#include "capaBase.hpp"

class capaDensa : public CapaBase
{
    protected:
        Perceptron **neurona;
        float * salida;
        int Nneuronas;
        int Nentradas;
    public:
        //crear una funcion matematica que retorne los datos para no romper la estructura en el caso de la capa de entrada
        capaDensa(int Nentradas, int Nneuronas, FuncionMatematica* funcion);//comprobar si le podemos quitar la funcion matematica sin romper el orden
        ~capaDensa();
        void Forward(float* entradas) override;
        float* Osalida() const override;
        
};
#endif
