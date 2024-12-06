#include "../include/coche.hpp"

Coche::Coche(const string& color, const string& marca, int motor)
    : Vehiculo(color, marca), motor(motor) {}

void Coche::arrancar() const
    {
        cout << "El coche " << marca << " esta arrancando." << endl;
    }

void Coche::parar() const
    {
        cout << "El coche " << marca << " se ha parado." << endl;
    }

void Coche::repostar() const 
    {
        cout << "El coche " << marca << " esta repostando." << endl;
    }