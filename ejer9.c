// E9: Conversion de Bases
#include <stdio.h>

int main() {
    int n, base, r;
    char digitos[] = "0123456789ABCDEF";
    char res[50];
    int i = 0;

    printf("Numero decimal: ");
    scanf("%d", &n);

    printf("Base (2,8,16): ");
    scanf("%d", &base);

    while (n > 0) {
        r = n % base;
        res[i++] = digitos[r];
        n /= base;
    }

    printf("Resultado: ");
    for (int j = i-1; j >= 0; j--)
        printf("%c", res[j]);

    return 0;
}
