#ifndef TRESD_H 
#define TRESD_H

#include "producto.h"
#include "electrodomestico.h"
#include "tele.h"
#include <string>

class TresD : public Tele{
    private:
    bool tresde {true};

    public:
    TresD(std::string nombr, std::string marc, double preci, std::string tipot, int volume, double pulgada, std::string entrad);
    void setTresD(bool t);
    bool isTresD();
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