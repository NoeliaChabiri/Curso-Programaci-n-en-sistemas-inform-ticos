#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    /* escribir una programa que, dado un numero n introducido por teclado,
    redimensione una tabla de nx4 posiciones con las potencias correspondientes*/

    int numero,i,j,x;
    int **tabla;
    printf("introduce el numero del cual quieres calcular las potencias: ");
    scanf("%d",numero);
    tabla=(int**)malloc(numero*sizeof(int));
    if (tabla==NULL) exit(0);

    for ( i = 0; i < 4; i++) {
        tabla[i]=malloc(4*sizeof(int));
        if (tabla[i]==NULL) exit(0);        
    }
    //fin del for
   
    //fin de construccion de la tabla dinamica
    //a partir de aqui, hay que ir introduciendo valores
  
    // al final, elimino la memoria reservada por malloc utilizando la funcion free

    for (i=0;i<4;i++) free(tabla[i]);
    free(tabla);
    return 0;
}
