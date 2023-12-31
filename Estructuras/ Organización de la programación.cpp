#include <iostream>
#include <vector>
#include <algorithm>

struct Estudiante {
    std::string nombre;
    int edad;

    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};

bool esNombreIgual(const Estudiante& estudiante, const std::string& nombre) {
    return estudiante.nombre == nombre;
}

void eliminarEstudiantePorNombre(std::vector<Estudiante>& estudiantes, const std::string& nombre) {
    auto it = std::remove_if(estudiantes.begin(), estudiantes.end(),
                             [nombre](const Estudiante& estudiante) { return esNombreIgual(estudiante, nombre); });

    estudiantes.erase(it, estudiantes.end());
}

void imprimirEstudiantes(const std::vector<Estudiante>& estudiantes) {
    std::cout << "Lista de Estudiantes:\n";
    for (const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << "\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<Estudiante> estudiantes;

    estudiantes.push_back(Estudiante("Juan", 20));
    estudiantes.push_back(Estudiante("Maria", 22));
    estudiantes.push_back(Estudiante("Carlos", 21));

    imprimirEstudiantes(estudiantes);

    std::string nombreEliminar = "Maria";
    eliminarEstudiantePorNombre(estudiantes, nombreEliminar);

    imprimirEstudiantes(estudiantes);

    return 0;
}
