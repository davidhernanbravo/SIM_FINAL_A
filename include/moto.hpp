#ifndef MOTO_HPP
#define MOTO_HPP

#include "vehiculo.hpp"

class Moto : public Vehiculo 
    {
        private:
            int cilindrada;

        public:
            Moto(const string& color, const string& marca, int cilindrada);

            void arrancar() const override; 
            void parar() const override; 
            void repostar() const override;   
    };

#endif