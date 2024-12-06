#ifndef COCHE_HPP
#define COCHE_HPP

#include "vehiculo.hpp"

class Coche : public Vehiculo 
    {
        private:
            int motor;

        public:
            Coche(const string& color, const string& marca, int motor);

            void arrancar() const override;
            void parar() const override;
            void repostar() const override;
                
    };

#endif