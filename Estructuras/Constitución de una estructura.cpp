#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // Ejemplo de creación e inicialización de un objeto Estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Acceder a los atributos del estudiante
    std::cout << "Nombre: " << estudiante1.nombre << std::endl;
    std::cout << "Edad: " << estudiante1.edad << std::endl;
    std::cout << "Promedio: " << estudiante1.promedio << std::endl;

    return 0;
}
