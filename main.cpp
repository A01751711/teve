#include <iostream> //César Pascual De la Torre A01751521 Karol Alexis Alvarado Davila A01751711
#include "cliente.h"
#include "tienda.h"
#include "producto.h"
#include "electrodomestico.h"
#include "tele.h"
#include "cuatroK.h"
#include "inteligente.h"
#include "tresD.h"


int main() {
    Cliente cliente("César", "4189 xxxx xxxx xxxx", "Calle Gladiolas, 239");

    Tienda liverpool{"Liverpool"};
    Tienda sears{"Sears"};
    Tienda palacio{"Palacio de Hierro"};

    Inteligente tv1{"Televisión SmarTV", "Samsung", 25000, "inteligente", 50, 75, "HDMI1"};
    CuatroK tv2{"Televisión 4K", "LG", 30000, "4K", 4, 100, "HDMI2"};
    TresD tv3{"Televisión 3D", "", 30000, "4K", 50, 100, "HDMI3"};
    

    liverpool.anadir_producto(tv1);
    liverpool.anadir_producto(tv2);
    liverpool.anadir_producto(tv3);
    sears.anadir_producto(tv1);
    sears.anadir_producto(tv2);
    sears.anadir_producto(tv3);
    palacio.anadir_producto(tv1);
    palacio.anadir_producto(tv2);
    palacio.anadir_producto(tv3);

  

    liverpool.toString();
    sears.toString();
    palacio.toString();



    tv2.encender();


    tv1.toString();    
    tv2.toString();

    tv1.encender();
    tv2.apagar();

    tv1.set_entrada("HDMI2");
    tv2.set_entrada("HDMI1");

    tv1.subir_v();
    tv2.bajar_v();

    tv1.toString();    
    tv2.toString();

}