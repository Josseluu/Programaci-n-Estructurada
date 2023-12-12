#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {

    Estudiante estudiante1;
    estudiante1.nombre = "Fernando Alonso";
    estudiante1.edad = 33;
    estudiante1.promedio = 8.5;


    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}
