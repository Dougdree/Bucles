#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num <= 1) {
        return 0; // 1 y números negativos no son primos
    }
    if (num <= 3) {
        return 1; // 2 y 3 son primos
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Números divisibles por 2 o 3 no son primos
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // Números divisibles por i o i+2 no son primos
        }
    }
    return 1; // Si no se cumplen las condiciones anteriores, es primo
}

int main() {
    int h;
    int contador_primos = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &h);

    // Calcular cuántos números primos hay desde 1 hasta h
    for (int i = 2; i <= h; ++i) {
        if (esPrimo(i)) {
            contador_primos++;
        }
    }

    // Mostrar el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador_primos, h);

    return 0;
}