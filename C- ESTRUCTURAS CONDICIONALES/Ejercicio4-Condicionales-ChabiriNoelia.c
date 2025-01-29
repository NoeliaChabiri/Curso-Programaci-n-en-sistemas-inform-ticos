//Se ingresa por teclado un número positivo de uno o dos dígitos (1...99) mostrar
//un mensaje indicando si el número tiene uno o dos dígitos.
//(Tener en cuenta que condición debe cumplirse para tener dos dígitos un
//número entero)

#include <stdio.h>

int main()
{
    int num;

    num=1;

    while(num > 1 || num < 99) {

    printf("\nPor favor ingrese un número  - entre el 1 y el 99");
    scanf("%d",&num);

    if (num > 1 || num < 99)
    {
        printf("\nIngrese un número correcto, numero del 1 al 99");
    }
    }

    if(num>9)
    {
        printf("\nEl número %d tiene dos cifras",num);
    }
        
    else
    {

        printf("\nEl número %d tiene una cifra",num);
    }

    return 0;
}
