// E1: Suma de numeros pares
#include <stdio.h>

int main() {
    int N, suma = 0;

    // Entrada de datos
    printf("Ingrese un numero N: ");
    scanf("%d", &N);

    // Proceso: sumar numeros pares
    for (int i = 2; i <= N; i += 2) {
        suma += i;
    }

    // Salida de datos
    printf("La suma de los numeros pares entre 1 y %d es: %d\n", N, suma);

    return 0;
}