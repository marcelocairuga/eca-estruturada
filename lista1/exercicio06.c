#include <stdio.h>

float menor(float a, float b) {
    if (a < b) return a;
    return b;
    // return (a < b) ? a : b;
}

int main() {
    float valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("O menor valor é %.2f\n", menor(valor1, valor2));
    return 0;
}
