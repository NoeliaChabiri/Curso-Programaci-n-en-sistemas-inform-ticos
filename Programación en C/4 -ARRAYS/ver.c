#include <stdio.h>

int main() {
    int j;
    int year[2][12]; // Matriz de 2 filas x 12 columnas
    int *y = &year[0][0]; // Puntero a la primera posición de la matriz

    // Inicialización de los meses
    for (j = 0; j < 12; j++) {
        year[0][j] = j + 1; // Meses del 1 al 12
    }

    // Inicialización de los días de cada mes
    int dias[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //asignamos la segunda parte de la matriz con otro nombre.
    for (j = 0; j < 12; j++) {
        year[1][j] = dias[j]; // Asignamos los días correctos a cada mes
    }

    // Mostrar los valores usando aritmética de punteros
    for (j = 0; j < 12; j++) {
        printf("\n El mes %d tiene %d días", *(y + j), *(y + 12 + j)); 
        /// y apunta al primer elemento de la matriz (year[0][0]).
        /// y + j se mueve j posiciones adelante en la memoria.
        /// *(y + j) obtiene el valor en year[0][j] (el número del mes).
        /// y + 12 mueve el puntero 12 posiciones adelante, es decir, apunta a year[1][0] (la segunda fila de la matriz).
        /// y + 12 + j se mueve j posiciones más adelante, accediendo a year[1][j].
        /// *(y + 12 + j) obtiene el valor en year[1][j] (los días del mes correspondiente).
    }

    return 0;
}