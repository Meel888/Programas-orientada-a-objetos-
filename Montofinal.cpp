//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <cmath>      // Para pow()
#include <iomanip>    // Para setprecision()
using namespace std;

int main() {
    double capitalInicial = 15000.0;             // Monto que se invierte al inicio
    double tasaInteresMensual = 0.037;           // Tasa de interés mensual (3.7%)
    int anios = 15;                              
    int meses = anios * 12;                      // Total de meses

    // Fórmula de interés compuesto: M = C * (1 + r)^n
    double montoFinal = capitalInicial * pow(1 + tasaInteresMensual, meses);

    // Mostrar el resultado con 2 decimales
    cout << fixed << setprecision(2);
    cout << "Monto ahorrado despues de " << anios << " anios: $" << montoFinal << endl;

    return 0;
}
