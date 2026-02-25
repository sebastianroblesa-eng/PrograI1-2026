// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 24/02/2026
#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 

using namespace std;

int main() {

    srand(time(NULL));


    int n = rand() % 20 + 1; 
    double precioProducto;
    double sumaBruta = 0;
    double montoConIVA = 0;
    double totalVentaDia = 0;
    double pagoIVA = 0;

    cout << "--- COMERCIAL 'LA ESTRELLA' ---" << endl;
    cout << "Productos vendidos hoy: " << n << "\n" << endl;

    for (int i = 1; i <= n; i++) {

        precioProducto = (rand() % 901 + 100); 
        
        sumaBruta += precioProducto;

        cout << "Producto " << i << ": " << precioProducto << " Bs" << endl;
    }

    pagoIVA = sumaBruta * 0.13;
    montoConIVA = sumaBruta; 

    if (montoConIVA > 2500) {
        double descuento = montoConIVA * 0.05;
        totalVentaDia = montoConIVA - descuento;
        cout << "\n* Se aplico un descuento del 5% (Excede los 2500 Bs) *" << endl;
    } else {
        totalVentaDia = montoConIVA;
    }

    cout << fixed << setprecision(2);
    cout << "\n------------------------------------------" << endl;
    cout << "Suma bruta de ventas:      " << sumaBruta << " Bs" << endl;
    cout << "IVA (13%) a pagar al SIN:  " << pagoIVA << " Bs" << endl;
    cout << "TOTAL FINAL DEL DIA:       " << totalVentaDia << " Bs" << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}