#include <stdio.h>

// Función para contar el número de dígitos de un número
int contarDigitos(int num) {
    int digitos = 0;

    // Validar si el número es 0
    if (num == 0) {
        return 1;
    }

    // Convertir el número a positivo si es negativo
    if (num < 0) {
        num = -num;
    }

    // Contar el número de dígitos usando un bucle for
    for (int temp = num; temp > 0; temp /= 10) {
        digitos++;
    }

    return digitos;
}

int main() {
    int num1;

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero: ");
    scanf("%d", &num1);

    // Calcular el número de dígitos usando la función
    int resultado = contarDigitos(num1);

    // Imprimir el resultado
    printf("El numero de digitos es: %d\n", resultado);

    return 0;
}