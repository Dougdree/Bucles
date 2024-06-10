#include <stdio.h>

// Función para calcular el factorial de un número
unsigned long long calcularFactorial(int n) {
    unsigned long long factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= n);
    return factorial;
}

int main() {
    int m;

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero no negativo: ");
    scanf("%d", &m);

    // Validar la entrada para asegurarnos de que no es un número negativo
    if (m < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    // Calcular el factorial usando la función
    unsigned long long resultado = calcularFactorial(m);

    // Imprimir el resultado
    printf("El factorial de %d es: %llu\n", m, resultado);

    return 0;
}