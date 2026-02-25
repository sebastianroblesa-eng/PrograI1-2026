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

    int numero = rand() % 10 + 1;

    cout << "El sistema ha elegido el numero: " << numero << endl;
    cout << "\nTabla de multiplicar del " << numero << ":" << endl;
    cout << "-------------------------------" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    
    cout << "-------------------------------" << endl;

    return 0;
}