#include <stdio.h>

// Función para calcular la suma de los cuadrados de los primeros n números
int sumarCuadrados(int n) {
    int suma_cuadrados = 0;
    int i = 1;

    // Sumar los cuadrados de los primeros n números usando un bucle while
    while (i <= n) {
        suma_cuadrados += i * i;
        i++;
    }

    return suma_cuadrados;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular la suma de los cuadrados de los primeros num números
    int suma_cuadrados = sumarCuadrados(num);

    // Mostrar el resultado
    printf("La suma de los cuadrados de los primeros %d numeros es: %d\n", num, suma_cuadrados);

    return 0;
}