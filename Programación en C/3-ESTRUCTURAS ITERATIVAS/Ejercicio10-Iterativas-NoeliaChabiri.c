//Escribir un programa que, dado un numero en decimal, me lo convierta en binario
//o hexadecimal.
//Tras introducir el número, se mostrará un menú con las dos opciones (“B” o “H”)
//donde el usuario indicará a que sistema quiere hacer la conversión.
//Para obtener el binario de un número decimal, iremos dividiendo el numero entre
//2. Si el resto de la división es impar, colocaremos un “1”, si es par, colocaremos un
//“0”. La división finaliza cuando el resultado es 1. Se tendrán que imprimir los
//resultados en orden inverso

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    float numero, parteDecimal;
    char paso;
    int precision,parteEntera,aux,cociente, factor,binario;
    precision=10;
    aux=0;
    factor=1;
    binario=0;
    paso='c';

    do{

        printf ("\nPor favor ingrese un número decimal: ");
        scanf("%f", &numero);
        printf("\nSi lo quiere pasar a BINARIO ingrese B  ");
        printf("\nSi lo quiere pasar a HEXAGECIMAL ingrese H ");
        printf("\nA que lo quiere pasar?: ");
        scanf(" %c", &paso);
        paso=toupper(paso);
        parteEntera=(int)numero;
        parteDecimal=numero-parteEntera;



        if (paso!='H'&&paso!='B')
        {
            printf("\nIngreso mal la opción, ingrese nuevamente");
        }
        

        // Pasamos número a binario
        if (paso=='B')
        {
            if (parteEntera == 0) {
                
                printf("0");
            }
            
            
            //Saca resto y lo da vuelta.
            while (parteEntera>0){

                aux = parteEntera % 2;
                binario += aux * factor; // Construimos el número binario, saca el numero final, moviendolos los da vuelta.
                factor *= 10; // Multiplicamos por 10 para la siguiente posición
                parteEntera /= 2; // Reducimos el número dividiéndolo por 2

            }

             printf("\nEl número en binario es: %d",binario);

            if(parteDecimal>0){
                printf(".");  
            }


            while(precision>0 && parteDecimal>0){
                parteDecimal *= 2;  
                aux = (int)parteDecimal;
                printf("%d", aux);
                parteDecimal -= aux;
                precision--;
            }
        
        }

        //-------------------------------------------------------------------------------------------------------------------------

        //Pasamos el numero a Hexagesimal - Saca resto y lo da vuelta.
        if (paso=='H')
        {
            printf("El número en hexagecimal es: %X", parteEntera);


            if(parteDecimal>0) { 
                printf(".");  

                while(precision>0 && parteDecimal>0)
                {
                    parteDecimal *= 16;  
                    aux = (int)parteDecimal;
                    printf("%X", aux); 
                    parteDecimal -= aux;
                    precision--;
                
                }

    }

        }
        
    } while (paso!='H'&&paso!='B');

    printf("\n");

    return 0;
}



