#include <stdio.h>

float media(float a, float b) {
    return (a + b) / 2;
}

int main() {
    float n1, n2;
    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    printf("A média é %.2f\n", media(n1, n2));
    return 0;
}