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

void Inteligente::encender()
{
    setEncendido(true);
    std::cout << std::endl << "Se ha encendido SmarTV sin streaming activado" << std::endl;
}
void Inteligente::apagar()
{
    setEncendido(false);
    set_streaming("Ninguno");
    std::cout << std::endl << "Se ha apagado SmarTV"<< std::endl;
}

void Inteligente::set_entrada(std::string ent)
{
    entrada = ent;
    streaming = "Ninguno";
    std::cout << std::endl << "Se ha cambiado la entrada a " + ent  + ", y ya no estás en nunguna plataforma de streaming"<< std::endl;
}

void Inteligente::subir_v()
{
    volumen = volumen + 1;
}

void Inteligente::bajar_v()
{
    volumen = volumen - 1;
}

std::string Inteligente::toString(){
    return "SmarTv(" + Tele::toString() +  
            "," + streaming + ")";

}