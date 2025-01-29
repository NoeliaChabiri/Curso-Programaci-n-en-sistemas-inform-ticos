//Realizar un programa que solicite la carga por teclado de dos números, si el
//primero es mayor al segundo informar su suma y diferencia, en caso contrario
//informar el producto y la división del primero respecto al segundo

#include <stdio.h>

int main()
{
    float num,num2,suma,resta,multiplicacion,divicion;


    printf("Por favor ingrese el primer número: ");
    scanf("%f",&num);
    printf("Por favor ingrese el segundo número: ");
    scanf("%f",&num2);

    suma=num+num2;
    resta=num-num2;
    multiplicacion=num*num2;
    divicion=num/num2;

    if(num>num2)
    {
        printf("La suma de los numeros es: %.2f",suma);
        printf("\nLa resta de los numeros es: %.2f",resta);
    }
    else
    {

        printf("El producto de los numeros es: %.2f", multiplicacion);
        printf("\nLa divición de los numeros es: %.2f", divicion);
    }
    
    return 0;
}
