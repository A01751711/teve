#ifndef CUATROK_H //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#define CUATROK_H

#include "producto.h"
#include "electrodomestico.h"
#include "tele.h"
#include <string>

class CuatroK : public Tele{
    private:
    bool cuatroka {true};

    public:
    CuatroK(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgad, std::string entrad);
    void setCuatroK(bool k);
    bool isCuatroK();
    void activar();
    void desactivar();
    void encender();
    void apagar();
    void set_entrada(std::string ent);
    void subir_v();
    void bajar_v();

    std::string toString();

};

#endif