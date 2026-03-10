// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 10/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
double generarVentasTotales() {
    return (double) (200 + rand() % 301);
}
double calcularComision(double totalVendido) {
    return totalVendido * 0.10;
}
double calcularSueldoTotal(double sueldoBase, double comision) {
    return sueldoBase + comision;
}
int main() {
    srand(time(0));
    int n;
    double SueldoBase;
    cout << "ingrese la cantidad de vendedores: ";
    cin >> n;
    cout << "Ingrese el sueldo mensual base de los vendedores: ";
    cin >> SueldoBase;

    cout <<"\n---Reporte de pagos mensuales---" << endl;
    for (int i = 0; i <= n; i++){
        double ventas = generarVentasTotales();
        double comision = calcularComision(ventas);
        double sueldoTotal = calcularSueldoTotal(SueldoBase, comision);

        cout << "\nVendedora #" << i << ":" << endl;
        cout << " - Total Ventas: " << ventas << "Bs" << endl;
        cout << "- Comision: " << comision << "Bs" << endl;
        cout << "- Sueldo total a cancelar: " << sueldoTotal << "Bs" << endl;
    }
    return 0;
    
}