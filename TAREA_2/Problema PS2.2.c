#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;

    printf("Ingrese el salario: ");
    scanf("%f", &salario);

    if (salario < 18000)
    salario = salario + salario * 0.12;

    else if (salario <= 30000)
    salario = salario + salario * 0.08;

    else if (salario <= 50000)
    salario = salario + salario * 0.07;

    else
    salario = salario + salario * 0.06;

    printf("Nuevo salario: %.2f", salario);

    return 0;
}
