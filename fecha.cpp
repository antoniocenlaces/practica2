/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 1. Fechas
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Escriba una fecha con formato de 8 cifras [aaaammdd]: ";
    unsigned fecha;
    cin >> fecha;
    
    if (fecha <= 2147483647) {
        unsigned dia =  fecha % 100 ;
        fecha = fecha / 100;

        unsigned mes= fecha % 100;
        fecha = fecha / 100;

        cout << "La fecha escrita es " << setfill('0') << setw(2) << dia << "/" << 
                setfill('0') << setw(2) << mes << "/" << fecha << endl;
        return 0;
    } else {
        cout << "No puedo convertir el número: " << int(fecha) << endl;
        cout << "Solo es posible convertir números enteros positivos" << endl;
        return 1;
    }
}