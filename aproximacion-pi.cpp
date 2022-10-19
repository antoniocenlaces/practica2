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

bool checkPoint(double x1, double y1, unsigned RANGE) {
    // cout << x1 << " " << y1 << endl;
        if (sqrt(x1*x1 + y1*y1) <= (RAND_MAX/RANGE)) {
            return true;
        } else {
            return false;
        }
    }

int main() {
    srand(time(NULL));
    const double RANGE = 100000;
    cout << "RAND_MAX: " << RAND_MAX << endl;
    cout << "RAND_MAX/RANGE " << RAND_MAX/RANGE << endl;
    cout << "Dime el número dteraciones a utilizar en el método de Montecarlo: ";
    unsigned n;
    cin >> n;
 
    unsigned pointsIn = 0;

    for (int i = 0; i < n; i++) {
        double x1 = rand()/RANGE;
        double y1 = rand()/RANGE;
         cout << x1 << " " << y1 << endl;
        // cout << x1 / double(RANGE) << " " << y1 / double(RANGE) << endl;
        if (checkPoint(x1 , y1 , RANGE)) {
            pointsIn++;
        }

    }
    cout << "Numero aciertos " << pointsIn << endl;
    cout << "Aproximación a PI: " << double(pointsIn)/n*4;
}