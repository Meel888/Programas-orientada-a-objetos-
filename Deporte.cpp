//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <string>

using namespace std;

class Deporte {
private:
    string nombre;
    string tipoBalon;
    string parteDelCuerpo;
    string tipoDeporte;
    int cantidadJugadores;

public:
    Deporte(string nombre, string balon, string parte, string tipo, int jugadores)
        : nombre(nombre), tipoBalon(balon), parteDelCuerpo(parte), tipoDeporte(tipo), cantidadJugadores(jugadores) {}

    void mostrarInfo() {
        cout << "Nombre del deporte: " << nombre << endl;
        cout << "Tipo de balon: " << tipoBalon << endl;
        cout << "Se juega con: " << parteDelCuerpo << endl;
        cout << "Tipo de deporte: " << tipoDeporte << endl;
        cout << "Cantidad de jugadores: " << cantidadJugadores << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Deporte futbol("Futbol", "Balon de futbol", "Pies", "En equipo", 11);
    Deporte tenis("Tenis", "Pelota de tenis", "Manos (con raqueta)", "Individual", 1);
    Deporte voleibol("Voleibol", "Balon de voleibol", "Manos", "En equipo", 6);
    Deporte beisbol("Beisbol", "Pelota de beisbol", "Manos (con bate)", "En equipo", 9);

    futbol.mostrarInfo();
    tenis.mostrarInfo();
    voleibol.mostrarInfo();
    beisbol.mostrarInfo();

    return 0;
}
