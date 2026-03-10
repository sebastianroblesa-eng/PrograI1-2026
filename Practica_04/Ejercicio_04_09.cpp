// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
float Calcularpromedio(float nota1, float nota2);
int main () {
    float n1, n2;

    cout << "---Calculadora de promedio academico---" << endl;
    cout << "Ingrese la primera nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    float promedio = Calcularpromedio(n1, n2);

    cout << "\nEl promedio final es: " << promedio << endl;

    if (promedio >= 51 ) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    return 0;
}

float Calcularpromedio(float nota1, float nota2){
    return(nota1 + nota2) / 2;
}