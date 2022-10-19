/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 2. Cambio Moneda.
 ******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    const double CAMBIO=166.386;

    cout << "Escriba una cantidad no negativa de dinero en euros: ";
    double eurosTotales;
    cin >> eurosTotales;

    if (eurosTotales >= 0) {
        unsigned euros= int(eurosTotales);
        
        double centimos = eurosTotales - euros;

        unsigned pesetas = int(round(eurosTotales*CAMBIO));
        
        cout << "Son " << euros << " Euros y " << int(round(centimos * 100)) <<
                " centimos que equivalen a " << pesetas << " peseta";

        if (pesetas > 1 || pesetas == 0) {
            cout << "s";
        }
        cout << "." << endl;
        return 0;
    } else {
        cout << "Solo se admiten valores mayores que cero" << endl;
        return 1;
    }
}