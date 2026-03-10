// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
double CalculardistanciaMRU(double velocidad, double tiempo);
int main(){
    double v, t;

    cout <<"---Calculadora de distancia (MRU)---" << endl;
    cout << "Ingrese la velocidad constante (m/s): ";
    cin >> v;
    cout << "Ingrese el tiempo transcurrido: ",
    cin >> t;

    if(t < 0){
        cout << "Error el tiempo no puede ser negativo." << endl;
    } else {
        double distancia = CalculardistanciaMRU (v, t);
        cout << "\n La distancia recorrida es:" << distancia << "en metros." << endl;
    }
    return 0;
}

double CalculardistanciaMRU(double velocidad, double tiempo){
    return velocidad * tiempo;
}
