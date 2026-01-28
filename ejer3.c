#include <stdio.h>

int main() {
    int n, inv = 0, dig;
    printf("Ingrese numero: ");
    scanf("%d", &n);

    while (n > 0) {
        dig = n % 10;
        inv = inv * 10 + dig;
        n = n / 10;
    }

    printf("Inverso: %d\n", inv);
    return 0;
}

