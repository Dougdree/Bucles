#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num <= 1) {
        return 0; // Los números menores o iguales a 1 no son primos
    }

    int i = 2;
    do {
        if (num % i == 0) {
            return 0; // El número no es primo
        }
        i++;
    } while (i < num);

    return 1; // El número es primo
}

int main() {
    int numIngresado = 1000;

    // Verificar si el número ingresado es primo usando la función
    int resultado = esPrimo(numIngresado);

    // Imprimir el resultado
    if (resultado == 1) {
        printf("El numero %d es primo\n", numIngresado);
    } else {
        printf("El numero %d no es primo\n", numIngresado);
    }

    return 0;
}