// realice un programa que permita leer una cadena de caracteres 
//y que devuelva el numero de caracteres de dicha cadena e imprimir dicha cadena al revez

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    char cad[50]; // Declara un array de caracteres llamado "nombre" con capacidad para 50 caracteres
    int longitud,i;

    printf("\nIngrese su nombre: "); // Imprime un mensaje para pedir al usuario que ingrese su nombre
    fgets(cad, sizeof(cad), stdin);  // Usamos fgets para leer la cadena (mejor que scanf para evitar desbordamientos)
    //genera un salto de linea esta funcion.
    cad[strcspn(cad,"\n")]=0;//elimina el salto de linea.

    //calculamos con la funcion la longitud de la cadena.
    longitud=strlen(cad);
    printf("La longitud de la cadena es %d\n", longitud);

    printf("\nLa cadena dice: %s", cad);

    //imprimimos la cadena al revez
    printf("\nLa cadena al revez: ");
    
    for ( i = longitud ; i >= 0 ; i--)
    {
        printf("%c", cad[i]);

    }
    

    return 0;
}
