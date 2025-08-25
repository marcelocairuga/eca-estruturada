#include <stdio.h>

float media(float a, float b) {
    return (a + b) / 2;
}

int main() {
    float valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("A média é %.2f\n", media(valor1, valor2));
    return 0;
}
