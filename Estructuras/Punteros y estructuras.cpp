#include <stdio.h>
#include <stdlib.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {

    struct Estudiante *estudiante_ptr;

    estudiante_ptr = (struct Estudiante *)malloc(sizeof(struct Estudiante));

    if (estudiante_ptr == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }


    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", estudiante_ptr->nombre);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante_ptr->edad);

    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante_ptr->promedio);


    printf("\nInformación del estudiante:\n");
    printf("Nombre: %s\n", estudiante_ptr->nombre);
    printf("Edad: %d\n", estudiante_ptr->edad);
    printf("Promedio: %.2f\n", estudiante_ptr->promedio);


    free(estudiante_ptr);

    return 0;
}
