/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 6. Trigonometría. Permite valores negativos.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// 180º=M_PI radianes.

int main() {
    const unsigned RADIANES=3;
    const unsigned FUNCIONES=4;
    cout << "Escriba el valor de un ángulo (grados, minutos y segundos): ";
    int grados;
    int minutos;
    double segundos;
    cin >> grados >> minutos >> segundos;
    
    double radianes = (grados + minutos / 60.0 + segundos / 3600.0) * M_PI / 180;

    if (radianes > 2 * M_PI) {
        unsigned vueltasPorDos = trunc(radianes/M_PI);
        radianes = radianes - vueltasPorDos * M_PI;
    }

    cout << "Valor del ángulo en radianes: " << fixed << setprecision(RADIANES) <<
            radianes << " radianes." << endl;
    double seno = sin(radianes);
    string tangente;
    
    if (abs(seno) == 1) {
        tangente = "Infinito";
    } else {
        tangente = to_string(round(tan(radianes)*10000.0)/10000.0);
        /* Porque to_string() usa "%f que deja la parte decimal con 6 dígitos
         * Voy a substituir los últimos dos dígitos de tangente*/
        tangente[tangente.length() - 1] = ' ';
        tangente[tangente.length() - 2] = ' ';
        /* Esta forma rudimentaria de formatear tangente comete el error de
         * redondeo. Cuando tangente.length() - 2 >= 5 no funciona bien*/
    }

    cout << "sen " << fixed << setprecision(RADIANES) << radianes <<
            " = " << setprecision(FUNCIONES) << sin(radianes) << endl;
    cout << "cos " << fixed << setprecision(RADIANES) << radianes <<
            " = " << setprecision(FUNCIONES) << cos(radianes) << endl;
    cout << "tg " << fixed << setprecision(RADIANES) << radianes <<
            " = " << tangente << endl;
}