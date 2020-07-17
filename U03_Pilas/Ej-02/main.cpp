#include <iostream>
#include "../Pila/Pila.h"
//Escriba una función que indique si dos pilas son iguales. Se entiende que dos pilas son
//iguales cuando sus elementos son idénticos y aparecen en el mismo orden.
int main() {
    Pila<int> p1,p2;
    int dato,n;

    cout<<"Ingrese el tamaño de las pilas: ";
    cin>>n;

    cout<<"Agregue "<<n<<" elementos a la pila 1: "<<endl;
    for(int i=0; i<n ; i++){
        cin>>dato;
        p1.push(dato);
    }

    cout<<"Agregue "<<n<<" elementos a la pila 2: "<<endl;
    for(int i=0; i<n; i++){
        cin>>dato;
        p2.push(dato);
    }

    bool band = true;

    while(!p1.esVacia() && band){
        band = p1.pop() == p2.pop();
    }

    if(band){
        cout<<"Las pilas son iguales";
    }
    else{
        cout<<"Las pilas son distintas";
    }


}