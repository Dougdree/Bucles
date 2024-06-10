#include <stdio.h>

// Función para convertir un número entero a una cadena de caracteres
void convertir_a_cadena(int numero, char *cadena) {
    sprintf(cadena, "%d", numero);
}

// Función para encontrar la longitud de una cadena de caracteres
int longitud_cadena(const char *cadena) {
    int longitud;
    for (longitud = 0; cadena[longitud] != '\0'; ++longitud);
    return longitud;
}

// Función para imprimir una cadena de caracteres en orden inverso
void imprimir_inverso(const char *cadena) {
    int longitud = longitud_cadena(cadena);
    for (int i = longitud - 1; i >= 0; --i) {
        printf("%c", cadena[i]);
    }
}

int main() {
    int number = 12567;  // Declaramos el número que queremos invertir
    char str[10];

    // Convertimos el número a una cadena de caracteres
    convertir_a_cadena(number, str);

    // Imprimimos el número en orden inverso
    printf("El numero %d al reves es: ", number);
    imprimir_inverso(str);
    printf("\n");  // Nueva línea al final

    return 0;
}