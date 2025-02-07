/// primer librerias , luego funciones, luego main.
/// no hace falta declarar variables si ya los pusimos en los parametros de la función, se declaran ahi.
/// iniciar las variables necesarias posterior a los paramatros.

///Escribe el prototipo de una función que recibe dos estructuras de este tipo y un
///float. La función devuelve un entero con valor 1 si latitud y longitud de ambas
///estructuras están separadas por no más del valor del tercer parámetro y cero en
///caso contrario. Debes utilizar el sinónimo de tipo de datos que se define.
///Escribe la función con su definición completa (quizás te sea de ayuda la función
///de librería fabsf).

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>  // Para usar fabs()

struct gpsInformation
{

    int is3D;
    float latitude;
    float longitude;
    float height;

};




int respuesta(struct gpsInformation a, struct gpsInformation b, float f) {
    int rta;
    float diferenciaLat, diferenciaLon;

    // Calcular la diferencia absoluta de latitud y longitud - 
    diferenciaLat = fabs(a.latitude - b.latitude);
    diferenciaLon = fabs(a.longitude - b.longitude);

    // Verificar si ambas diferencias son menores o iguales a la distancia máxima 'f'
    if (diferenciaLat <= f && diferenciaLon <= f) {
        rta = 1;  // Las ubicaciones están suficientemente cerca
    } else {
        rta = 0;  // Las ubicaciones están demasiado separadas
    }

    return rta;  // Devolver el valor de 'rta'
}


//1=longitud y latitud 0= contrario


int main() {
    struct gpsInformation punto1, punto2;  // Declarar dos estructuras gpsInformation
    float maxDistancia;  // Distancia máxima permitida para la comparación

    // Solicitar al usuario que ingrese las coordenadas y la distancia máxima
    printf("Ingrese la latitud del primer punto: ");
    scanf("%f", &punto1.latitude);
    printf("Ingrese la longitud del primer punto: ");
    scanf("%f", &punto1.longitude);
    printf("Ingrese la altura del primer punto (en metros): ");
    scanf("%f", &punto1.height);

    printf("Ingrese la latitud del segundo punto: ");
    scanf("%f", &punto2.latitude);
    printf("Ingrese la longitud del segundo punto: ");
    scanf("%f", &punto2.longitude);
    printf("Ingrese la altura del segundo punto (en metros): ");
    scanf("%f", &punto2.height);

    printf("Ingrese la distancia máxima permitida (en grados): ");
    scanf("%f", &maxDistancia);

    // Llamar a la función respuesta para verificar si están dentro de la distancia
    int resultado = respuesta(punto1, punto2, maxDistancia);

    // Imprimir el resultado
    if (resultado == 1) {
        printf("Las ubicaciones están dentro del rango de distancia.\n");
    } else {
        printf("Las ubicaciones están fuera del rango de distancia.\n");
    }

    return 0;
}

