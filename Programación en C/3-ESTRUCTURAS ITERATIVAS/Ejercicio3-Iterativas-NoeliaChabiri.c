#include <stdio.h>  

int main()  
{  
    int i, num;  // Declaramos las variables: 'num' para el número ingresado y 'i' como contador de divisores  

    i = 3;  // Inicializamos 'i' en 3 (para buscar el menor divisor impar si el número es impar)  
    printf("\nIngrese un número entero: ");  
    scanf("%d", &num);  // Solicitamos al usuario ingresar un número entero  

    // Verificamos si el número es par  
    if (num % 2 == 0)  
    {  
        // Si es par, su menor divisor es siempre 2  
        printf("\nEl número %d es par, su menor divisor es 2", num);  
    }  
    else  
    {  
        // Si el número es impar, buscamos el menor divisor impar  
        while (num % i != 0)  // Mientras 'num' no sea divisible por 'i'  
        {  
            i = i + 2;  // Aumentamos 'i' en 2 para revisar solo impares  
        }  

        // Imprimimos el menor divisor encontrado  
        printf("\nEl número %d es impar, su menor divisor es %d", num, i);  
    }  

    return 0;  // Fin del programa  
}