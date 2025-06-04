//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;
    double radio;
    int opcion;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio <= 0) {
        cout << "El radio debe ser mayor que cero." << endl;
        return 1;
    }

    cout << "\n¿Qué desea calcular?" << endl;
    cout << "1. Circunferencia" << endl;
    cout << "2. Area" << endl;
    cout << "Seleccione una opcion (1-2): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "La circunferencia es: " << 2 * PI * radio << endl;
            break;
        case 2:
            cout << "El area es: " << PI * radio * radio << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}