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

void TresD::encender()
{
    setEncendido(true);
    activar();
    std::cout << std::endl << "Se ha encendido y activado 3D" << std::endl;
}
void TresD::apagar()
{
    setEncendido(false);
    desactivar();
    std::cout << std::endl << "Se ha apagado y desactivado 3D"<< std::endl;
}

void TresD::set_entrada(std::string ent)
{
    entrada = ent;
    if(tresde){
        std::cout << std::endl << "Se ha cambiado la entrada a " + ent + ", y 3D está activado" << std::endl;
    }else{
        std::cout << std::endl << "Se ha cambiado la entrada a " + ent + ", y 3D está desactivado" << std::endl;
    }
}

void TresD::subir_v()
{
    volumen = volumen + 3;
}

void TresD::bajar_v()
{
    volumen = volumen - 3;
}

std::string TresD::toString(){
    return "TresD(" + Tele::toString() +
            "," + std::to_string(tresde) + ")";

}