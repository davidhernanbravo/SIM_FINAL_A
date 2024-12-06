#include "include/taller.hpp"
#include "include/coche.hpp"
#include "include/moto.hpp"

int main() 
    {
        Taller* miTaller = new Taller(3);

        Vehiculo* coche1 = new Coche("Rojo", "Fiat Palio", 1100);
        Vehiculo* coche2 = new Coche("Gris Tormenta", "Golf GTI", 2000);
        Vehiculo* moto1 = new Moto("Negro", "Yamaha", 600);

        cout << "TALLER EL PATA SUCIA" << endl;
        cout << "********************" << endl << endl;

        miTaller->meter(coche1);
        miTaller->meter(coche2);
        miTaller->meter(moto1);

        cout << endl;

        miTaller->arreglarVehiculos();

        cout << endl << "Probando los vehiculos reparados..." << endl << endl;

        coche1->parar();
        coche1->repostar();

        cout << endl;

        coche2->parar();
        coche2->repostar();

        cout << endl;

        moto1->parar();
        moto1->repostar();

        cout << endl << "Llego la Hora Feliz del Loko..." << endl;
        cout << "Si te queres llevar el tutu... Poniendo estaba la Gansa..." << endl;        

        delete miTaller;

        return 0;
    }