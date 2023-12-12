#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};


void agregarEstudiante(struct Nodo **lista, struct Estudiante estudiante) {

    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    if (nuevoNodo == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return;
