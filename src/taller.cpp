#include "../include/taller.hpp"

Taller::Taller(int maxVehiculos)
    : maxVehiculos(maxVehiculos), numVehiculos(0) 
            {
            vehiculos = new Vehiculo*[maxVehiculos];
            }

Taller::~Taller()
    {
        for (int i = 0; i < numVehiculos; i++) 
            {
                delete vehiculos[i];
            }

        delete[] vehiculos;
    }

void Taller::meter(Vehiculo* vehiculo) 
    {
        if (numVehiculos < maxVehiculos) 
            {
                vehiculos[numVehiculos++] = vehiculo;

                cout << "Vehiculo " << vehiculo->getMarca() << " metido al taller." << endl;

            } else 
                {
                    cout << endl <<"El taller esta hasta las manos. No se pueden meter mas vehiculos." << endl;
                }
    }

void Taller::arreglarVehiculos() 
    {
        cout << "Arreglando vehiculos.." << endl;
        cout << "Mecanico Loko Trabajando..." << endl;
        cout << "(Bah, toma mate mientras el peon arregla)..." << endl << endl;

        for (int i = 0; i < numVehiculos; i++) 
            {
                vehiculos[i]->arrancar();
            }
    }