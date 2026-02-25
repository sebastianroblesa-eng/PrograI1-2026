// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 24/02/2026
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {

    srand(time(NULL));

    int num;
    int sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;
    int cantidadNumeros = 10; 

    cout << "Generando " << cantidadNumeros << " numeros aleatorios entre 1 y 100..." << endl;
    cout << "Numeros generados: ";

    for (int i = 0; i < cantidadNumeros; i++) {
    
        num = rand() % 100 + 1;
        cout << num << " "; 

        sumaTotal += num;

        if (num % 2 == 0) {
            sumaPares += num;
        } else {
            sumaImpares += num;
        }

        if (esPrimo(num)) {
            sumaPrimos += num;
        }
    }

    cout << "\n\n--- Resultados de los numeros aleatorios ---" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Suma de primos: " << sumaPrimos << endl;

    return 0;
}