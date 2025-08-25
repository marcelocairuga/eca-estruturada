#include <stdio.h>

int comparar(int a, int b) {
    if (a == b) return 0;
    else if (a < b) return -1;
    else return 1;
}

int main() {
    int x, y;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);

    int resultado = comparar(x, y);

    if (resultado == 0)
        printf("Os valores são iguais.\n");
    else if (resultado == -1)
        printf("O primeiro valor é menor que o segundo.\n");
    else
        printf("O primeiro valor é maior que o segundo.\n");

    return 0;
}