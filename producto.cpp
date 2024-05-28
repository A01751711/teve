#include "producto.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <iostream>
#include <string>


Producto::Producto()
{

}

Producto::Producto(std::string nomb, std::string marc, double p)
{
    nombre = nomb;
    marca = marc;
    precio = p;
}
void Producto::set_nombre(std::string nomb)
{
    nombre = nomb;
}
std::string Producto::get_nombre()
{
    return nombre;
}
void Producto::set_precio(double p)
{
    precio = p;

}
double Producto::get_precio()
{
    return precio;
}

void Producto::set_marca(std::string marc2)
{
    marca = marc2;

}
std::string Producto::get_marca()
{
    return marca;
}

std::string Producto::toString()
{
    return "Producto(" + nombre  + "," + marca + "," + std::to_string(precio) + ")";
}