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

void CuatroK::encender()
{
    setEncendido(true);
    activar();
    std::cout << std::endl << "Se ha encendido y activado 4K" << std::endl;
}
void CuatroK::apagar()
{
    setEncendido(false);
    desactivar();
    std::cout << std::endl << "Se ha apagado y desactivado 4K" << std::endl;
}

void CuatroK::set_entrada(std::string ent)
{
    entrada = ent;
    if(cuatroka){
        std::cout << std::endl << "Se ha cambiado la entrada a " + ent + ", y 4K está activado" << std::endl;
    }else{
        std::cout << std::endl << "Se ha cambiado la entrada a " + ent + ", y 4K está desactivado" << std::endl;
    }
}


void CuatroK::subir_v()
{
    volumen = volumen + 2;
}

void CuatroK::bajar_v()
{
    volumen = volumen - 2;
}

std::string CuatroK::toString(){
    return "CuatroK(" + Tele::toString() +
            "," + std::to_string(cuatroka) + ")";

}