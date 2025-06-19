#ifndef Valores_datos_hpp
#define Valores_datos_hpp

#include <fstream>   
#include <iostream>
#include <string>   
#include <vector>
#include <sstream>

class Valores_datos 
{
    protected:
        std::vector<std::vector<float>> datos_entrada;
        std::vector<float> datos_salida;
    public:
        Valores_datos(){}
        
        virtual ~Valores_datos();


        virtual const std::vector<std::vector<float>>& getEntrada() const;
        virtual const std::vector<float>& getSalida() const;

        virtual bool Lectura_datos(const std::string& N_archivo);
        virtual bool Almacenar_datos(const std::string& N_archivo);
        virtual void mostrar_datos() const;

};

#endif