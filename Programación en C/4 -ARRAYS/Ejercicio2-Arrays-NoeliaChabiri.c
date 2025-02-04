/// introducir por usario 6 numeros en una tabla 3x2. El programa mostrara máximo a minimo y de toda la tabla.

#include<stdio.h>

int main()
{
    int matriz[3][2],num, i,j;

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


    // revisamos la matriz por fila,
    for (i i = 0; i < 2; i++)
    {
        while(j<3){
            if (matriz[i][1] > matriz[i][2]) {
                // Intercambiar num1 y num2 si num1 es mayor que num2
                aux = num1;
                num1 = num2;
                num2 = aux;
            }

            if (matriz[i][1] > matriz[i][3]) {
                // Intercambiar num1 y num3 si num1 es mayor que num3
                aux = num1;
                num1 = num3;
                num3 = aux;
            }

             if (matriz[i][2] > matriz[i][j]) {
                // Intercambiar num2 y num3 si num2 es mayor que num3
                aux = num2;
                num2 = num3;
                num3 = aux;
            }

        }
    }
    



    


    
    return 0;
}
