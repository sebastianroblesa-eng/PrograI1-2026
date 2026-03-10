// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
float convertir (float montoBs, float tipoCambio);
int main(){
    float monto; 
    float oficial = 6.96;
    float paralelo = 9.10;
    int opcion;

    cout << "---Cambio de bolivianos oficial a paralelo: "<< endl;

    cout << "Ingrese el monto en bs: ";
    cin >> monto;

    cout << "Seleccionar el tipo de cambio: " << endl;
    cout << "1. Oficial (6.96)" << endl;
    cout << "2. Paralelo (9.10)" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    float resulado;
    if(opcion == 1 ) {
        resulado = convertir(monto, oficial);
    }else if (opcion == 2) {
        resulado = convertir(monto, paralelo);
    } else {
        cout << "Opcion no valida. " << endl;
        return 1;
    }
    cout.setf(ios::fixed); 
    cout.precision(2);

    cout << "\n El resultado de la conversion es: $" << resulado << endl;
    return 0;
}   

float convertir (float montoBs, float tipoCambio){
    return montoBs / tipoCambio;
}

