#include <stdio.h>

// Función para generar y mostrar la serie geométrica
void generarSerieGeometrica(int terminos) {
    int producto = 2;
    for (int i = 0; i < terminos; ++i) {
        printf("%d", producto);
        if (i < terminos - 1) {
            printf(", "); // Añadir una coma y un espacio entre los números
        }
        producto *= 2;
    }
    printf("\n"); // Nueva línea al final
}

int main() {
    // Pedir al usuario que ingrese la cantidad de términos
    int numero;
    printf("Introduce la cantidad de terminos de la serie geometrica: ");
    scanf("%d", &numero);

    // Generar y mostrar la serie geométrica usando la función
    generarSerieGeometrica(numero);

    return 0;
}