#ifndef INTELIGENTE_H //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define INTELIGENTE_H

#include "producto.h"
#include "electrodomestico.h"
#include "tele.h"
#include <string>

class Inteligente : public Tele{
    private:
    std::string streaming {"Ninguno"};

    public:
    Inteligente(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgada, std::string entrad);
    void set_streaming(std::string stream);
    std::string get_streaming();

    std::string toString();

};

#endif