#include <stdio.h>

// Función para convertir un número entero a una cadena de caracteres
void convertir_a_cadena(int numero, char *cadena) {
    sprintf(cadena, "%d", numero);
}

// Función para sumar los dígitos de un número representado como cadena de caracteres
int sumar_digitos(const char *cadena) {
    int suma = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        suma += cadena[i] - '0';
    }
    return suma;
}

int main() {
    int dato = 12567;
    char str[10];
    
    // Convertir el número a cadena de caracteres
    convertir_a_cadena(dato, str);
    
    // Sumar los dígitos del número
    int suma2 = sumar_digitos(str);

    printf("La suma de los digitos de %d es %d \n", dato, suma2);

    return 0;
}