// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 10/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double GenerarPrecio() {
    return 20.0 + (rand () % 31);
}
double CalcularIva(double monto) {
    return monto * 0.13;
}
double AplicarDescuento(double monto) {
    if (monto > 2500.0) {
        return monto * 0.05;
    }
    return 0.0; 
}
int main() {
    srand(time(0));

    int n;
    cout << "Ingrese la cnatidad de productos comprados: ";
    cin >> n;

    double totalBruta = 0;

    for (int i = 1; i <= n; i++) {
        totalBruta += GenerarPrecio();
    }

    double MontoIva = CalcularIva(totalBruta);
    double descuento = AplicarDescuento(totalBruta);
    double montoFinal = totalBruta - descuento;

    cout << "\n----Resumen diario----" << endl;
    cout << "Suma total de ventas: " << totalBruta << "Bs" << endl;
    cout << "Iva (13%) a pagar: " << MontoIva << "Bs" << endl;
    cout << "Descuento Aplicado: " << descuento << "Bs" << endl;
    cout << "Monto final neto: " << montoFinal << "Bs" << endl;

    return 0;
}