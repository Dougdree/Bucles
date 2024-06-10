#include <stdio.h>

// Función para multiplicar dos números usando sumas sucesivas
int multiplicacionSucesiva(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; ++i) {
        resultado += a;
    }
    return resultado;
}

// Función para calcular la potencia usando sumas sucesivas
int potenciaSucesiva(int base, int exponente) {
    int resultado = base;
    // Iteramos exponente - 1 veces ya que ya tenemos la base inicial
    for (int i = 1; i < exponente; ++i) {
        resultado = multiplicacionSucesiva(resultado, base);
    }
    return resultado;
}

int main() {
    int base = 2;
    int exponente = 3;
    int resultado = potenciaSucesiva(base, exponente);
    printf("%d^%d = %d\n", base, exponente, resultado);
    return 0;
}