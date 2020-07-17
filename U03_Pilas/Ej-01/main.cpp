#include <iostream>
#include "../Pila/Pila.h"
//Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma
//palabra invertida.
int main() {
    Pila<char> p;
    p.esVacia();
    char palabra[100];

    cout<<"Ingrese su palabra: "<<endl;
    cin>> palabra;
    for (int i = 0; palabra[i] != 0 ; i++) {
        p.push(cant[i]);
    }
   while (!p.esVacia()){
       cout<<"palabra al reves : "<<endl;
       cout<<p.pop();
   }

}