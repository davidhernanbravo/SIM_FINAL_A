#ifndef TALLER_HPP
#define TALLER_HPP

#include "vehiculo.hpp"

class Taller 
{
    private:
        int maxVehiculos;
        int numVehiculos;
        Vehiculo** vehiculos;

    public:
        Taller(int maxVehiculos);
        ~Taller();
        
        void meter(Vehiculo* vehiculo);
        void arreglarVehiculos();
        
};

#endif