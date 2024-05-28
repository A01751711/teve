#ifndef PRODUCTO_H //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define PRODUCTO_H

#include <string>

class Producto{

    protected:
    Producto();

    Producto(std::string nomb, std::string marc, double p);
    

    public:
    std::string nombre;
    std::string marca;
    double precio;
    void set_nombre(std::string nombre);
    std::string get_nombre();
    void set_precio(double precio);
    double get_precio();
    void set_marca(std::string marc2);
    std::string get_marca();

    std::string toString();
};

#endif