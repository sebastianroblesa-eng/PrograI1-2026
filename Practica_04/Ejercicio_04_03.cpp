// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;

double Calcularvolumencilindro(double radio, double altura);
int main() {
    double r, h;
    cout << "---Calculadora de Volumen de Cilindros---" << endl;

    cout << "Ingrese el radio de la base: ";
    cin >> r;
    cout << "Ingrese la altura del cilindro: ";
    cin >> h;

    double volumen = Calcularvolumencilindro(r,h);

    cout << "\nEl volumen del cilindro es: " << volumen << endl;

    return 0;
}

double Calcularvolumencilindro(double radio, double altura){
    return PI * pow(radio,2) * altura;
}