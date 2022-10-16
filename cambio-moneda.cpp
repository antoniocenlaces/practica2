/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 2
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    const double cambio=166.386;

    double eurosTotales;
    cout << "Escriba una cantidad no negativa de dinero en euros: ";
    cin >> eurosTotales;

    unsigned euros= int(eurosTotales);
    
    double centimos = eurosTotales - euros;

    cout << "el valor de euros entrado: " << eurosTotales << " centimos calculado " << centimos << endl;

    unsigned pesetas = int(round(eurosTotales*cambio));
    cout << "Son " << euros << " y " << int(round(centimos * 100)) << " centimos que equivales a " << pesetas << " pesetas." << endl;

    


}