//Escribe un programa que muestre por pantalla todos los números de 4 cifras en
//los cuales se cumpla la condición de que la suma de las cifras pares sea igual a la
//suma de las cifras impares.

#include <stdio.h>

int main()
{
    int u,d,c,m,num,sumaPares,sumaImpares;
    sumaPares=0;
    sumaImpares=0;

    num=1000;


    //2537÷10=253 (cociente) / 2537-(253*10)=7
    //c solo aplica % a la parte entera. Por eso se puede ir moviendo el número.

    
    // Recorremos los números de 4 cifras (1000 a 9999)
    for ( num = 1000; num < 9999; num++)
    {
        sumaPares=0;
        sumaImpares=0;

        //2537÷10=253 (cociente) / 2537-(253*10)=7
        //c solo aplica % a la parte entera. Por eso se puede ir moviendo el número.
        // Extraemos las cifras del número
        u = num % 10;        // Unidad
        d = (num / 10) % 10; // Decena
        c = (num / 100) % 10; // Centena
        m = num / 1000;      // Millar

        
        // Clasificamos las cifras como pares o impares y sumamos
        if ((u%2==0))
        {
            sumaPares=sumaPares+u;
        }
        else
        {
            sumaImpares=sumaImpares+u;
        }
              
        if ((d%2==0))
        {
            sumaPares=sumaPares+d;
        }
        else
        {
            sumaImpares=sumaImpares+d;
        }

        if ((c%2==0))
        {
            sumaPares=sumaPares+c;
        }
        else
        {
            sumaImpares=sumaImpares+c;
        }

        if ((m%2==0))
        {
            sumaPares=sumaPares+m;
        }
        else
        {
            sumaImpares=sumaImpares+m;
        }

        // Si la suma de pares e impares es igual, mostramos el número
        if (sumaPares==sumaImpares)
        {
            printf("\nLa suma de los números impares más la suma de los números pares del número %d dan el mismo resultado", num);
        }
        
    }

    return 0;
}

