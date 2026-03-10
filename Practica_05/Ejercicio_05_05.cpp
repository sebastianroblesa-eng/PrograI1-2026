// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 10/03/2026
#include <iostream>

using namespace std;

int obtenerCosto(int numMaterias) {
    return numMaterias * 525;
}

int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes a registrar: ";
    cin >> N;

    int semestre[N];
    int numMaterias[N];
    int carreraID[N]; 

    double montoTotal = 0;
    int totalPorCarrera[5] = {0};  
    int materiasPorNivel[6] = {0}; 

    for (int i = 0; i < N; i++) {
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Seleccione Carrera:\n1. Sist\n2. Diseno\n3. Meca\n4. Innovacion: ";
        cin >> carreraID[i];

        if (carreraID[i] < 1 || carreraID[i] > 4) {
            cout << "Opcion invalida." << endl;
            i--; continue;
        }

        cout << "Semestre (2 al 5): ";
        cin >> semestre[i];
        if (semestre[i] < 2 || semestre[i] > 5) {
            cout << "Semestre fuera de rango." << endl;
            i--; continue;
        }

        cout << "Numero de materias (3 a 6): ";
        cin >> numMaterias[i];
        if (numMaterias[i] < 3 || numMaterias[i] > 6) {
            cout << "Cantidad fuera de rango." << endl;
            i--; continue;
        }

        totalPorCarrera[carreraID[i]]++;
        materiasPorNivel[semestre[i]] += numMaterias[i];
        montoTotal += obtenerCosto(numMaterias[i]);
    }

    cout << "\n--- REPORTES FINALES ---" << endl;
    cout << "1. Estudiantes por carrera:" << endl;
    cout << "   Sist: " << totalPorCarrera[1] << " | Diseno: " << totalPorCarrera[2] 
         << " | Meca: " << totalPorCarrera[3] << " | Innov: " << totalPorCarrera[4] << endl;

    cout << "2. Materias tomadas por nivel:" << endl;
    for(int s = 2; s <= 5; s++) {
        cout << "   Semestre " << s << ": " << materiasPorNivel[s] << " materias" << endl;
    }

    cout << "3. Monto total recaudado: " << montoTotal << " Bs" << endl;

    return 0;
}
