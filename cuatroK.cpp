#include "cuatroK.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <iostream>


    
CuatroK::CuatroK(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgad, std::string entrad): Tele{}, cuatroka{"Ninguno"} 
{
    nombre = nombr;
    marca = marc;
    precio = preci;
    tipotv = tipot;
    volumen = volume;
    pulgadas = pulgad;
    entrada = entrad;
}

void CuatroK::setCuatroK(bool k){cuatroka = k;}

bool CuatroK::isCuatroK(){return cuatroka;}

void CuatroK::activar(){setCuatroK(true);}

void CuatroK::desactivar(){setCuatroK(false);}

std::string CuatroK::toString(){
    return "Tele(" + Producto::toString() + Electrodomestico::toString() + Tele::toString() +
            "," + std::to_string(cuatroka) + ")";

}