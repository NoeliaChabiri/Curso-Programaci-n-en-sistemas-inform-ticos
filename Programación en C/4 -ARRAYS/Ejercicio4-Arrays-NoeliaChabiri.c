//Determinar la salida por pantalla del siguiente programa

#include <stdio.h>

int main(int argc, char const *argv[])
{

    
    int a,b,c, *p1, *p2;

    p1=&a; // p1 pasara a apuntar a "a".
    *p1=1; // Se le asignara el valor 1 a la dirección de memoria de "a".
    p2=&b; // p1 pasara a apuntar a "a".
    p1=p2; // p1 apuntara a b.
    *p1=0; // Se le asignara el valor 0 a la direccion de memoria de "b".
    p2=&c; // p2 deja de apuntar a "b" y apuntara a "c".
    *p2=3; // Se le asigna el valor 3 a "c".
    printf("\na:%d b: %d c: %d", a,b,c); // Se imprimen por pantalla los valores de las variables a,b y c.
    p1=p2; // p1 pasa a apuntar a donde apunta p2 osea c. 
    p2=&a; // p2 pasa a pauntar a "a".
    *p2=*p1; // el valor de a 1 pasa a ser lo que vale c osea 3.

    printf("\na:%d b: %d c: %d", a,b,c); // Se imprimen por pantalla los valores de las variables a,b y c.
    





    return 0;
}
