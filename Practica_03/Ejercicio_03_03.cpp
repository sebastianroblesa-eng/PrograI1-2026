// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 2/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1;

    long long factorial = 1;
    for(int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    cout << "Numero aleatorio: " << numero << endl;
    cout << "Factorial: " << factorial << endl; 
    
    return 0;
}
    