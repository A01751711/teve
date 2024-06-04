#include <iostream> //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include "cliente.h"
#include "tienda.h"
#include "producto.h"
#include "electrodomestico.h"
#include "tele.h"
#include "cuatroK.h"
#include "inteligente.h"
#include "tresD.h"
#include <vector>


int main() {
    
    Inteligente tv1{"SmarTV", "SAMSUNG", 10000, "Inteligente", 50, 50, "Ninguna"};
    TresD tv2{"TresD1", "SAMSUNG", 15000, "3D", 50, 75, "Ninguna"};
    CuatroK tv3{"CuatroK1", "SAMSUNG", 20000, "4K", 50, 90, "Ninguna"};
    TresD tv4{"TresD2", "LG", 25000, "3D", 50, 70, "Ninguna"};
    CuatroK tv5{"CuatroK1", "LG", 30000, "4K", 50, 95, "Ninguna"};


    std::vector<Tele> tvs;
    tvs.push_back(tv1);
    tvs.push_back(tv2);
    tvs.push_back(tv3);
    tvs.push_back(tv4);
    tvs.push_back(tv5);

    for (size_t i = 0 ; i < tvs.size(); ++i){
        tvs[i].apagar();
    }

    for (size_t i = 0 ; i < tvs.size(); ++i){
        tvs[i].encender();
    }

    for (size_t i = 0 ; i < tvs.size(); ++i){
        tvs[i].set_entrada("HDMI1");
    }
 
    for (size_t i = 0 ; i < tvs.size(); ++i){
        tvs[i].subir_v();
        std::cout << std::endl << std::to_string(tvs[i].get_volumen()) << std::endl;
    }
 
    for (size_t i = 0 ; i < tvs.size(); ++i){
        std::cout << std::endl << "Volumen antes:" + std::to_string(tvs[i].get_volumen()) << std::endl;
        tvs[i].bajar_v();
        std::cout << "Volumen después:" + std::to_string(tvs[i].get_volumen()) << std::endl;
    }


}