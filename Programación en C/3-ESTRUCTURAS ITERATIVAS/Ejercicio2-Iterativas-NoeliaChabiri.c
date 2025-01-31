//Programa que escribe serie Fibonaci

#include <stdio.h>

int main() {
    int n = 20, aux1 = 0, aux2 = 1, siguiente;

    printf("Los primeros %d términos de la serie de Fibonacci son:\n", n);
    printf("Iniciamos como primer número de la serie Fibonaci como el 0");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", aux1);
        siguiente = aux1 + aux2;
        aux1 = aux2;
        aux2 = siguiente;
    }

    return 0;
} 


