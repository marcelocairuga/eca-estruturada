#include <stdio.h>
#include <math.h>

int soma(int a, int b) { return a + b; }
int diferenca(int a, int b) { return a - b; }
int produto(int a, int b) { return a * b; }
int quociente(int a, int b) { return a / b; }
int resto(int a, int b) { return a % b; }
int potencia(int a, int b) { return (int)pow(a, b); }

void calcular(int a, int b) {
    printf("Operações com %d e %d:\n", a, b);
    printf("- %d mais %d é igual a %d;\n", a, b, soma(a, b));
    printf("- %d menos %d é igual a %d;\n", a, b, diferenca(a, b));
    printf("- %d vezes %d é igual a %d;\n", a, b, produto(a, b));
    printf("- %d dividido por %d é igual a %d;\n", a, b, quociente(a, b));
    printf("- O resto da divisão de %d por %d é igual a %d;\n", a, b, resto(a, b));
    printf("- %d elevado na %d é igual a %d;\n", a, b, potencia(a, b));
}

int main() {
    calcular(5, 3);
    return 0;
}