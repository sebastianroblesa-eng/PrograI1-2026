// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 10/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int observarValorRecarga(int opcion) {
    switch (opcion) {
        case 0: return 10;
        case 1: return 20;
        case 2: return 30;
        case 3: return 50;
        case 4: return 100;
        case 5: return 200;
        default: return 10;
    }
}
int obtenerRegalo(int recarga) {
    return recarga / 2;
}
int main(){
    srand(time(0));
    int n;

    cout << "Ingrese la cnatidad de clientes: ";
    cin >> n;

    for (int i = 0; i <= n; i++){
        int presupuesto = 10 + (rand() % 991);
        int indice = rand() % 6;

        int recarga = observarValorRecarga(indice);
        int regalo = obtenerRegalo(recarga);

        int cantidad = presupuesto / recarga;
        int ahorro = cantidad * regalo;
        int cambio = presupuesto % recarga;

        cout << "\nCliente " << i << " | Presupuesto: " << presupuesto << " Bs" << endl;
        cout << "Tarjeta elegida: " << recarga << " Bs (Regalo: " << regalo << " Bs)" << endl;
        cout << "Tarjetas compradas: " << cantidad << endl;
        cout << "Ahorro total: " << ahorro << " Bs" << endl;
        cout << "Cambio: " << cambio << " Bs" << endl;
    }
    return 0;
}