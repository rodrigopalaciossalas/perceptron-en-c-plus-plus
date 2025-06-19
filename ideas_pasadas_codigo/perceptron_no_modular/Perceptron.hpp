#ifndef PERCEPTRON_HPP
#define PERCEPTRON_HPP

#include <iostream>
#include "FuncionMatematica.hpp"

class Perceptron : public FuncionMatematica
{
    protected:
        float* pesos; 
        float t_aprendisaje;
        float sesgo;
        int Num_entradas;
    public:
        Perceptron();
        Perceptron(int N_entradas, float T_aprendisaje);


        void entrenamiento(float* datos_ingresados, float salida_esperada);
        float predecir(float* datos_ingresados);

        void establecer_pesos(float* N_pesos);
        const float obtener_pesos() const;

        void setPesos(float* pesos);
        void setTasaAprendisaje(float  t_aprendisaje);
        void setSesgo(float sesgo);
        void setNumEntradas(int Num_entradas);

        float* getPesos() const;
        float getTasaAprendisaje() const;
        float getSesgo() const;
        int getNumEntradas() const;

        virtual ~Perceptron()
        {
            if(pesos != nullptr)
                pesos = nullptr;
        }
};     

#endif