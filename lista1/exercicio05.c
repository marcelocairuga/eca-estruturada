#include <stdio.h>

float maior(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    float n1, n2;
    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    printf("O maior valor é %.2f\n", maior(n1, n2));
    return 0;
}