#include <iostream>
#include "ListaPuntatori.cpp" 
#include <stdexcept>

int main() {
    Pila<int> pila;
    Coda<int> coda;
    int testaPila = 0;
    int testaCoda = 0;
    //pila
    pila.push(10, testaPila);
    pila.push(20, testaPila);
    pila.push(30, testaPila);

    cout << "Elemento in cima alla pila: " << pila.top() << endl;

    cout << "Pop elemento: " << pila.pop() << endl;
    cout << "Pop elemento: " << pila.pop() << endl;

    cout << "La pila è vuota? " << (pila.isEmpty() ? "Sì" : "No") << endl;

    cout << "Dimensione della pila: " << pila.size() << endl;


    //coda
    coda.enqueue(10, testaCoda);
    coda.enqueue(20, testaCoda);
    coda.enqueue(30, testaCoda);

    cout << "Elemento in testa alla coda: " << coda.front() << endl;

    cout << "Dequeue elemento: " << coda.dequeue() << endl;
    cout << "Dequeue elemento: " << coda.dequeue() << endl;

    cout << "La coda è vuota? " << (coda.isEmpty() ? "Sì" : "No") << endl;

    cout << "Dimensione della coda: " << coda.size() << endl;
    return 0;
}
