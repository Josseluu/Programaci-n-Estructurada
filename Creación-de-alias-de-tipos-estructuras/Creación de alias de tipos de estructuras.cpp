#include <iostream>
#include <vector>
#include <algorithm>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;

    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};

// Creación de un alias usando typedef
typedef Estudiante MiEstudiante;

// Función para eliminar estudiantes por nombre
void eliminarEstudiantePorNombre(std::vector<MiEstudiante>& estudiantes, const std::string& nombre) {
    auto it = std::remove_if(estudiantes.begin(), estudiantes.end(),
                             [nombre](const MiEstudiante& estudiante) { return estudiante.nombre == nombre; });

    estudiantes.erase(it, estudiantes.end());
}

// Función para imprimir estudiantes
void imprimirEstudiantes(const std::vector<MiEstudiante>& estudiantes) {
    std::cout << "Lista de Estudiantes:\n";
    for (const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << "\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<MiEstudiante> estudiantes;

    estudiantes.push_back(MiEstudiante("Juan", 20));
    estudiantes.push_back(MiEstudiante("Maria", 22));
    estudiantes.push_back(MiEstudiante("Carlos", 21));

    imprimirEstudiantes(estudiantes);

    std::string nombreEliminar = "Maria";
    eliminarEstudiantePorNombre(estudiantes, nombreEliminar);

    imprimirEstudiantes(estudiantes);

    return 0;
}
