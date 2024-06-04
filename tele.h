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
   
    public:
    
    void set_tipotv(std::string tipot);
    std::string get_tipotv();
    void set_volumen(int v);
    int get_volumen();
    void set_pulgadas(double pul);
    double get_pulgadas();
    virtual void set_entrada(std::string ent);
    virtual std::string get_entrada();
    virtual void subir_v();
    virtual void bajar_v();

    std::string toString();
};

#endif