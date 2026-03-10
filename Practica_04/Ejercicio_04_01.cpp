// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;

float Calcularareatriangulo (float base, float altura);

int main() {
    float b, h, area;

    cout << "----Calculadora de Area de triangulos---" << endl;

    cout << "Ingrese la base del triangulo: ";
    cin >> b;
    cout << "Ingrese la altura del triangulo: ";
    cin >> h;

    area = Calcularareatriangulo(b,h);

    cout << "\nEl area resultante es: " << area << endl;

    return 0;
}

float Calcularareatriangulo (float base, float altura){
    return (base * altura) / 2;
}
