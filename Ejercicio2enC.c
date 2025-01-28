#include <stdio.h>

int main(void)
{
    int lado, perimetro;
    printf("Por favor ingrese la medida del lado del cuadrado: ");
    scanf("%i",&lado);
    perimetro=lado*4;
    printf("El perímetro del caudrado es:  %i",perimetro);

    return 0;
}