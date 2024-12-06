#include "../include/vehiculo.hpp"

Vehiculo::Vehiculo(const string& color, const string& marca)
    : color(color), marca(marca) {}

string Vehiculo::getMarca() const
    {
        return marca;
    }