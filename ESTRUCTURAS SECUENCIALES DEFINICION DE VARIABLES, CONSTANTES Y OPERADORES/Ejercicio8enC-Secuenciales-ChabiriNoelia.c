//

#include <stdio.h>

int main() {
    int marca;

    printf("Por favor ingrese la marca del atleta (en segundos): ");
    scanf("%d", &marca);

    // Mostrar horas, minutos y segundos con dos decimales
    printf("%d:%d:%d", marca / 3600, (marca / 60) - (marca / 3600) * 60, marca - (marca / 60) * 60);

    return 0;
}