#include <stdio.h>

void real(float valor) {
    printf("R$ %.2f\n", valor);
}

int main() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);

    real(valor);
    return 0;
}
