#include <iostream>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Función que imprime los miembros de la estructura Estudiante a través de un puntero
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
    // Crear una instancia de la estructura Estudiante
    Estudiante estudiante1 = {"Juan", 20, 8.5};

    // Obtener la dirección de la estructura Estudiante
    Estudiante* punteroEstudiante = &estudiante1;

    // Llamar a la función para imprimir los miembros del estudiante mediante un puntero
    imprimirEstudiante(punteroEstudiante);

    return 0;
}
