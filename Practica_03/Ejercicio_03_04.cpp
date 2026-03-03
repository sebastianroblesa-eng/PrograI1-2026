// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 2/03/2026

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros a generar (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
        return 1;
    }

    srand(time(0));

    long long sumatoria = 0;
    int mayor = 0;       
    int menor = 1001;    
    
    cout << "\nNumeros generados: " << endl;

    for (int i = 0; i < n; i++) {
        int num = rand() % 1000 + 1;
        cout << num << " ";

        sumatoria += num;

        if (num > mayor) {
            mayor = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    double promedio = (double)sumatoria / n;

    cout << "\n\n--- Resultados ---" << endl;
    cout << "a. Sumatoria: " << sumatoria << endl;
    cout << "b. Promedio:  " << promedio << endl;
    cout << "c. Mayor:     " << mayor << endl;
    cout << "d. Menor:     " << menor << endl;

    return 0;
}