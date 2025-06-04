#include <iostream>
#include <string>
using namespace std;

void ejecutarCiclo(int plan) {
    cout << "\n--- Inicio del ciclo ---\n";
    cout << "Estado: OFF\n";
    cout << "Encendiendo lavadora...\n";
    cout << "Estado: IDLE\n";

    cout << "Estado: SOAK (llenando agua, tiempo: 30 seg)\n";
    cout << "Estado: RINSE (agitador encendido, tiempo: 30 min)\n";
    cout << "Estado: DRAIN (drenando agua, tiempo: 5 min)\n";

    if (plan == 1 || plan == 2) {
        cout << "Estado: DRY (secando ropa, tiempo: 20 min)\n";
    }

    cout << "Estado: IDLE (fin del ciclo)\n";
    cout << "--- Fin del ciclo ---\n";
}

string obtenerRespuestaSiNo(const string& mensaje) {
    string r;
    do {
        cout << mensaje;
        cin >> r;

        // Convertimos a minúsculas
        for (char& c : r) {
            c = tolower(c);
        }

        if (r != "si" && r != "no") {
            cout << "Respuesta inválida. Solo se permite \"si\" o \"no\".\n";
        }
    } while (r != "si" && r != "no");
    return r;
}

int main() {
    bool lavadoraEncendida = false;

    string respuesta = obtenerRespuestaSiNo("La lavadora está apagada. ¿Quieres encenderla? (si/no): ");
    if (respuesta == "si") {
        lavadoraEncendida = true;
    } else {
        cout << "La lavadora está apagada. No se puede iniciar ciclo.\n";
        return 0;
    }

    do {
        int plan;
        cout << "\nSelecciona el plan:\n";
        cout << "1. Regular\n2. Delicado\n3. Super delicado\n> ";
        cin >> plan;

        if (plan < 1 || plan > 3) {
            cout << "Opción inválida. Solo se permite 1, 2 o 3.\n";
            continue;
        }

        ejecutarCiclo(plan);

        respuesta = obtenerRespuestaSiNo("¿Quieres activar otro plan? (si/no): ");
        if (respuesta == "no") {
            lavadoraEncendida = false;
            cout << "Apagando lavadora...\n";
        }

    } while (lavadoraEncendida);

    cout << "Programa terminado.\n";
    return 0;
}