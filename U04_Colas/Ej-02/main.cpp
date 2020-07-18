#include <iostream>
#include "../Cola/Cola.h"
#include "../U03_Pilas/Pila/Pila.h"
//Utilizando una pila y una cola, realizar una función que reciba una cadena y devuelva el
//valor lógico verdadero si dicha cadena es un palidromo. No se deben tener en cuenta los
//espacios y signos de puntuación.
//
//Ejemplos de palidromo:
//
//* anita lava la tina
//* la ruta natural
//* la ruta nos aporto otro paso natural
int main() {
    char frase[70];
    Cola<char> C;
    Pila<char> P;
    cout<<"ingrese la frase y (FINALIZAR CON . )"<<endl;
    cin.getline(frase, 70);
    for (int i = 0; frase[i]!= '\0' ; ++i) {
       if( frase!= ' ' && frase!= ',' && frase!= '.'){

           C.encolar(frase);
           P.push(frase);
       }

    }
    while (!pila.esVacia())
    {
        if (pila.pop()!=cola.desencolar())
        {cout<<"No es palindromo";
            return 0;}
    }
    cout<<"Es palindromo";
    return 0;
}
}