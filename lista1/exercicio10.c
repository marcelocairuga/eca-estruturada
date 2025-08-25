#include <stdio.h>

void lerNumero() {
    int n;
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    printf("Você informou o número %d.\n", n);
}

int main() {
    int qtd;
    printf("Quantos números deseja informar? ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        lerNumero();
    }
    return 0;
}