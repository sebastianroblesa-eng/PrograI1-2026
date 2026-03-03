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
    int n;
    int pares[3] = {0, 0, 0}; 

    srand(time(0));

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int resultado = 1 + rand() % 6;

        if (resultado == 2)      pares[0]++;
        else if (resultado == 4) pares[1]++;
        else if (resultado == 6) pares[2]++;
    }

    int totalPares = pares[0] + pares[1] + pares[2];

    cout << "\n--- Resultados ---" << endl;
    cout << "Cara 2: " << pares[0] << endl;
    cout << "Cara 4: " << pares[1] << endl;
    cout << "Cara 6: " << pares[2] << endl;
    cout << "------------------" << endl;
    cout << "Total de pares: " << totalPares << endl;

    return 0;
}