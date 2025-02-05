// programa que debe leer pos usuario un número y hacer una matriz con su potencias 1,2,3 y a la 4, desde el numero 1 al numero del usuario.ii
// ejemplo el usuario elije el 2 , entonces 1^2,1^3,1^4 y 2^2,2^3,2^4. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int **potencias;//puntero de punteros , osea una matriz.
    int num,i,j;
    

    ///Corroboramos valores.
    do {
        printf("\nIngrese en número mayor o igual a cero: ");
        scanf("%d",&num);

        if (num<0) {
            printf("\nIngrese correctamente el número ");
        }

    } while (num<0);


    // DIMENSIONAMIENTO DINAMICO - Asignamos memoria para la matriz , dependiendo el numero y las potencias.
    potencias = (int**)malloc(num*sizeof(int*)); //int** es por que es una matriz, se asigna diension dependiendo lo que el usuario indique.

    for ( i = 0; i < num; i++)
    {
        potencias[i]=(int*)malloc(4*sizeof(int));
    }
    
    // Verificamos si la memoria fue redimensionada correctamente.
    if (potencias == NULL) {
        printf("\nError: No se pudo redimensionar la memoria\n");
        return 1;
    }


    // Inicializamos el array y le asignamos los nuevos elemento.
    // Llenar la matriz con las potencias
    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            potencias[i][j]=pow(i+1,j+1);
        }
    }


    ///mostramos la matriz
    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            printf("  %d  |", potencias[i][j]);
        }
        printf("\n");
    }



    printf("\n");

   

    // Liberar la memoria asignada              
    free(potencias);
    
    return 0;
}
