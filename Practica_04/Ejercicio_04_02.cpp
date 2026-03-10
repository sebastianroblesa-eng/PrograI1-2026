// Materia: Programación I, Paralelo 4
// Autor: Mateo Robles
// Carnet: 10930123.
// Carrera del estudiante: Ing Mecatronica.
// Fecha creación: 9/03/2026
#include <iostream>

using namespace std;
int Encontrarmayor (int n1, int n2, int n3);
int main() {
    int a, b, c;

    cout << "---Buscador del numero mayor---" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    int mayor = Encontrarmayor (a,b,c);

    cout << "\n El Mayor de los tres ingresados es: " << mayor << endl;
    return 0;
}
int Encontrarmayor (int n1, int n2, int n3){
    int max;
    if (n1 >= n2 && n1 >= n3) {
        max = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        max = n2;
    } else {
        max = n3;
    }
    
    return max;
}
