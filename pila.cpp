#include <iostream>
#include "ListaPuntatori.cpp"
#include <stdexcept>

template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista; 

public:
    // Aggiunge un elemento alla pila
    void push(T elemento) {
        lista.inslista(elemento, 1); 
    }

    // Rimuove l'elemento in cima alla pila e lo restituisce
    T pop() {
        if (isEmpty()) {
            cout << "Errore: pila vuota, impossibile eseguire pop." << endl;
        }
        T topElem = lista.leggilista(1);
        lista.canclista(1); // Rimuove l'elemento in testa
        return topElem;
    }

    // Restituisce l'elemento in cima alla pila senza rimuoverlo
    T top() {
      return lista.leggilista(1);
    }


    //Restituisce true se la pila è vuota, altrimenti false
    bool isEmpty(){
      return lista.listavuota();
    }

    //Restituisce il numero di elementi nella pila
    int size(){
      return lista.lunghezza();
    }
};
