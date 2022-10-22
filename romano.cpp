/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea 5. Romano.
 ******************************************************************************/
#include <iostream>
using namespace std;

// Para los números entre [1-3] y [5-8] un bucle for que coloca las "I".
void setI(unsigned number, unsigned range) {
     for (unsigned i = 0; i < number - range; i++) {
                    cout << "I";
            }
    return;
}

int main() {
    cout << " Escriba un número entero entre 1 y 10: ";
    unsigned number;
    cin >> number;
    while (number < 1 || number > 10) {
        cout << "Por favor escriba un número entre 1 y 10: ";
        cin >> number;
    }

    cout << endl << number << " = ";

    if (number > 9) {
        cout << "X";
    } else if (number > 8) {
            cout << "IX";
    } else if (number > 4) {
            cout << "V";
            setI(number, 5);
    } else if (number > 3) {
        cout << "IV";
    } else {
        setI(number, 0);
    }
    cout << endl;
}