/*el siguiente programa crea un array de un numero de elementos que introduce el
usuario por teclado. El array se dimensiona en tiempo de ejecucion usando
un puntero y la funcion malloc 

Dado un array de 3 posiciones, por ejemplo, si definimos tal y como sigue
int array[3], la variable array, nos devolvera la primera posicion de memoria
por la que empieza el array

El código p = (int *) malloc(n*sizeof(int)); reserva un area de memoria
contigua para n posiciones en cada cual irá un dato de tipo entero
Devuelve la direccion de inicio de ese area de memoria, como un puntero vacío

Por lo tanto, lo que estamos haciendo con malloc, por un lado es:
1. reservar un area de memoria, en este caso para enteros, de dimension n
2. devolver la primera posición de memoria en la variable tipo puntero array
3. como array es una variable tipo puntero de enteros y ha sido dimensionada
con n posiciones, es lo mismo que si yo la hubiese definido como un array de n 
elementos. Pero como yo no se de mano, antes de empezar el programa, de cuantas 
posiciones va a ser el array, lo que hago es declararlo como puntero para a
continuacion redimensionarlo con la funcion malloc*/

#include <stdio.h> 
#include <stdlib.h> //incluimos esta libreria para usar las funciones malloc y free

int main(void) 
{ 
    int n, i; 
    int *array; 
    printf("Introduce el número de elementos: "); 
    scanf("%d", &n); 
    array=(int*)malloc(n*sizeof(int)); 
    //reserva un area de memoria
    //contigua para n posiciones en cada cual irá un dato de tipo entero
    //int * :Le estan diciendo a array que el lugar esta reservado para un pountero tipo entero
    //malloc : Devuelve la ubicacin
    

    if (array == NULL) { //si la funcion malloc no me devuelve ningun puntero
        printf("¡Falló la asignación de memoria!"); 
        return -1; 
        } 
    for (i = 0; i < n; i++) { 
        printf("Introduce elemento %d: ", i); 
        scanf("%d",&array[i]); 
        } 
        printf("Elementos de la matriz: "); 
        for (i = 0; i < n; i++) 
        { 
            printf("%d ",array[i]); 
        } 
    /*para finalizar, liberamos el espacio de memoria que me asignó la funcion
    malloc, utilizando la funcion free*/
    free(array);
    printf("\n Se ha liberado la asignacion de memoria");
    return 0; 
    
} //fin del programa
