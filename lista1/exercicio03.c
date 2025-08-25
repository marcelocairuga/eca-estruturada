#include <stdio.h>

float triplo(float valor) {
    return 3 * valor;
}

int main() {
    float numero;
    printf("Informe um número: ");
    scanf("%f", &numero);

    printf("O triplo de %.2f é %.2f\n", numero, triplo(numero));
    return 0;
}
