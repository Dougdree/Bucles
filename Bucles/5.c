#include <stdio.h>

// Función para imprimir la serie de Fibonacci hasta n elementos
void imprimirSerieFibonacci(int n) {
    int primero = 0, segundo = 1, siguiente;

    // Imprimimos los primeros dos números de la serie
    printf("Serie de Fibonacci de %d elementos:\n", n);
    if (n >= 1) printf("%d", primero);
    if (n >= 2) printf(", %d", segundo);

    for (int i = 2; i < n; ++i) {
        siguiente = primero + segundo;
        printf(", %d", siguiente);
        primero = segundo;
        segundo = siguiente;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el numero de la cantidad de la serie Fibonacci que desea imprimir: "); // Pido al usuario que ingrese el valor de n
    scanf("%d", &n);

    // Llamamos a la función para imprimir la serie de Fibonacci
    imprimirSerieFibonacci(n);

    return 0;
}