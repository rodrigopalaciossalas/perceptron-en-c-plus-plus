#include <vector>
#include "capas/CapaBase.hpp"

class Red_Neuronal{

    private:
        std::vector<CapaBase*> capas;
    public:
        Red_Neuronal() {}
        
        void nuevaCapa(CapaBase* capa);
        
        void propagacion(float* entrada);

        float* salida();

        ~Red_Neuronal();
        void imprimir() const;
        void imprimirResultado() const;
};





