/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea Adicional 1. Calculadora básica.
 ******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Escriba una operación entre enteros: ";
    int number1, number2;
    char str[1];

    cin >> number1 >> str[0] >> number2;

    cout << number1 << " " << str[0] << " " << number2 << " = ";

    switch (str[0]) {
        case '+':
            cout << number1 + number2;
            break;
        case '-':
            cout << number1 - number2;
            break;
        case '*':
            cout << number1 * number2;
            break;
        case '/':
            cout << number1 / number2;
            break;
        case '%':
            cout << number1 % number2;
            break;
         case '^':
            cout << pow(number1, number2);
            break;
    }
    cout << endl;
}