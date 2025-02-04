#include <stdio.h>
#include <string.h>

int main()
{
    
char *cadena="hola mundo";
char *p;
int i;
p=cadena+1; // esto quiere decir que p apuntara a la direccion de memoria de la primera o de hola mundo.

for (i = 0; i < 5; i++)
{
    
    printf("%c", *p);
    p+=2; // es igual que decir p=p+2.
    
}


    return 0;
}
