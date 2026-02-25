// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 24/02/2026
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

long long sumaFactorialesRecursiva(int n) {
    if (n <= 1) return 1;
    return factorial(n) + sumaFactorialesRecursiva(n - 1);
}

int main() {
    
    srand(time(NULL));

    int n = rand() % 20 + 1;

    cout << "El sistema ha elegido n = " << n << " de forma aleatoria." << endl;

    long long resultado = sumaFactorialesRecursiva(n);

    cout << "La suma de los factoriales hasta " << n << " es: " << resultado << endl;

    return 0;
}