/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea Adicional 2. Distancia.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << "Introduzca las coordenadas de un punto: ";
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "Introduzca las coordenadas de otro punto: ";
    cin >> x2 >> y2;

    cout << "La distancia entre dos puntos es de " << fixed <<
            setprecision(4) << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
}