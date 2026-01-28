// Ejercicio 4: Menu de operaciones
#include <stdio.h>

int main() {
    int op;
    float a, b;

    do {
        printf("1 Suma\n2 Resta\n3 Mult\n4 Div\n0 Salir\n");
        scanf("%d", &op);

        if (op >= 1 && op <= 4) {
            scanf("%f %f", &a, &b);
        }

        switch (op) {
            case 1: printf("%.2f\n", a+b); break;
            case 2: printf("%.2f\n", a-b); break;
            case 3: printf("%.2f\n", a*b); break;
            case 4:
                if (b == 0) printf("Error\n");
                else printf("%.2f\n", a/b);
                break;
        }
    } while (op != 0);

    return 0;
}
