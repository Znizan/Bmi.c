#include <stdio.h>

int main(void) {   
    int peso;
    float altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%d", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura * altura);

    printf("Su índice de masa corporal es: %.2f\n", bmi);

    printf("\nTabla de referencia:\n");
    printf("<18.5        | Bajo peso\n");
    printf("18.5 - 24.9  | Normal\n");
    printf("25.0 - 29.9  | Sobrepeso\n");
    printf(">=30.0       | Obesidad\n");

    return 0;
}
