//Realizar un programa que imprima en pantalla los números del 1 al 100, utilizando
//las tres estructuras de control que conocemos (while..do, do..while, for)

#include <stdio.h>

int main()
{
    int i;


    printf("\nBucle For: ");

    for (i = 1; i <= 100; i++)
    {
        printf(" %d ",i);
    }

    printf("\n");
    i=1;
    printf("\nBucle While: ");

    while(i<=100)
    {
        printf(" %d ",i);
        i++;
    }

    printf("\n");

    i=1;

    printf("\nBucle Do While: ");

    do
    {
        printf(" %d ",i);
        i++;

    } while (i<=100);
    
    
    
    return 0;
    
}
