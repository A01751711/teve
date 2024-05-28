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

    std::string toString();

};

#endif