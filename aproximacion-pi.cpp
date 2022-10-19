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
/* RANGE= constante global (10e5) para convertir rand() en número entre 0 y 0.32767*/
const double RANGE = 100000.0;
const double RADIUS=RAND_MAX/RANGE;

/* Función para calcular la distacia del punto (x1,y1) al (0,0) 
 y devuelve 'true' si ese valor es menor que RADIUS */
bool checkPoint(double x1, double y1) {
    // cout << x1 << " " << y1 << endl;
        if (sqrt(x1*x1 + y1*y1) <= RADIUS) {
            return true;
        } else {
            return false;
        }
    }

/* Solo genero puntos aleatorios en el cuadrante con x1>=0 e y1>=0
  con una circinferencia de radio RADIUS, para realizar menos cálculos
  de distancias */
int main() {
    srand(time(NULL));
    
    // cout << "RAND_MAX: " << RAND_MAX << endl;
    // cout << "RAND_MAX/RANGE " << RAND_MAX/RANGE << endl;
    cout << "Dime el número de iteraciones a utilizar en el método de Montecarlo: ";
    unsigned n;
    cin >> n;
 
    unsigned pointsIn = 0;

    for (int i = 0; i < n; i++) {
        double x1 = rand()/RANGE;
        double y1 = rand()/RANGE;
        // cout << x1 << " " << y1 << endl;
        // cout << x1 / double(RANGE) << " " << y1 / double(RANGE) << endl;
        if (checkPoint(x1 , y1)) {
            pointsIn++;
        }

    }
    cout << "Numero aciertos " << pointsIn << endl;
    cout << "Aproximación a PI: " << double(pointsIn)/n*4;
}