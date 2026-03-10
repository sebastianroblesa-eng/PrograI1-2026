// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
bool esPar(int numero);
int main(){
    int num;

    cout << "---Verificar numero pares---" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if(esPar(num)){
        cout << "El numero " << num << "es Par." << endl;
    } else {
        cout << "El numero " << num << "es Impar." << endl; 
    }
    return 0;
}

bool esPar(int numero){
    if(numero % 2 == 0){
        return true;
    } else {
        return false;
    }
}