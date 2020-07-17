//
// Created by Camila Cabral on 17/07/2020.
//

#ifndef PROGRAMACION3_NODO_H
#ifndef NODO_H
#define NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *siguiente;
public:
    T getDato()  {
        return dato;
    }

    void setDato(T d) {
        dato = d;
    }

    Nodo<T> *getSiguiente()  {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }

};


#endif //PROGRAMACION3_NODO_H
