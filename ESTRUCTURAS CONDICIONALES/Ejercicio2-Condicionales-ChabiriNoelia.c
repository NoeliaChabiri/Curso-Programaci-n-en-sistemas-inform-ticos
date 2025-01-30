//Realizar un programa que solicite al operador ingresar dos números y muestre
//por pantalla el mayor de ellos.

#include <stdio.h>

int main()
{
    float num,num2;
    printf("Por favor ingrese el primer número: ");
    scanf("%f",&num);
    printf("Por favor ingrese el segundo número: ");
    scanf("%f",&num2);

    if(num>num2)
    {
        printf("El primer número es mayor ");
    }
    else
    {
        printf("El segundo número es mayor ");
    }
    
    return 0;
}
