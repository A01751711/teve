#include "electrodomestico.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711

Electrodomestico::Electrodomestico() : Producto{}, encendido{false} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool e) {encendido = e;}
std::string Electrodomestico::dimeFuncionActual(){
    return "La funcion actual es " + funcionActual;
}
void Electrodomestico::cambiaFuncionActual(std::string nf){
    funcionActual = nf;
}
void Electrodomestico::encender(){setEncendido(true);}
void Electrodomestico::apagar(){setEncendido(false);}
std::string Electrodomestico::toString(){
    return "Electrodomestico(" + Producto::toString() + std::to_string(encendido) + ")";
}