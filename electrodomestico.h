#ifndef ELECTRO_HPP //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define ELECTRO_HPP


#include "producto.h"

#include <string>

class Electrodomestico: public Producto{

private:
    bool encendido {false};
    std::string funcionActual {"Ninguna"};
    
protected:
    Electrodomestico();

public:
    bool isEncendido();
    void setEncendido(bool);
    virtual void encender();
    virtual void apagar();
    virtual std::string dimeFuncionActual();
    virtual void cambiaFuncionActual(std::string);
    std::string toString();
};

#endif