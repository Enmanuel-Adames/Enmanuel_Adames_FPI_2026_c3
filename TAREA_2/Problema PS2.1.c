#include <stdio.h>

int main() {

    int S, FA;

    printf("Ingrese el numero de sonidos por minuto: ");
    scanf("%d", &S);

    FA = S / 4 + 40;

    printf("La temperatura es: %d grados Fahrenheit\n", FA);

    return 0;
}
