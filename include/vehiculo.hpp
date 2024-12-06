#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <string>
#include <iostream>

using namespace std;

class Vehiculo 
    {
        protected:
            string color;
            string marca;

        public:
            Vehiculo(const string& color, const string& marca);
            virtual ~Vehiculo() = default;

            virtual void arrancar() const = 0;
            virtual void parar() const = 0;
            virtual void repostar() const = 0;

            string getMarca() const;
    };

#endif