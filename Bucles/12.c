#include <stdio.h>

// Función para sumar todos los números impares hasta n
int sumarImparesHasta(int n) {
    int suma_impares = 0;
    int ultimo_impar = (n % 2 == 0) ? n - 1 : n;

    // Sumar todos los números impares desde 1 hasta el último número impar
    for (int i = 1; i <= ultimo_impar; i += 2) {
        suma_impares += i;
    }

    return suma_impares;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular la suma de todos los números impares hasta el número ingresado
    int suma_impares = sumarImparesHasta(num);

    // Mostrar el resultado
    printf("La suma de todos los numeros impares hasta %d es: %d\n", num, suma_impares);

    return 0;
}