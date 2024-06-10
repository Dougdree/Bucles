#include <stdio.h>

// Función para calcular la suma de la serie hasta 1/n
double sumarSerie(int n) {
    double suma = 0.0;
    int i = 1;

    // Calcular la suma de la serie hasta 1/n usando un bucle while
    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }

    return suma;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Calcular la suma de la serie hasta 1/num
    double suma = sumarSerie(num);

    // Mostrar el resultado
    printf("La suma de la serie hasta 1/%d es: %.6f\n", num, suma);

    return 0;
}