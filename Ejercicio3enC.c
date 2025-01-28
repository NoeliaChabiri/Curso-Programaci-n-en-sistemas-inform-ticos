#include <stdio.h>

//Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.

int main()
{
    int num, producto, suma,i;
    suma=0;
    producto=1;

    for (i=1;i<5;i++)
    {
        printf("Por favor ingrese el %iº", i);
        scanf("%i", &num);

      if (i<3)
      {
        suma=suma+num;
      }

      if(i>=3)
      {
        producto=num*producto;
      }

    }

    printf("La suma del primer y segundo numero es: %d", suma);
    printf("El producto del tercer y cuarto número es: %d", producto);


    return 0;
}