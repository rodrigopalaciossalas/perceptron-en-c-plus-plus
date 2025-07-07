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
};






// en el codigo implementar la libreria cmath, vector(solo si es nesesario),random(para los pesos)
//ademas de eso:
/*
    acabar las capas y que se unan en la clase red neuronal para formarla 
    cambiar los datos de Expo aprox a la libreria c++
    terminar la red neuronal 

        si hay tiempo
            hacer para que los datos de los vectores se devuelvan y se ingresen por TXTs
            asi que los datos se ingresen por TXTs y se guarden por TXTs
*/
