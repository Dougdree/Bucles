#include <stdio.h>

// Función para calcular la suma de todos los números desde 1 hasta n
int calcularSuma(int n) {
    int suma = 0;
    int i = 1;
    do {
        suma += i;
        i++;
    } while (i <= n);
    return suma;
}

int main() {
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero positivo: ");
    scanf("%d", &numero);

    // Validar que el número ingresado es positivo
    if (numero <= 0) {
        printf("Por favor, introduce un numero entero positivo.\n");
        return 1;
    }

    // Calcular la suma usando la función
    int resultado = calcularSuma(numero);

    // Imprimir el resultado
    printf("La suma de todos los numeros desde 1 hasta %d es: %d\n", numero, resultado);

    return 0;
}