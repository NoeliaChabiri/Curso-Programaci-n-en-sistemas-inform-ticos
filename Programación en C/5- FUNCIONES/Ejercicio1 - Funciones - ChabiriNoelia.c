///Escribir una función que, dado un array y su longitud, calcule el mayor de los
///elementos de ese array. El vector lo construiremos como un array de 10 elementos.
///Integra esa función en un programa y comprueba su ejecución

/// primer librerias , luego funciones, luego main.
/// no hace falta declarar variables si ya los pusimos en los parametros de la función, se declaran ahi.
/// iniciar las variables necesarias posterior a los paramatros.



#include <stdio.h>

int encontrarMayor(int array[],int longitud){

    int mayor, i;

    for ( i = 0; i < longitud; i++)
    {
        if(mayor<array[i]){

            mayor=array[i];

        }
    }
    
    return mayor;
}


int main() {
    int elementos[10] = {3, -5, 7, 2, 8, 1, -4, 10, 6, -9}; // Ejemplo con valores positivos y negativos
    int longitud = 10;

    int mayor = encontrarMayor(elementos, longitud);
    printf("El mayor elemento del array es: %d\n", mayor);


    return 0;
}   


