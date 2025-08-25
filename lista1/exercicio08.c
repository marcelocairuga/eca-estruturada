#include <stdio.h>

float mediaPonderada(float v1, float v2, int p1, int p2) {
    return (v1 * p1 + v2 * p2) / (float)(p1 + p2);
}

int main() {
    float valor1, valor2;
    int peso1, peso2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("Digite o primeiro peso: ");
    scanf("%d", &peso1);    
    printf("Digite o segundo peso: ");
    scanf("%d", &peso2);

    printf("A média ponderada é %.2f\n", mediaPonderada(valor1, valor2, peso1, peso2));
    return 0;
}
