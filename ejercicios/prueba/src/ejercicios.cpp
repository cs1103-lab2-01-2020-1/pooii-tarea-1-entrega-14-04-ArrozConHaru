#include "ejercicios.h"

void ejercicio1(){
        cout<<"Ejercicio 5a:"<<endl;
        cout<<"Tests:"<<endl;
        Integer Numero0;
        cout<<Numero0<<endl;
        Integer Numero1(1010);
        cout<<Numero1<<endl;
        Integer Numero2(Numero1);
        cout<<Numero2<<endl;
        // Probamos los operadores:
        Numero0 = Numero1;
        cout<<Numero0<<endl;
        Integer Numero3(0);
        Numero3=Numero0 + 100 + Numero2;
        Numero3+=5;
        cout<<Numero3<<endl;
        Integer Numero4(2);
        cout<<10-Numero4<<endl;
        Numero4-=-10;
        cout<<Numero4<<endl;
        Integer Numero5(3);
        cout<<(Numero4 * Numero5)<<endl;
        Numero5*=Numero4;
        Integer Numero6(2);
        TipoEntero x=3;
        cout<<(Numero6 ^ x)<<endl;
        cout<<(Numero6 / 2)<<endl;
        if((Numero6 < Numero0) == true)
            cout<<"true"<<endl;

        cout<<(TipoEntero)Numero3<<endl;

}

void ejercicio2(){
    cout<<"Revisar Number.h"<<endl;
}


