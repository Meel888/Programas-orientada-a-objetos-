//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <cmath> // Para M_PI
using namespace std;

// Definición de la clase Circulo
class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) {
        radio = r;
    }

    // Método para calcular la circunferencia
    double calcularCircunferencia() {
        return 2 * M_PI * radio;
    }

    // Método para calcular el área
    double calcularArea() {
        return M_PI * radio * radio;
    }
};

int main() {
    double r;

    cout << "Ingresa el radio del circulo: ";
    cin >> r;

    if (r > 0) {
        Circulo c(r);

        double circunferencia = c.calcularCircunferencia();
        double area = c.calcularArea();

        cout << fixed;
        cout.precision(2);

        cout << "\nCircunferencia del circulo: " << circunferencia << endl;
        cout << "Area del circulo: " << area << endl;
    } else {
        cout << "El radio debe ser un numero positivo." << endl;
    }

    return 0;
}
