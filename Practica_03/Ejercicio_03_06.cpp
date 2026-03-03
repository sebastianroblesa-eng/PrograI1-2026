// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 2/03/2026

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int N;
    srand(time(0));

    cout << "Ingrese la cantidad total de ninos (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Cantidad no valida." << endl;
        return 1;
    }

    int ninos1 = rand() % (N + 1);

    int restante = N - ninos1;
    int ninos2 = (restante > 0) ? rand() % (restante + 1) : 0;

    int ninos3 = N - ninos1 - ninos2;

    int panales1 = ninos1 * 6;
    int panales2 = ninos2 * 3;
    int panales3 = ninos3 * 2;
    int totalPanales = panales1 + panales2 + panales3;

    cout << "\n--- Distribucion de ninos ---" << endl;
    cout << "Ninos de 1 ano: " << ninos1 << " (Consumo: " << panales1 << ")" << endl;
    cout << "Ninos de 2 anos: " << ninos2 << " (Consumo: " << panales2 << ")" << endl;
    cout << "Ninos de 3 anos: " << ninos3 << " (Consumo: " << panales3 << ")" << endl;
    
    cout << "-----------------------------" << endl;
    cout << "Suma total de ninos: " << (ninos1 + ninos2 + ninos3) << endl;
    cout << "TOTAL PAÑALES POR DIA: " << totalPanales << endl;

    return 0;
}