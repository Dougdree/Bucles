#include <stdio.h>

// Función para calcular la suma de los cubos de los primeros n números
int sumarCubos(int n) {
    int suma_cubos = 0;
    int i = 1;

    // Calcular la suma de los cubos de los primeros n números
    do {
        suma_cubos += i * i * i;
        i++;
    } while (i <= n);

    return suma_cubos;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Calcular la suma de los cubos de los primeros num números
    int suma_cubos = sumarCubos(num);

    // Mostrar el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", num, suma_cubos);

    return 0;
}