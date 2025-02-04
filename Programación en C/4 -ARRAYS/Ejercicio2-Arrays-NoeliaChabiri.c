/// introducir por usario 6 numeros en una tabla 3x2. El programa mostrara máximo a minimo y de toda la tabla.

#include<stdio.h>

int main()
{

    int matriz[3][2],minFila,min,maxFila,max, i,j;
    float num;
    max=matriz[1][1];
    min=matriz[0][0];
    j=0;


    for (i = 0; i <= 1; i++)
    {
        //este bucle se mueve en i , seria x.

        for(j, j = 0; j <= 2; j++ )
        {
            printf("Ingrese un número ENTERO");
            scanf("%f",&num);
            matriz[i][j]=(int)num;
            
            /*
            if (num!=(int)num){

                printf("Error ingreso un número invalido, por favor vuelva a ingresarlo");

            }
            else{

                matriz[i][j]=(int)num;
                j++;

            }
            */ 
            
        }
        
    }
    
    //matriz inicializada.

    max=matriz[1][1];
    min=matriz[0][0];


    // revisamos la matriz por fila, sin ordenarla, para ver cuales son los max y min.
    
    for (i = 0; i <= 1; i++)
    {
        j=0;
        maxFila=matriz[i][0];
        minFila=matriz[i][0];

        while(j <= 2){

            if( matriz[i][j] < minFila ) {

                minFila=matriz[i][j];

            }
            else{

                if ( matriz[i][j]>maxFila ){

                    maxFila=matriz[i][j];

                }
            }          

            j++;
        }

        printf("\nEl número minimo de la fila %d matriz es %d", i, minFila );
        printf("\nEl número maximo de la fila %d matriz es %d\n", i, maxFila );

    }

    printf("\n\nEl número maximo de la matriz es %d", max );
    printf("\nEl número minimo de la matriz es %d",min );

    printf("\n\n ---MATRIZ---\n");
    

        for (i, i = 0; i <= 1; i++)
    {
        //este bucle se mueve en i , seria x.
        j=0;

        printf("| FILA %d |",i);

        for(j, j = 0; j <= 2; j++ )
        {
            
            printf("| %d ", matriz[i][j]);
    
        }

        printf("|\n");
        
    }
    //mostramos la matriz.

    
    return 0;
}
