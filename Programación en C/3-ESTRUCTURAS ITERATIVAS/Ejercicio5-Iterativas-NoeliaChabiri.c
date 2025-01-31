//Realizar un programa que lea 10 notas de alumnos y nos informe cuántos tienen
//notas mayores o iguales a 7 y cuántos menores.

#include <stdio.h>

int main(void)
{
    float notas;
    int i,menores,mayores,siete;
    menores=0;
    mayores=0;
    siete=0;

    for (i, i = 1; i <=10 ; i++)
    {
        
        printf("Por favor ingrese la %dº: ",i);
        scanf("%f",&notas);

        if (notas==7)
        {
            siete++;
        }
        else
        {
            if (notas<7)
            {
                menores++;
            }
            else
            {
                mayores++;

            }
            
        }
        
    }

    printf("\nHubo %d alumnos que sacaron 7", siete);
    printf("\nHubo %d alumnos que sacaron más de 7", mayores);
    printf("\nHubo %d alumnos que sacaron menos de 7", menores);

    


    return 0;
}
