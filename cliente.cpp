#include "cliente.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <string>
#include <iostream>
#include <string>
#include "producto.h"

Cliente::Cliente(std::string nombre, std::string tarjetaCredito, std::string direccion)
    : nombre(nombre), direccion(direccion), tarjetaCredito(tarjetaCredito) { 
}

void Cliente::comprar(Producto tv) {
    std::cout << std::endl << "Usted esta por comprar una televisión modelo " << tv.get_marca() << " a " << tv.get_precio() << "$" << std::endl;
}

std::string Cliente::getTarjetaCredito() {
    return tarjetaCredito;
}

std::string Cliente::getDireccion() {
    return direccion;
}

std::string Cliente::toString(){
    return "Cliente(" + nombre + "," + direccion + "," + tarjetaCredito + ")";
}