#ifndef CIRCLIST_H
#define CIRCLIST_H
template<class T>
class CircList {
private:
    Nodo<T> *inicio;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool Esvacia();

    int getTam();

    void Insertar(unsigned int pos, T dato);

    void InsertatPrimero(T dato);

    void InsertarUltimo(T dato);

    T getDato(int pos);

    void remover(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();

    void moverUltimo(int pos);

    void moverPri(T dato);

    void print();
};

template<class T>
CircList<T>::CircList() {
    inicio = nullptr;

}

template<class T>
CircList<T>::CircList(const CircList<T> &li) {}

template<class T>
CircList<T>::~CircList() {
    vaciar();
}

template<class T>
bool CircList<T>::Esvacia() {
    return inicio == nullptr;
}

template<class T>
int CircList<T>::getTam() {
    Nodo<T> *aux = inicio;
    int cant = 0;

    while (aux->getSiguiente() != inicio){
        aux = aux->getSiguiente();
        cant++;
    }
    return cant;

}

template<class T>
void CircList<T>::Insertar(unsigned int pos, T dato) {
    Nodo<T>*aux = inicio,*nuevo;
    int posActual=0;
    if(Esvacia()){
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(nuevo);

    }


    if (pos == 0){
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
    }

}
#endif //CIRCLIST_H
