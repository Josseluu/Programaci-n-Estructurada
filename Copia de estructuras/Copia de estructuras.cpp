#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;

    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};


Estudiante copiarEstudiante(const Estudiante& original) {

    Estudiante copia(original.nombre, original.edad);
    return copia;
}

int main() {

    Estudiante estudianteOriginal("Juan", 20);


    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);


    std::cout << "Estudiante Original - Nombre: " << estudianteOriginal.nombre
              << ", Edad: " << estudianteOriginal.edad << "\n";

    std::cout << "Estudiante Copia - Nombre: " << estudianteCopia.nombre
              << ", Edad: " << estudianteCopia.edad << "\n";

    return 0;
}
