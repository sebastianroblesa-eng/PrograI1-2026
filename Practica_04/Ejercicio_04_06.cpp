// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
int CalcularSumatoria(int n);
int main() {
    int limite;

    cout <<"---Calculadora de Sumatoria (1 a N)---" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> limite;

    if(limite <= 0){
        cout << "Porfa, ingrese un numero mayor a 0. " << endl;
    } else{
        int resultado = CalcularSumatoria(limite);
        cout << "La sumatoria de enteros es desde 1 hasta " << limite << "es:" << resultado << endl;
    }
    return 0;
}
int CalcularSumatoria(int n){
    int suma = 0;
    for (int i = 0; i <= n; i++) {
        suma = suma + i;
    }
    return suma;
}

