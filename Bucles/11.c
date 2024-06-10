#include <stdio.h>

// Función para encontrar el mayor divisor común (MCD) de dos números
int calcularMCD(int a, int b) {
    int menor = (a < b) ? a : b; // Encontrar el menor de los dos números
    int mcd = 1; // Inicializar el MCD en 1

    // Usar un bucle for para encontrar el mayor divisor común
    for (int i = 1; i <= menor; ++i) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }

    return mcd;
}

int main() {
    int num1 = 54, num2 = 24;

    // Calcular el MCD usando la función
    int mcd = calcularMCD(num1, num2);

    // Imprimir el resultado
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0;
}