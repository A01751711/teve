#include "tienda.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include "producto.h"
#include <iostream>
#include <string>
#include <vector>

Tienda::Tienda() {
}

Tienda::Tienda(std::string nom) {
    nombre = nom;
}

std::vector<Producto> Tienda::mostrarInventario() 
{
    for(int i = 0; i < inventario.size(); i++)
    {
        std::cout << std::endl << i << ": ";
        std::cout << inventario[i].toString() << std::endl;
        std::cout << std::endl;
    }


}

void Tienda::anadir_producto(Producto np){
    inventario.push_back(np);   
}

void Tienda::validarPago(float pago, std::string tarjetac) {
    std::cout << std::endl << "Pago total de " << pago << "$ con la tarjeta: " << tarjetac << std::endl;
}

void Tienda::realizarEntrega(std::string direccion) {
    std::cout << "Su compra se entregará pronto a su dirección: " << direccion << ". ¡Muchas gracias por su compra!" << std::endl << std::endl;
}

std::string Tienda::toString(){
    return "Tienda(" + nombre + ")";
}