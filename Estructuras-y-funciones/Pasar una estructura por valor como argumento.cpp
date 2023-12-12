#include <iostream>
#include <string>


struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};


void imprimirEstudiante(Estudiante estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

int main() {

    Estudiante estudiante1 = {"Juan", 20, 8.5};


    imprimirEstudiante(estudiante1);

    return 0;
}
