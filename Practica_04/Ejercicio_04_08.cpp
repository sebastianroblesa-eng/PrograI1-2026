// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
int Contardigitos(int numero);
int main(){
    int num;

    cout << "---Contador de digitos---" << endl;
    cout << "Ingrese un numero positivo entero: ";
    cin >> num;

    if (num < 0){
        cout << "Porfa ingrese un numero mayor que 0." << endl;
    } else {
        int cantidad = Contardigitos(num);
        cout << " El numero " << num << " tiene " << cantidad << " digitos. " << endl;
    }
    return 0;
}

int Contardigitos(int numero){
    int contador = 0;
    if (numero == 0 ) return 1;

    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }
    return contador;
}