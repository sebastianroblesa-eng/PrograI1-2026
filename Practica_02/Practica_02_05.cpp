// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 24/02/2026
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    srand(time(NULL));

    int numeroMagico = rand() % 100 + 1;
    
    int intentoUsuario;
    int contadorIntentos = 0;

    cout << "--- ¡ADIVINA EL NUMERO! ---" << endl;
    cout << "He pensado un numero entre 1 y 100. ¿Podras adivinarlo?" << endl;

    do {
        cout << "\nIntroduce tu numero: ";
        cin >> intentoUsuario;
        contadorIntentos++; 

        if (intentoUsuario > numeroMagico) {
            cout << "Muy alto. El numero secreto es MENOR." << endl;
        } 
        else if (intentoUsuario < numeroMagico) {
            cout << "Muy bajo. El numero secreto es MAYOR." << endl;
        } 
        else {
            cout << "\n¡FELICIDADES! Has adivinado el numero." << endl;
            cout << "Te tomo " << contadorIntentos << " intentos lograrlo." << endl;
        }

    } while (intentoUsuario != numeroMagico);

    return 0;
}