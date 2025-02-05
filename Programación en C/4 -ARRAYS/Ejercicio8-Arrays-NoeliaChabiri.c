// programa que debe leer pos usuario un número y hacer una matriz con su potencias 1,2,3 y a la 4, desde el numero 1 al numero del usuario.
// ejemplo el usuario elije el 2 , entonces 1^2,1^3,1^4 y 2^2,2^3,2^4. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *potencias;
    int num,i,j;
    

    ///Corroboramos valores.
    do {
        printf("\nIngrese en número mayor o igual a cero: ");
        scanf("%d",&num);

        if (num<0) {
            printf("\nIngrese correctamente el número ");
        }

    } while (num<0);


    // Asignamos memoria para la matriz , dependiendo el numero y las potencias.
    potencias = (int *)malloc(num * 4 * sizeof(int)); //porque hay que multiplicar todos los numeros hasta num^4.


    // Verificamos si la memoria fue redimensionada correctamente.
    if (potencias == NULL) {
        printf("\nError: No se pudo redimensionar la memoria\n");
        return 1;
    }


    // Inicializamos el array y le asignamos los nuevos elemento.
    // Llenar la matriz con las potencias
    for (i = 0; i < num; i++) {
        for (j = 1; j <= 4; j++) {
            *(potencias + i * 4 + (j - 1)) = (i + 1) * j;  // Guardar las potencias
        }
    }

    printf("\n");

    for ( j = 0; j < num; j++)
    {
        for (i = 0; i < 4; i++)
        {
            ///
            printf("  %d | ", *(potencias + 4 + i) ); //En la matriz se mueve 4 veces i por eso el for esta hecho en base a i. i veces.
        }
        printf("\n");
        
    }

    // Liberar la memoria asignada              
    free(potencias);
    
    return 0;
}
