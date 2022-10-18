/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Antonio José González Almela
 * 
 * Resumen: Tarea Adicional 3. Aproximación de PI.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

bool checkPoint(double x1, double y1) {
    // cout << x1 << " " << y1 << endl;
        if (sqrt(pow(0.5 - x1, 2) + pow(0.5 - y1, 2)) < 0.5) {
            return true;
        } else {
            return false;
        }

    }

int main() {
    srand(time(NULL));
    const unsigned RANGE = 100;
    cout << "Dime el número de iteraciones a utilizar en el método de Montecarlo: ";
    unsigned n;
    cin >> n;
 
    unsigned pointsIn = 0;

    for (int i = 0; i < n; i++) {
        if (checkPoint((rand() % RANGE)/double(RANGE), (rand() % RANGE)/double(RANGE))) {
            pointsIn++;
        }

    }
    cout << "Numero aciertos " << pointsIn << endl;
    cout << "Aproximación a PI: " << double(pointsIn)/n*4;
}