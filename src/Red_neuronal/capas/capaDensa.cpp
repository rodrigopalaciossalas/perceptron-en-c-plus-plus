#include "capaDensa.hpp"

capaDensa::capaDensa(int Nentradas, int Nneuronas, FuncionMatematica* funcion)
    :   Nentradas(Nentradas),Nneuronas(Nneuronas){
        
        neurona = new Perceptron*[Nneuronas];
        salida = new float[Nneuronas];

        for(int i; i < Nneuronas; ++i)
        {
            neurona[i] = new Perceptron(Nentradas,0.1f,funcion);
            
        }
}
capaDensa::~capaDensa()
{
    for (int i = 0; i < Nneuronas; ++i)
        delete neurona[i];
    delete[] neurona;
    delete[] salida;
}

void capaDensa::Forward(float* entradas)
{
    for(int i; i < Nneuronas; ++i)
    {
        salida[i] = neurona[i] -> predecir(entradas); 
    }
}
float* capaDensa::Osalida() const
{
    return salida;
}