#include <stdio.h>

// Función para calcular el producto de la serie hasta 1/n
double calcularProductoSerie(int n) {
    double producto = 1.0;

    // Calcular el producto de la serie hasta 1/n
    for (int i = 1; i <= n; ++i) {
        producto *= 1.0 / i;
    }

    return producto;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular el producto de la serie hasta 1/num
    double producto = calcularProductoSerie(num);

    // Mostrar el resultado
    printf("El producto de la serie hasta 1/%d es: %.6f\n", num, producto);

    return 0;
}