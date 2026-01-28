//Ejercicio 2: Conversion de calificacion
#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingrese la calificacion (0 a 20): ";
    cin >> nota;

    switch (nota) {
        case 20: case 19: case 18:
            cout << "A- EXCELENTE";
            break;

        case 17: case 16: case 15:
            cout << "B- MUY BUENO";
            break;

        case 14: case 13: case 12: case 11:
            cout << "C- BUENO";
            break;

        case 10: case 9: case 8:
            cout << "D- REGULAR";
            break;

        case 7: case 6: case 5: case 4:
        case 3: case 2: case 1: case 0:
            cout << "F- DESAPROBADO";
            break;

        default:
            cout << "Error: calificacion fuera de rango";
    }

    return 0;
}
