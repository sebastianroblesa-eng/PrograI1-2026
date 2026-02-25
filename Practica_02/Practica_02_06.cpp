// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 24/02/2026
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(NULL));

    int n1 = rand() % 50 + 1;
    int n2 = rand() % 50 + 1;

    if (n1 == n2) {
        n1++;
    }

    cout << "Primer numero: " << n1 << endl;
    cout << "Segundo numero: " << n2 << endl;
    cout << "-------------------------------" << endl;

    if (n1 > n2) {

        cout << "Serie DESCENDENTE (unidad a unidad):" << endl;
        for (int i = n1; i >= n2; i--) {
            cout << i << " ";
        }
    } 
    else {

        cout << "Serie ASCENDENTE (unidad a unidad):" << endl;
        for (int i = n1; i <= n2; i++) {
            cout << i << " ";
        }
    }

    cout << "\n-------------------------------" << endl;

    return 0;
}