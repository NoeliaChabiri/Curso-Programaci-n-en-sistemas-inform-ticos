/// introducir por usario 6 numeros en una tabla 3x2. El programa mostrara máximo a minimo y de toda la tabla.

#include<stdio.h>

int main()
{

    int matriz[3][2],minFila,min,maxFila,max, i,j,num;
    max=matriz[1][1];
    min=matriz[0][0];
   

    for (i, i = 0; i < 2; i++)
    {
        //este bucle se mueve en i , seria x.

        while(j<3)
        {
            printf("Ingrese un número ENTERO");
            scanf("%d",&num);

            if (num!=(int)num){

                printf("Error ingreso un número invalido, por favor vuelva a ingresarlo");

            }
            else{

                matriz[i][j]=num;
                j++;

            }
            
        }
        
    }
    
    //matriz inicializada.

    max=matriz[1][1];
    min=matriz[0][0];
    maxFila=matriz[1][1];
    minFila=matriz[0][0];

    
    // revisamos la matriz por fila, sin ordenarla, la mostramos. el ejercicio no pide ordenarla pide mostrar los valores en orden por fila.
    
    for (i , i = 0; i <= 1; i++)
    {
    
        while(j <= 2){

            if( matriz[i][j] < minFila ) {


            }
            else{

            }

            j++;

        }

    }


    
    return 0;
}
