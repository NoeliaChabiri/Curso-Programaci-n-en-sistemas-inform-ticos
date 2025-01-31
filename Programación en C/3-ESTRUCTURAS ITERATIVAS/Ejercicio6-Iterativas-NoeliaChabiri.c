#include <stdio.h>

int main() 
{
    int i;  

    // Recorremos los números del 1 al 50
    for (i = 1; i <= 50; i++) 
    {
        // Verificamos si el número es múltiplo de 3
        if (i % 3 == 0) 
        {
            printf("\nEl %d es múltiplo de 3", i);
        }
    }

    return 0;
}