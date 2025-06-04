// Homero Oziel Paez Martinez y Melani Mayeli Maravilla Mares 37A
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() 
{
    std::ifstream archivo("box.txt");  // Cambiamos el nombre del archivo a "box.txt"
    std::stringstream buffer;
    std::string contenido;

    if (archivo) 
    {
        buffer << archivo.rdbuf();    // Cargar el archivo en un buffer
        contenido = buffer.str();     // Convertir buffer a string

        std::cout << "Contenido del archivo box.txt:\n";
        std::cout << contenido << std::endl;
    } 
    else 
    {
        std::cerr << "No se encontro el archivo box.txt." << std::endl;
    }

    return 0;
}
