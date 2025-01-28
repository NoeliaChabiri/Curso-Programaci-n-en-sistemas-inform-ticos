#include <stdio.h>

//Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. 
//Mostrar lo que debe abonar el comprador.
//Definir una variable de tipo float para el precio del artículo

int main()
{
    char nombreArticulo;
    int cantArt;
    float precioArt,total;
    
    printf("Por favor ingrese el articulo que comprar");
    scanf("%s", &nombreArticulo);
    printf("Por favor ingrese el precio del articulo");
    scanf("%f", &precioArt);
    printf("Por favor ingrese la cantidad que compro");
    scanf("%i", &cantArt);
    total=precioArt*cantArt;
    printf("Usted compro %i unidades de %s, y debe pagar: %f ", cantArt , total, nombreArticulo);


    return 0;
}

