#include <stdio.h>

// Función para calcular el p-ésimo número triangular
int calcularNumeroTriangular(int p) {
    int numero_triangular = 0;
    int i = 1;

    // Calcular el número triangular usando un bucle while
    while (i <= p) {
        numero_triangular += i;
        i++;
    }

    return numero_triangular;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular el p-ésimo número triangular
    int numero_triangular = calcularNumeroTriangular(num);

    // Mostrar el resultado
    printf("El %d-esimo numero triangular es: %d\n", num, numero_triangular);

    return 0;
}