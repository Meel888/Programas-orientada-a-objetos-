//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <algorithm> // Para sort()
using namespace std;

int main() {
    const int TAM = 10;
    double numeros[TAM]; // Usamos double para permitir decimales

    // Solicitar al usuario que ingrese 10 números
    cout << "Ingresa 10 numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Ordenar el arreglo de menor a mayor
    sort(numeros, numeros + TAM);

    // Mostrar los números ordenados
    cout << "\nNumeros ordenados de menor a mayor:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
