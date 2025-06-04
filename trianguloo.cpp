//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
using namespace std;

int main() {
    int ang1, ang2, ang3;

    cout << "Ingresa el primer angulo: ";
    cin >> ang1;
    cout << "Ingresa el segundo angulo: ";
    cin >> ang2;
    cout << "Ingresa el tercer angulo: ";
    cin >> ang3;

    int suma = ang1 + ang2 + ang3;

    if (suma != 180 || ang1 <= 0 || ang2 <= 0 || ang3 <= 0) {
        cout << "Los angulos no forman un triangulo valido." << endl;
        return 0;
    }

    // Clasificación por lados (según ángulos)
    if (ang1 == ang2 && ang2 == ang3) {
        cout << "Es un triangulo equilatero." << endl;
    } else if (ang1 == ang2 || ang1 == ang3 || ang2 == ang3) {
        cout << "Es un triangulo isasceles." << endl;
    } else {
        cout << "Es un triangulo escaleno." << endl;
    }

    // Clasificación por tipo de ángulo
    if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        cout << "Es un triangulo rectangulo." << endl;
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
        cout << "Es un triangulo obtusangulo." << endl;
    } else {
        cout << "Es un triangulo acutangulo." << endl;
    }

    return 0;
}
