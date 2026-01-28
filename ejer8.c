// Ejercicio 8: Validador de contraseña
#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];
    int may = 0, min = 0, dig = 0, esp = 0;

    printf("Ingrese contraseña: ");
    scanf("%s", pass);

    for (int i = 0; i < strlen(pass); i++) {
        if (pass[i] >= 'A' && pass[i] <= 'Z') may = 1;
        else if (pass[i] >= 'a' && pass[i] <= 'z') min = 1;
        else if (pass[i] >= '0' && pass[i] <= '9') dig = 1;
        else if (pass[i]=='!'||pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%') esp = 1;
    }

    if (strlen(pass) >= 8 && may && min && dig && esp)
        printf("Contrasena VALIDA\n");
    else
        printf("Contrasena INVALIDA\n");

    return 0;
}
