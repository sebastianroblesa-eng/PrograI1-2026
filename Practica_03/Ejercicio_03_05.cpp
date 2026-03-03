// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 2/03/2026

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath> 

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, contadorPrimos = 0;

    srand(time(0));

    cout << "Ingrese la cantidad de numeros a generar (N): ";
    cin >> n;

    cout << "\n--- Numeros Generados ---" << endl;

    for (int i = 0; i < n; i++) {
        int num = rand() % 10000 + 1;
        
        cout << num << " ";

        if (esPrimo(num)) {
            contadorPrimos++;
        }
    }

    cout << "\n\n--- Resultado ---" << endl;
    cout << "Cantidad de numeros primos encontrados: " << contadorPrimos << endl;

    return 0;
}