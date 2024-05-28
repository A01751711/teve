#include "tele.h" //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include <iostream>
#include <string>
using namespace std;

Tele::Tele() : Electrodomestico{}, volumen{0} {}

void Tele::set_tipotv(std::string tipot){tipotv = tipot;}

std::string Tele::get_tipotv(){return tipotv;};

void Tele::set_volumen(int v){volumen = v;}

int Tele::get_volumen(){return volumen;}

void Tele::set_pulgadas(double pul){pulgadas = pul;}

double Tele::get_pulgadas(){return pulgadas;}

void Tele::set_entrada(std::string ent) {entrada = ent;}

std::string Tele::get_entrada(){return entrada;}

void Tele::subir_v(){volumen = volumen + 1;}

void Tele::bajar_v(){volumen = volumen - 1;}

string Tele::toString(){
    return "Tele(" + Producto::toString() + Electrodomestico::toString() +
            "," + tipotv +
            "," + std::to_string(volumen) +
            "," + std::to_string(pulgadas) + ")";
}