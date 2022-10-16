/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 6. Trigonometría.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 180º=M_PI radianes.

int main() {
    const unsigned RADIANES=3;
    const unsigned FUNCIONES=4;
    cout << "Escriba el valor de un ángulo (grados, minutos y segundos): ";
    unsigned grados;
    unsigned minutos;
    double segundos;
    cin >> grados >> minutos >> segundos;
    
    double radianes = (grados + minutos / 60.0 + segundos / 3600.0) * M_PI / 180;

    if (radianes > 2 * M_PI) {
        unsigned vueltasPorDos = trunc(radianes/M_PI);
        radianes = radianes - vueltasPorDos * M_PI;
    }

    cout << "Valor del ángulo en radianes: " << fixed << setprecision(RADIANES) <<
            radianes << " radianes." << endl;
    cout << "sen " << fixed << setprecision(RADIANES) << radianes <<
            " = " << setprecision(FUNCIONES) << sin(radianes) << endl;
    cout << "cos " << fixed << setprecision(RADIANES) << radianes <<
            " = " << setprecision(FUNCIONES) << cos(radianes) << endl;
    cout << "tg " << fixed << setprecision(RADIANES) << radianes <<
            " = " << setprecision(FUNCIONES) << tan(radianes) << endl;
}