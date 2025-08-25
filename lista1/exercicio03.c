#include <stdio.h>

float triplo(float n) {
    return 3 * n;
}

int main() {
    float valor;
    printf("Informe um valor decimal: ");
    scanf("%f", &valor);

    printf("O triplo de %.2f é %.2f\n", valor, triplo(valor));
    return 0;
}