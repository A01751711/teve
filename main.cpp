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
    
    
    
    
    


    Tele *tvs[5];
    tvs[0] = new Inteligente {"SmarTV", "SAMSUNG", 10000, "Inteligente", 50, 50, "Ninguna"};
    tvs[1] = new TresD {"TresD1", "SAMSUNG", 15000, "3D", 50, 75, "Ninguna"};
    tvs[2] = new CuatroK {"CuatroK1", "SAMSUNG", 20000, "4K", 50, 90, "Ninguna"};
    tvs[3] = new TresD {"TresD2", "LG", 25000, "3D", 50, 70, "Ninguna"};
    tvs[4] = new CuatroK {"CuatroK1", "LG", 30000, "4K", 50, 95, "Ninguna"};

    Tele *actual;

    for (int i = 0 ; i < 5; ++i){
        actual = tvs[i];
        actual->apagar();
    }

    for (int i = 0 ; i < 5; ++i){
        actual = tvs[i];
        actual->encender();
    }

    for (int i = 0 ; i < 5; ++i){
        actual = tvs[i];
        actual->set_entrada("HDMI1");
    }
 
    for (int i = 0 ; i < 5; ++i){
        actual = tvs[i];
        std::cout << std::endl << "Volumen antes:" + std::to_string(actual->get_volumen()) << std::endl;
        actual->subir_v();
        std::cout << "Volumen después:" + std::to_string(actual->get_volumen()) << std::endl;
    }
 
    for (int i = 0 ; i < 5; ++i){
        actual = tvs[i];
        std::cout << std::endl << "Volumen antes:" + std::to_string(actual->get_volumen()) << std::endl;
        actual->bajar_v();
        std::cout << "Volumen después:" + std::to_string(actual->get_volumen()) << std::endl;
    }


}