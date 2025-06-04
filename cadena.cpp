//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <string>

using namespace std;

enum Estado { S1, S2, S3, S4 };

Estado transicion(Estado estadoActual, char entrada) {
    switch (estadoActual) {
        case S1:
            if (entrada == 'a') return S2;
            break;
        case S2:
            if (entrada == 'a') return S2;
            if (entrada == 'b') return S1;
            if (entrada == 'c') return S4;
            break;
        case S3:
            if (entrada == 'a') return S1;
            if (entrada == 'b') return S4;
            break;
        case S4:
            if (entrada == 'd') return S3;
            break;
    }
    // Si el carácter no es válido, no avanza
    return estadoActual;
}

string nombreEstado(Estado estado) {
    switch (estado) {
        case S1: return "S1";
        case S2: return "S2";
        case S3: return "S3";
        case S4: return "S4";
    }
    return "Desconocido";
}

int main() {
    string cadena;
    cout << "Introduce la cadena: ";
    cin >> cadena;

    Estado estadoActual = S1;
    cout << "Estado inicial: " << nombreEstado(estadoActual) << endl;

    for (char c : cadena) {
        Estado nuevoEstado = transicion(estadoActual, c);
        if (nuevoEstado == estadoActual && (c != 'a' && c != 'b' && c != 'c' && c != 'd')) {
            cout << "Caracter '" << c << "' no válido." << endl;
        } else {
            estadoActual = nuevoEstado;
            cout << "Entrada: '" << c << "' --> Nuevo estado: " << nombreEstado(estadoActual) << endl;
        }
    }

    return 0;
}