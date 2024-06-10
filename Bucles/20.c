#include <stdio.h>

// Función para calcular el factorial de un número
int calcularFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

// Función para calcular la suma de los factoriales de los primeros n números
int calcularSumaFactoriales(int n) {
    int suma_factoriales = 0;
    for (int i = 1; i <= n; ++i) {
        suma_factoriales += calcularFactorial(i);
    }
    return suma_factoriales;
}

int main() {
    int nmi;

    // Solicitar al usuario que ingrese cuántos números desea calcular
    printf("Ingrese cuantos numeros desea calcular: ");
    scanf("%d", &nmi);

    // Calcular la suma de los factoriales de los primeros nmi números
    int suma_factoriales = calcularSumaFactoriales(nmi);

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", nmi, suma_factoriales);

    return 0;
}