#ifndef TIENDA_H //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define TIENDA_H

#include <string>
#include <vector>
#include "producto.h"

class Tienda{
    public:
    std::string nombre;
    std::vector <Producto> inventario;

    Tienda();
    Tienda(std::string nom);
    std::vector<Producto> mostrarInventario();
    void anadir_producto(Producto np);
    void validarPago(float pago, std::string tarjetac);
    void realizarEntrega(std::string direccion);
    std::string toString();


};

#endif
