#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

double operar(double num1, double num2, char operacion) {
    switch (operacion) {
        case '1':
            return num1 + num2;
        case '2':
            return num1 - num2;
        case '3':
            return num1 * num2;
        case '4':
            if (num2 != 0.0) {
                return num1 / num2;
            } else {
                printf("Error: division por cero\n");
                exit(0);
                return 0.0;
            }
        case '5':
            return fmod(num1, num2);
        default:
            printf("Esta opcion no existe\n");
            exit(1);
            return 0.0;
    }
}

int main() {
    // Para compilar y ejecutar el programa:
    // $ gcc calculator.c -lm

    bool terminate = false;
    double num1, num2, result;
    char operacion;

    do {
        printf("\n1. suma \n2. resta \n3. multiplicacion \n4. division \n5. modulo\n9. salir\n");
        printf("\nIngresa que operacion quieres realizar: ");
        scanf(" %c", &operacion);  // Nota el espacio antes de %c para limpiar el buffer

        if (operacion == '9') {
            terminate = true;
            break; // Salimos del bucle si el usuario elige salir
        }

        printf("Ingresa el primer numero: ");
        scanf("%lf", &num1);

        printf("Ingresa el segundo numero: ");
        scanf("%lf", &num2);

        result = operar(num1, num2, operacion);
        printf("\n\nEl resultado es: %lf\n\n", result);

    } while (!terminate);

    return 0;
}
