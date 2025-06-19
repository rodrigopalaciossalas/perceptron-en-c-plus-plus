#include "valores_datos.hpp"

Valores_datos::Valores_datos(){};


bool Valores_datos::Lectura_datos(const std::string& N_archivo) {
    datos_entrada.clear();
    datos_salida.clear();

    std::ifstream archivo(N_archivo);
    if (!archivo.is_open()) return false;

    std::string linea;
    while (std::getline(archivo, linea)) 
    {
        std::istringstream iss(linea);
        std::vector<float> fila;
        float valor;

        while (iss >> valor) 
            fila.push_back(valor);

        if (fila.size() >= 2) 
        {
            datos_salida.push_back(fila.back());
            fila.pop_back();
            datos_entrada.push_back(fila);
        }
    }
    archivo.close();
    return true;
}

bool Valores_datos::Almacenar_datos(const std::string& N_archivo) 
{
    std::ofstream archivo(N_archivo);
    if (!archivo.is_open()) return false;

    for (size_t i = 0; i < datos_entrada.size(); ++i) 
    {
        for (float valor : datos_entrada[i]) archivo << valor << " ";
        archivo << datos_salida[i] << std::endl;
    }

    archivo.close();
    return true;
}

void Valores_datos::mostrar_datos() const 
{
    for (size_t i = 0; i < datos_entrada.size(); ++i) 
    {
        std::cout << "Entrada " << i + 1 << ": ";
            for (float val : datos_entrada[i])
            {
                std::cout << val << " ";
                std::cout << "| Salida: " << datos_salida[i] << std::endl;
            }
    }
}

const std::vector<std::vector<float>>& Valores_datos::getEntrada() const 
{
    return datos_entrada;
}

const std::vector<float>& Valores_datos::getSalida() const 
{
    return datos_salida;
}
