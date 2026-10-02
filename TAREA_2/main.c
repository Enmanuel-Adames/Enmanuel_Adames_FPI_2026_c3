#include <stdio.h>
#include <stdlib.h>

int main(){

    // Problema PS2.5: Calcular el precio con descuento

    float COM;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &COM);

    if (COM < 800)
        COM = COM;

    else if (COM <= 1500)
        COM = COM - COM * 0.10;

    else if (COM <= 5000)
        COM = COM - COM * 0.15;

    else
        COM = COM - COM * 0.20;

    printf("Precio a pagar: %.2f", COM);

    return 0;
}
