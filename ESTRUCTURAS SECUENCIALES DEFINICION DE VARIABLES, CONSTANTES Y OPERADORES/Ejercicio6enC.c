#include <stdio.h>

//Programa máquinas expendedoras de refrescos, realiza cuántas monedas de cada tipo debe devolver. 
//Moneda más pequeña: 5 céntimos. Se dispone de monedas de 50 céntimos, 20 céntimos, 10 céntimos, y 5 céntimos.
//El objetivo es devolver la menor cantidad de monedas posibles.

float main()
{
    int contador;  // Variable que se usará para contar cuántas monedas de cada tipo se necesitan.
    float euros;   // Variable para almacenar la cantidad de euros que se debe devolver.
    contador = 0;  // Inicializa el contador a 0 antes de empezar a calcular las monedas.

    // Pide al usuario que ingrese la cantidad de euros que se debe devolver
    printf("Por favor ingrese los euros que debe devolver para calcular las monedas necesarias: ");
    scanf("%f", &euros);  // Lee la cantidad de euros introducida por el usuario.
    printf("Para devolver %.2f, hay que entregar: ", euros);  // Imprime el monto a devolver con 2 decimales.

    // Verifica si el monto es mayor o igual a 0.50€, y si es así, calcula cuántas monedas de 0.50€ se necesitan
    if (euros >= 0.5)
    {
        contador = euros / 0.5;  // Calcula cuántas monedas de 0.50€ se necesitan.
        printf("Se necesitan %d monedas de 0.50€ ", contador);  // Imprime la cantidad de monedas de 0.50€.
    }

    // Actualiza el monto restante después de restar las monedas de 0.50€
    euros = euros - (0.5 * contador);

    // Repite el proceso para monedas de 0.20€
    if (euros >= 0.2)
    {
        contador = euros / 0.2;  // Calcula cuántas monedas de 0.20€ se necesitan.
        printf("Se necesitan %d monedas de 0.20€ ", contador);  // Imprime la cantidad de monedas de 0.20€.
    }

    // Actualiza el monto restante después de restar las monedas de 0.20€
    euros = euros - (0.2 * contador);

    // Repite el proceso para monedas de 0.10€
    if (euros >= 0.1)
    {
        contador = euros / 0.1;  // Calcula cuántas monedas de 0.10€ se necesitan.
        printf("Se necesitan %d monedas de 0.10€ ", contador);  // Imprime la cantidad de monedas de 0.10€.
    }

    // Actualiza el monto restante después de restar las monedas de 0.10€
    euros = euros - (0.1 * contador);

    // Repite el proceso para monedas de 0.05€
    if (euros >= 0.05)
    {
        contador = euros / 0.05;  // Calcula cuántas monedas de 0.05€ se necesitan.
        printf("Se necesitan %d monedas de 0.05€ ", contador);  // Imprime la cantidad de monedas de 0.05€.
    }

    // El programa termina aquí sin devolver ninguna cantidad adicional, ya que no se requieren más monedas.
}
