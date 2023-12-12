#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {

    Estudiante estudiante1;
    estudiante1.nombre = "Ana García";
    estudiante1.edad = 22;
    estudiante1.promedio = 9.2;


    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}
