#include <stdio.h>

float central(float vetor[], int n) {
    if (n % 2 == 1) {
        return vetor[n / 2];
    } else {
        return (vetor[n / 2 - 1] + vetor[n / 2]) / 2.0;
    }
}

int main() {
    float v1[3] = {9, 8, 12};
    float v2[4] = {6, 9, 5, 10};

    printf("Central de v1 = %.2f\n", central(v1, 3));
    printf("Central de v2 = %.2f\n", central(v2, 4));
    return 0;
}
