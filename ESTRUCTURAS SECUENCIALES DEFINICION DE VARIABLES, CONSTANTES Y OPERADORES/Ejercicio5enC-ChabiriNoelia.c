#include <stdio.h>

// Se debe desarrollar un programa que pida el precio y la cantidad de un artículo 
// y luego calcule y muestre el total a abonar por el comprador.

int main()
{
    char nombreArticulo; // Variable para almacenar el nombre del artículo (incorrecta, debería ser un arreglo de caracteres).
    int cantArt;         // Variable para almacenar la cantidad de artículos comprados.
    float precioArt, total; // Variable para almacenar el precio del artículo y el total a pagar.
    
    // Solicita el nombre del artículo al usuario (error en tipo de dato para un nombre largo).
    printf("Por favor ingrese el articulo que comprar");
    scanf("%s", &nombreArticulo);  // Se usa %s, pero debería ser un arreglo de char para cadenas.
    
    // Solicita el precio del artículo.
    printf("Por favor ingrese el precio del articulo");
    scanf("%f", &precioArt);  // Lee el precio como un número de tipo float.
    
    // Solicita la cantidad de artículos comprados.
    printf("Por favor ingrese la cantidad que compro");
    scanf("%i", &cantArt);  // Lee la cantidad como un número entero.
    
    // Calcula el total a pagar (precio por cantidad).
    total = precioArt * cantArt;
    
    // Imprime el resultado: cantidad de artículos y el total a pagar.
    printf("Usted compro %i unidades de %s, y debe pagar: %f ", cantArt , total, nombreArticulo);

    return 0;
}