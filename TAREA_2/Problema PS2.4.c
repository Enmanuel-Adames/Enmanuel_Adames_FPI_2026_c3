#include <stdio.h>
#include <stdlib.h>

int main(){

    // Problema PS2.4: Determinar si tres numeros estan en orden creciente

    int N1, N2, N3;

    printf("Ingrese el primer numero:");
    scanf("%d", &N1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &N2);

    printf("Ingrese el tercer numero:");
    scanf("%d", &N3);

    if (N1 < N2 && N2 < N3)
        printf("Los numeros estan en orden creciente");
    else
        printf("Los numeros no estan en orden creciente");

    return 0;
}
