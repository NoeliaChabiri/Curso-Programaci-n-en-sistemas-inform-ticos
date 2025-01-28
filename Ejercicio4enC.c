#include <stdio.h>
#include <math.h>
#include <string.h>

//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio
float main ()
{
    int i, num,suma;
    float promedio;
    suma=0;
    promedio=0;
    for (i=0;i<4;i++)
    {
        printf("Por favor ingrese el %iº número: ", i);
        scanf("%i",&num);
        suma=suma+num;
    }
    promedio=suma/4;
    printf("La suma de los números ingresados es: %i", suma);
    printf("El promedio de los números brindados es: %i", promedio);

}