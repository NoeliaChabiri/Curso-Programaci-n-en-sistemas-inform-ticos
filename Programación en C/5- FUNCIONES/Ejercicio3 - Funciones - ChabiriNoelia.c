/// primer librerias , luego funciones, luego main.
/// no hace falta declarar variables si ya los pusimos en los parametros de la función, se declaran ahi.
/// iniciar las variables necesarias posterior a los paramatros.

///Un programador con poca experiencia nos manda la siguiente función que dice
///que intercambia el valor de sus dos parámetros.
///Si se llama como swap(x, y), al terminar la ejecución, las variables x e y han
///intercambiado sus valores. ¿Es eso cierto? Comprueba tu respuesta creando un
///programa en tu entorno de desarrollo y ejecutándolo. Puedes imprimir la variable
///entera x con la línea printf("%d\n", x);

#include <stdio.h>










int main(int argc, char const *argv[])
{
    int a, b,i;

    printf("Ingrese dos enteros");

    do
    {

        printf("Ingrese el 1º entero");
        scanf("%d",&a);
        printf("Ingrese el 2º entero");
        scanf("%d",&b);

        if ((a != (int)a) || (b != (int)b)){
            
            i=0;
            printf(" Ingreso un mal el número ");
        }
        else{
            i=1;
        }
        

    } while (i==0);
    
    

    
    return 0;
}
