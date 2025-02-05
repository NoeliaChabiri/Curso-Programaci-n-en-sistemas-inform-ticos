/// Crear programa llamado vendedores que cree un array de 18*10 indicamos que poseeemos una empresa de 18 vendedores cada uno de los cuales venden 10 productos 
///El array almacena los ingresos obtenidos por cada vendedor en cada producto ,de modo que un menu permite ALMACENAR INGRESOS , REVISAR TOTALES INDIVIDUALES cada
///vendedor y OBTENER INGRESOS TOTALES.

#include <stdio.h>
#include<ctype.h>


int main()
{
    char paso;
    float ventas[18][10];
    int empleado,menu,i,j;
    float ingreso,total;
    char *nombres[18] = {"Juan Carlos Pérez García","María Fernanda López Rodríguez","Pedro Antonio Sánchez Díaz","Laura Beatriz Martínez Gómez",
    "Roberto Enrique González Ruiz","Ana Isabel Fernández Jiménez","Javier Alberto García Torres","Carmen Teresa Rodríguez Vázquez","Luis Fernando García Pérez",
    "Sofía Elena Romero González","Francisco Javier Ruiz Martínez","Patricia Beatriz Jiménez García","Manuel Antonio Fernández Sánchez","Rosa María López Martín",
    "Vicente Manuel Pérez González","Mariana Isabel Rodríguez García","José Luis Sánchez Pérez","Carolina Andrea González Díaz"};
    char *productos[10] ={"Chanel No. 5","Dior Sauvage","Gucci Bloom","Yves Saint Laurent Black Opium","Tom Ford Black Orchid",
    "Giorgio Armani Acqua di Gio","Lancome La Vie Est Belle","Creed Aventus","Viktor & Rolf Flowerbomb","Jean Paul Gaultier Le Male"};

    paso='Y';
    total=0;

    ///Menu
    while (paso=='Y')
    {
        printf("¿Que desea hacer? presione segun corresponda\n");
        printf("\n\n1- Ingresar ventas");
        printf("\n2- Revisar totales individuales");
        printf("\n3- Ver Ingresos totales\n");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:

            for (i = 0; i < 18; i++)
            {
                printf("\nIngrese las ventas de %s\n",nombres[i]);

                for (j = 0; j < 10; j++)
                {
                    printf("¿Cuanto vendio de %s?: ", productos[i]);
                    scanf("%lf",&ingreso);
                    ventas[i][j]=ingreso;
                        
                }
                    
            }
                
            break;

        case 2:

            printf("\n¿Que empleado desea revisar?");
            for (i = 0; i < 18; i++)
            {
                printf("\n%i- %s", i, nombres[i]);
            }
            printf("Ingrese el número de empleado: \n");
            scanf("%d",&ingreso);
            j=(ingreso-1);

            for (i = 0; i < 10; i++)
            {
                total=total+ventas[i][j];
                
            }

            printf("El total de las ventas del empleado es: %.2f",total);
            
            break;

        case 3:

            for (i = 0; i < 10; i++)
            {
                for ( j = 0; i < 18; i++)
                {
                    total=total+ventas[i][j];
                }
                
               
            }
            
            printf("El total de ingresos es: %.2f",total);

            break;
        
        default: printf("\nERROR, vuelve a intentarlo.");
            break;
        }

        printf("\nDesea seguir utilizando el programa? ingrese (Y) para continuar");
        scanf("%c",&paso);
        paso=toupper(paso);
        
    }

    return 0;
}


