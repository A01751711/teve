#include "tresD.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <iostream>

using namespace std;  
    
TresD::TresD(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgada, std::string entrad): Tele{}, tresde{"Ninguno"} 
{
    nombre = nombr;
    marca = marc;
    precio = preci;
    tipotv = tipot;
    volumen = volume;
    pulgadas = pulgada;
    entrada = entrad;
}

void TresD::setTresD(bool t){tresde = t;}

bool TresD::isTresD(){return tresde;}

void TresD::activar(){setTresD(true);}

void TresD::desactivar(){setTresD(false);}

std::string TresD::toString(){
    return "Tele(" + Producto::toString() + Electrodomestico::toString() + Tele::toString() +
            "," + std::to_string(tresde) + ")";

}