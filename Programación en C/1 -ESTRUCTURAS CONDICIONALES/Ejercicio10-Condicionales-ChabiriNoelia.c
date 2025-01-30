//Escribir un programa en C que pida tres números y detecte si se han introducido
//en orden creciente.

#include <stdio.h>

int main() {
    int num1, num2, num3, aux;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Ordenar los números
    if (num1 >= num2 && num1 >= num3 && num2>=num3) 
    {

        printf("Los números los ingreso de forma decreciente");
        
    }
    else 
    {
            if (num1 <= num2 && num1 <= num3 && num2<=num3 )

            {

            printf("Los números los ingreso de forma creciente");
        
            }
            else
            {

            printf("Los números los ingreso de forma desordenada");
        
            }
            


    }
    
    


    return 0;
}
