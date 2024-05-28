#include "inteligente.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <iostream>

using namespace std;    
    
Inteligente::Inteligente(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgada, std::string entrad): Tele{}, streaming{"Ninguno"} 
{
    nombre = nombr;
    marca = marc;
    precio = preci;
    tipotv = tipot;
    volumen = volume;
    pulgadas = pulgada;
    entrada = entrad;
}

void Inteligente::set_streaming(std::string stream){streaming = stream;}

std::string Inteligente::get_streaming(){return streaming;}

std::string Inteligente::toString(){
    return "Tele(" + Producto::toString() + Electrodomestico::toString() + Tele::toString() +
            "," + streaming + ")";

}