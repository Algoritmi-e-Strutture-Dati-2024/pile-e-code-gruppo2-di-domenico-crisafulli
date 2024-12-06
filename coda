#include <iostream>
#include "ListaPuntatori.cpp" 
#include <stdexcept>

template <typename T>
class Coda {
private:
    ListaPuntatori<T> lista; 

public:
    // Aggiunge un elemento alla fine della coda
    void enqueue(T elemento, int *testa) {
        lista.inslista(elemento, lista.primolista()); 
            ++(*testa);
    }

    // Rimuove l’elemento in testa alla coda e lo restituisce
    T dequeue(int testa) {
        if (isEmpty()) {
          cout << "Errore: coda vuota, impossibile eseguire dequeue." << endl;
        }
        T primoElemento = lista.leggilista(1); 
        lista.canclista(1); 
        return primoElemento;
        --(*testa);
    }

    // Restituisce l’elemento in testa alla coda senza rimuoverlo
    T front() {
        return lista.leggilista(1); 
    }

    // Verifica se la coda è vuota
    bool isEmpty() {
        return lista.listavuota();
    }

    // Restituisce il numero di elementi nella coda
    int size() {
        return lista.lunghezza();
    }
};
