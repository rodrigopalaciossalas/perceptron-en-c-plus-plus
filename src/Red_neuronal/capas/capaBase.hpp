#ifndef CAPABASE_HPP
#define CAPABASE_HPP

#include <iostream>

class CapaBase
{
 public:
    
    virtual void Forward(float* entrada) = 0;
    virtual float* Osalida() const = 0;
    virtual ~CapaBase(){};

};

#endif


