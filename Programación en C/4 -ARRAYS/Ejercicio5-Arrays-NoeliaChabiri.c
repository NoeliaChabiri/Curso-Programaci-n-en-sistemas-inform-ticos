#include <stdio.h>

int main()
{
    char*cad=("Altoorlaar a itroxdeous");
    char *pt;
    int x;
    pt=cad+1;
    

    for (x=0; x<12; x++) {

        printf("%c",*pt);
        pt+=2;

    }

    printf("\n");
    

    return 0;
}
