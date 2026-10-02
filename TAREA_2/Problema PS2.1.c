#include <stdio.h>

// Problema PS2.1: Calcular la temperatura de acuerdo a los sonidos del grillo

int main() {

    int S, FA;

    printf("Ingrese el numero de sonidos por minuto: ");
    scanf("%d", &S);

    FA = S / 4 + 40;

    printf("La temperatura es: %d grados Fahrenheit\n", FA);

    return 0;
}
