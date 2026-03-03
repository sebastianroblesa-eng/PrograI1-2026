// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 2/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {
    int n;
    int caras = 0;
    int cruces = 0;

    srand(time(0));
    cout << "--- Simulador de Moneda ---" << endl;
    cout << "Cuantos lanzqaminetos quieres hacer?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2;

        if(resultado == 0) {
            caras++;
        } else{
            cruces++;
        }    
        } 
    double porcCaras = (double)caras / n * 100;
    double porcCruces = (double)cruces / n * 100;

    cout << "\n--- Resultados finales ---" << endl;
    cout << "Total Caras: " << caras << " (" << porcCaras << "%)" << endl;
    cout << "Total Cruces: " << cruces << " (" << porcCruces << "%)" << endl;
    cout << "--------------------------" << endl;

    return 0;
}