#include <iostream>
#include <string.h>

using namespace std;

#include "definiciones.h"


int main()
{

    //Variables
    //------

    int op=-1;
    bool exit=false;

    //------


    //------

    while(exit==false){
        cout << "Bienvanido. ELija la opcion." << endl;
        cout << "     "<<"1) Registrar usuario" << endl;
        cout << "     "<<"2) Agregar vehiculo" << endl;
        cout << "     "<<"3) Ingresar Vaije" << endl;
        cout << "     "<<"4) Viajes Antes de Fecha" << endl;
        cout << "     "<<"5) Eliminar Viajes" << endl;
        cout << "     "<<"6) CAmbiar Bateria Vehiculo" << endl;
        cout << "     "<<"7) Obtener Vehiculos" << endl;
        cout << "     "<<"0) Salir" << endl;

        cin >> op;

        switch(op){
            0:
                exit=true;
                break;
            1:
                break;
            2:

                break;
            3:

                break;
            4:

                break;
            5:

                break;
            6:

                break;
            7:

                break;
            deafult:
                cout<<"El numero que ingreso no es valido. Intente de nuevo."<<endl;
        }

    }

    //------
    
    return 0;
    
}