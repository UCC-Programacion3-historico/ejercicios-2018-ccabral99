#include <iostream>
#include "../Cola/Cola.h"
//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son
//iguales. Nota: los elementos constitutivos de las colas son caracteres.
int main() {
    Cola<char> c1,c2;
    c1.esVacia();
    c2.esVacia();
    char frase;

    cout<<"ingrese su primera frase: "<<endl;
    for (int i = 0; i<3 ; ++i) {
        cin>>frase
      c1.encolar(frase);
    }

    cout<<"ingrese segunda frase: "<<endl;
    for (int i = 0; i<3 ; ++i) {
        cin>>frase;
        c2.encolar(frase);
    }

    bool igualitos = true;

    for(int i=0; i<3; i++) {
        if (c1.desencolar() != c2.desencolar()) {
            cout << "Las colas son distintas";
            igualitos = false;
            break;
        }
    }
    if(igualitos){
        cout<<"Las pilas son iguales";
    }
}
