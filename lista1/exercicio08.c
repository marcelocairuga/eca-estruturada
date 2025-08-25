#include <stdio.h>

float mediaPonderada(float v1, float v2, int p1, int p2) {
    return (v1 * p1 + v2 * p2) / (float)(p1 + p2);
}

int main() {
    float v1, v2;
    int p1, p2;

    printf("Digite dois valores: ");
    scanf("%f %f", &v1, &v2);
    printf("Digite os respectivos pesos: ");
    scanf("%d %d", &p1, &p2);

    printf("A média ponderada é %.2f\n", mediaPonderada(v1, v2, p1, p2));
    return 0;
}