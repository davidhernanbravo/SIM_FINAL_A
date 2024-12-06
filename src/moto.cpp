#include "../include/moto.hpp"

Moto::Moto(const string& color, const string& marca, int cilindrada)
            : Vehiculo(color, marca), cilindrada(cilindrada) {}

void Moto::arrancar() const 
    {
        cout << "La moto " << marca << " esta arrancando." << endl;
    }

void Moto::parar() const 
    {
        cout << "La moto " << marca << " se ha parado." << endl;
    }

void Moto::repostar() const 
    {
        cout << "La moto " << marca << " esta repostando." << endl;
    }