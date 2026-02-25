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

    int n = rand() % 500 + 1;

    cout << "El valor de n elegido aleatoriamente es: " << n << endl;

    int sumaBucle = 0;
    for (int i = 1; i <= n; i++) {
        sumaBucle += i;
    }

    int sumaFormula = n * (n + 1) / 2;

    cout << "\n--- Verificacion de Resultados ---" << endl;
    cout << "Suma iterativa (bucle): " << sumaBucle << endl;
    cout << "Suma matematica (formula): " << sumaFormula << endl;

    if (sumaBucle == sumaFormula) {
        cout << "\nResultado: ¡Ambos metodos coinciden perfectamente!" << endl;
    } else {
        cout << "\nResultado: Hay un error en el calculo." << endl;
    }

    return 0;
}