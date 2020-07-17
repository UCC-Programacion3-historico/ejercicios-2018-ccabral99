#include <iostream>
#include "../Pila/Pila.h"
//Se tiene la siguiente expresión infija:
//
//(6+2)∗5−8/4
//
//Realizar un programa en C++ que me calcule la expresión postfija.
int main() {
//    char text[]="(6+2)∗5−8/4" ;

    // post fija -> 6,2,5,8,4,/,-,+

    cout << "Ejercicio 03/05\n" << endl;
    char arr[50];
    Pila<char> p;
    cout << "Introduzca una palabra" <<endl;
        cin>>arr;
        for (int i = 0; arr[i] != '\0'; i++) {
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                std::cout << arr[i];
            }
            if (arr[i] == ')') {
                while (p.peek() != '(') {
                    std::cout << p.pop();
                }
                p.pop();        //Elimina de la Pila el parentesis izquierdo.
            }
            if ((arr[i] == '+' || arr[i] == '-') && (p.peek() == '+' || p.peek() == '-')) {
                std::cout << p.pop();
                p.push(arr[i]);
            }
            if ((arr[i] == '*' || arr[i] == '/') && (p.peek() == '*' || p.peek() == '/')) {
                std::cout << p.pop();
                p.push(arr[i]);
            }
            if (arr[i] == '(' || arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/' || arr[i] == '^')
                p.push(arr[i]);
        }
    }