//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

int main() {
    double depositoMensual = 1000.0;          // Monto que se ahorra cada mes
    double tasaInteresMensual = 0.03;         // Tasa de interés mensual (3%)
    int anios = 10;                           // Número de años
    int meses = anios * 12;                   // Total de meses
    double montoAcumulado = 0.0;              // Monto acumulado

    // Ciclo para calcular el monto acumulado con interés compuesto
    for (int i = 0; i < meses; i++) {
        montoAcumulado = (montoAcumulado + depositoMensual) * (1 + tasaInteresMensual);
    }

    // Mostrar el resultado con 2 decimales
    cout << fixed << setprecision(2);
    cout << "Monto ahorrado despues de " << anios << " anios: $" << montoAcumulado << endl;

    return 0;
}