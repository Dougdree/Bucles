#include <stdio.h>

// Función para calcular la raíz cúbica mediante restas sucesivas
int raizCubicaRestasSucesivas(int numero) {
    int resultado = 0;
    int cuboActual = 0;

    // Bucle para encontrar la raíz cúbica aproximada mediante restas sucesivas
    while (cuboActual < numero) {
        resultado++;
        cuboActual = resultado * resultado * resultado;
        if (cuboActual == numero) {
            return resultado; // Encontramos la raíz cúbica exacta
        }
    }

    return -1; // No tiene raíz cúbica exacta
}

int main() {
    int numero = 27; // Número del cual se calculará la raíz cúbica
    int resultado;

    // Calcular la raíz cúbica utilizando la función
    resultado = raizCubicaRestasSucesivas(numero);

    // Mostrar el resultado
    if (resultado == -1) {
        printf("El numero %d no tiene una raiz cubica exacta.\n", numero);
    } else {
        printf("La raiz cubica de %d es: %d\n", numero, resultado);
    }

    return 0;
}