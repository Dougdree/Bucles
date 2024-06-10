#include <stdio.h>

// Función para sumar todos los números pares hasta n
int sumarParesHasta(int n) {
    int suma_pares = 0;
    int ultimo_par = (n % 2 == 0) ? n : n - 1;

    // Sumar todos los números pares desde 2 hasta el último número par
    for (int i = 2; i <= ultimo_par; i += 2) {
        suma_pares += i;
    }

    return suma_pares;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular la suma de todos los números pares hasta el número ingresado
    int suma_pares = sumarParesHasta(num);

    // Mostrar el resultado
    printf("La suma de todos los numeros pares hasta %d es: %d\n", num, suma_pares);

    return 0;
}