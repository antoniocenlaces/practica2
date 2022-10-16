/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 1
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    unsigned fecha;

    cout << "Escriba una fecha con formato de 8 cifras [aaaammdd]: " << endl;
    cin >> fecha;
    unsigned dia, mes, year;
    dia =  fecha % 100 ;
    // cout << "El dia es: " << dia << endl;
    fecha = fecha / 100;
    // cout << "La fecha despues de restar dia: " << fecha << endl;
    mes= fecha % 100;
    // cout << "El mes es: " << mes << endl;
    fecha = fecha / 100;
    // cout << "La fecha despues de restar mes: " << fecha << endl;
    year = fecha;
    cout << "El year es: " << year << endl;

    cout << "La fecha escrita es " << setfill('0') << setw(2) << dia << "/" << setfill('0') << setw(2) << mes << "/" << year << endl;
}