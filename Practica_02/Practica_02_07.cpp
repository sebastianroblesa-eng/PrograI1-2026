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

    int numero = rand() % 500 + 1;
    int sumaDivisores = 0;

    cout << "Analizando el numero: " << numero << endl;
    cout << "Divisores encontrados: ";

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            cout << i << " ";
            sumaDivisores += i; 
        }
    }

    cout << "\nSuma de los divisores: " << sumaDivisores << endl;

    if (sumaDivisores == numero) {
        cout << "¡RESULTADO: Es un numero PERFECTO!" << endl;
    } else {
        cout << "RESULTADO: No es un numero perfecto." << endl;
    }

    return 0;
}