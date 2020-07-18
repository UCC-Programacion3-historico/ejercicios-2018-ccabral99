//
// Created by Camila Cabral on 17/07/2020.
//

#ifndef PROGRAMACION3_COLAPRIORIDAD_H
#define PROGRAMACION3_COLAPRIORIDAD_H

//Agregue un método a la clase cola para insertar un nodo según un valor entero de prioridad.
//El valor 0 es la máxima prioridad. Este método debe colocar el nodo lo mas próximo al frente
//de la cola, pero atrás del ultimo nodo con la misma prioridad.
#include "../Cola/Cola.h"

template <class T>
class ColaPrioridad
{
private:
    Cola<T> *colas;
    int tamanio;
public:
    ColaPrioridad(int cant)
    {
        tamanio = cant;
        colas = new Cola<T>[tamanio];
    }

    void EncolarPrioridad(int prioridad, T dato)
    {
        if (prioridad>=0&&prioridad<tamanio)
            colas[prioridad].encolar(dato);
        else
            throw 252;
    }

    int desencolar()
    {
        for (int i=0; i<tamanio; i++)
        {
            if (!(colas[i].esVacia()))
            {
                return colas[i].desencolar();
            }
            else
                throw 404;
        }
    }


};





#endif //PROGRAMACION3_COLAPRIORIDAD_H