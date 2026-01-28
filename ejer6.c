#include <stdio.h>
// Ejercicio 6: Numero perfecto
int main() {
    int n, suma = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Numero invalido\n");
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            suma += i;
        }
    }

    printf("\nSuma: %d\n", suma);

    if (suma == n)
        printf("El numero es PERFECTO\n");
    else
        printf("El numero NO es perfecto\n");

    return 0;
}

