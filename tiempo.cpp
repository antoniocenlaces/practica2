/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 4. Tiempo.
 ******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    const unsigned SECONDS_IN_DAY = 86400;
    const unsigned SECONDS_IN_HOUR = 3600;
    const unsigned SECONDS_IN_MINUTE = 60;

    cout << "Duración en segundos: ";
    unsigned duration;
    cin >> duration;
    cout << endl;

    cout << "Este tiempo equivale a " << duration / SECONDS_IN_DAY << " días ";
    duration = duration % SECONDS_IN_DAY;
    cout << duration / SECONDS_IN_HOUR << " horas ";
    duration = duration % SECONDS_IN_HOUR;
    cout << duration / SECONDS_IN_MINUTE << " minutos y " <<
            duration % SECONDS_IN_MINUTE << " segundos";
}