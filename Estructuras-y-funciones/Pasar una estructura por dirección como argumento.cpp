#include <iostream>
#include <string>


struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};


void imprimirEstudiante(const Estudiante* estudiante) {
    if (estudiante == nullptr) {
        std::cout << "Error: El puntero es nulo." << std::endl;
        return;
    }

    std::cout << "Nombre: " << estudiante->nombre << std::endl;
    std::cout << "Edad: " << estudiante->edad << std::endl;
    std::cout << "Promedio: " << estudiante->promedio << std::endl;
}

int main() {

    Estudiante estudiante1 = {"Juan", 20, 8.5};


    Estudiante* punteroEstudiante = &estudiante1;

    imprimirEstudiante(punteroEstudiante);

    return 0;
}
