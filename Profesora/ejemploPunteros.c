#include <stdio.h>

int main()
{
    
    int valor1=10;
    int valor2=20;
    int *pe;
    float *pf;


    //El * devuelve lo que hay dentro de la dirección de memoria
    pe=&valor1;
    printf("Lo apuntado por pe es: %d", *pe);
    printf("\n La direccion que que almacena pe es: %p", pe);
    pe=&valor2;
    pf=&valor1;
    printf("Lo apuntado por pe es: %f", *pf);
    printf("\n La direccion que que almacena pe es: %p", pf);


    return 0;


}
