#include <stdio.h>
#include <stdlib.h>

int main(){

    // Problema PS2.3: Determinar si un número es divisor de otro

    int N1, N2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &N1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &N2);

    if (N1 % N2 == 0)
        printf("N2 es divisor de N1");

    else if (N2 % N1 == 0)
        printf("N1 es divisor de N2");

    else
        printf("Ninguno es divisor del otro");

    return 0;
}
