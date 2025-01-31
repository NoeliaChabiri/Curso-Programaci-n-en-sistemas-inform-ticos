#include <stdio.h>

int main()
{
    int i, a[5]={10,9,8,7,6};
    int b[5]={1,2,3,4,5};
    int *p1, *p2;

    p1=&a[4];
    p2=b; // apunta a la primera direccion de memoria de a.

    for ( i = 0; i < 5; i++)
    {
        *p2++=*p1--;

        printf("|%d", a[i]);
    }



    return 0;
}
