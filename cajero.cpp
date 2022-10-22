/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 3. Cajero.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const unsigned NOTE_10 = 10;
    const unsigned NOTE_20 = 20;
    const unsigned NOTE_50 = 50;
    const unsigned WIDE_10 = 10;
    const unsigned WIDE_9 = 9;
    const unsigned WIDE_5 = 5;

    cout << "Cantidad a retirar en euros [positiva y múltiplo de 10]: ";
    unsigned eurosToDeliver;
    cin >> eurosToDeliver;

    if (eurosToDeliver < 0 || eurosToDeliver % 10 != 0) {
        cout << "Solo son válidas cantidades positivas de euros y múltiplos de 10" << endl;
        return 1;
    } else {
        unsigned notesFifty = eurosToDeliver / NOTE_50;
        eurosToDeliver = eurosToDeliver % NOTE_50;

        unsigned notesTwenty = eurosToDeliver / NOTE_20;
        eurosToDeliver = eurosToDeliver % NOTE_20;

        unsigned notesTen = eurosToDeliver / NOTE_10;
        eurosToDeliver = eurosToDeliver % NOTE_10;

        cout << endl;

        cout << left << setw(WIDE_10) << "Billetes" << "Euros" << endl;
        cout << left << setw(WIDE_10) << "========" << "=====" << endl;

        cout << right << setw(WIDE_5) << notesTen << setw(WIDE_9) << NOTE_10 << endl;
        cout << right << setw(WIDE_5) << notesTwenty << setw(WIDE_9) << NOTE_20 << endl;
        cout << right << setw(WIDE_5) << notesFifty << setw(WIDE_9) << NOTE_50 << endl;
    }
}