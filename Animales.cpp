//Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37 A 
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string nombre;
    string tipoAnimal;
    string habitat;
    string alimentacion;
    int cantidadPatas;

public:
    Animal(string nombre, string tipo, string hab, string alim, int patas)
        : nombre(nombre), tipoAnimal(tipo), habitat(hab), alimentacion(alim), cantidadPatas(patas) {}

    void mostrarInfo() {
        cout << "Nombre del animal: " << nombre << endl;
        cout << "Tipo de animal: " << tipoAnimal << endl;
        cout << "Habitat: " << habitat << endl;
        cout << "Alimentacion: " << alimentacion << endl;
        cout << "Cantidad de patas: " << cantidadPatas << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Animal leon("Leon", "Mamifero", "Sabana", "Carnivoro", 4);
    Animal aguila("Aguila", "Ave", "Montanas", "Carnivoro", 2);
    Animal elefante("Elefante", "Mamifero", "Selva", "Herbivoro", 4);
    Animal serpiente("Serpiente", "Reptil", "Selva", "Carnivoro", 0);

    leon.mostrarInfo();
    aguila.mostrarInfo();
    elefante.mostrarInfo();
    serpiente.mostrarInfo();

    return 0;
}
