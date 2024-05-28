#ifndef TELE_H //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define TELE_H

#include "producto.h"
#include "electrodomestico.h"
#include <string>

class Tele : public Electrodomestico{
    
    
    protected:

    Tele();
    std::string tipotv;
    int volumen;
    double pulgadas;
    std::string entrada;
   
    
    
    void set_tipotv(std::string tipot);
    std::string get_tipotv();
    void set_volumen(int v);
    int get_volumen();
    void set_pulgadas(double pul);
    double get_pulgadas();
    void set_entrada(std::string ent);
    std::string get_entrada();
    void subir_v();
    void bajar_v();

    std::string toString();
};

#endif