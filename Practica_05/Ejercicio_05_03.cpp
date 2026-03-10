// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 10/03/2026
#include <iostream>

using namespace std;
double calcularSalarioBase(double horas, double tarifa) {
    if (horas > 8) {
        return 8 * tarifa;
    }
    return horas * tarifa; 
}

double calcularBonificacion(double horas, double tarifa) {
    if (horas > 8) {
        double horasExtra = horas - 8;
        return horasExtra * (tarifa * 1.5);
    }
    return 0.0;
}
int main() {
    double horas, tarifa;

    cout << "Ingrese las horas trabajados: ";
    cin >> horas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa;

    double SalarioBase = calcularSalarioBase(horas, tarifa);
    double bonificacion = calcularBonificacion(horas, tarifa);
    double salarioTotal = SalarioBase + bonificacion;

    cout << "\n---Resultados del trabajador---" << endl;
    cout << "a. Salrio base: " << SalarioBase << "Bs" << endl;
    cout << "b. Salario bonificacion: " << bonificacion << "Bs" << endl;
    cout << "Total a recibir: " << salarioTotal << "Bs" << endl;

    return 0;
}