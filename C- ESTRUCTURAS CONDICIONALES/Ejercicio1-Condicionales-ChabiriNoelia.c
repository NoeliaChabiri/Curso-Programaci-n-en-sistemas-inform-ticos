
//Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un
//mensaje en pantalla indicando que debe abonar impuestos

#include <stdio.h>

int main()
{
    float sueldo;

    printf("Por favor ingrese su sueldo: ");
    scanf("%f",&sueldo);

    if (sueldo<3000)
    {
        printf("No debera abonar impuestos");
    }
    else
    {
        printf("Debera abonar impuestos");
    }


    return 0;
}
