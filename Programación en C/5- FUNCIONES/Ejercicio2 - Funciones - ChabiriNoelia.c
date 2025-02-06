/// primer librerias , luego funciones, luego main.
/// no hace falta declarar variables si ya los pusimos en los parametros de la función, se declaran ahi.
/// iniciar las variables necesarias posterior a los paramatros.

///Escribe una función que, dado un vector y su tamaño, calcule el promedio de
///todos los valores dentro de ese vector pero que sean mayores que un numero
///dado que introducirá el usuario por teclado. Ese número de referencia podrá ser
///un argumento o una variable local a la función. Comprueba su ejecución
///integrando la función en un programa principal.


#include <stdio.h>

float promedioArray(int array[],int longitud){

    float promedio;
    int i;
 
    promedio=array[0];

    for ( i = 1; i < longitud; i++){

        promedio = promedio + array[i];

    }

    promedio=promedio/longitud;

    return promedio;
}


int main() {
    int elementos[10] = {2, 1, 2, 1, 2, 1, 2, 1, 2, 2}; // Ejemplo con valores positivos y negativos
    int longitud = 10;

    float promedio = promedioArray(elementos, longitud);
    printf("El promedio  del array es: %.2f\n", promedio);


    return 0;
}   



