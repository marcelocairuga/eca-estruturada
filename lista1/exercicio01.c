#include <stdio.h>

// Função soma: recebe dois inteiros e retorna a soma deles
int soma(int a, int b) {
    return a + b;
}

int main() {
    int s1, s2, s3, s4, s5;

    // b) soma(7, 5)
    s1 = soma(7, 5);
    printf("s1 = %d\n", s1); // 12

    // c) soma(-3, 10)
    s2 = soma(-3, 10);
    printf("s2 = %d\n", s2); // 7

    // d) soma(s1, 8)
    s3 = soma(s1, 8);
    printf("s3 = %d\n", s3); // 20

    // e) soma((3 * 4) + 5, s2)
    s4 = soma((3 * 4) + 5, s2);
    printf("s4 = %d\n", s4); // 24

    // f) soma(soma(3, 4), soma(s1, s2))
    s5 = soma(soma(3, 4), soma(s1, s2));
    printf("s5 = %d\n", s5); // 26

    // g) imprimir diretamente sem variável
    printf("soma(10, 20) = %d\n", soma(10, 20)); // 30

    // h) Se você escrever apenas soma(2, 3); em uma linha, 
    // a função será chamada, o cálculo será feito,
    // mas o resultado será descartado. Nada aparecerá na tela.

    // i) soma(soma(7, soma(3,2)), 8 - soma(4, 1)) 
    //    soma(soma(7, 5), 8 - 5)
    //    soma(12, 3)
    //    15
    printf("soma(soma(7, soma(3,2)), 8 - soma(4, 1)) = %d\n", 
        soma(soma(7, soma(3,2)), 8 - soma(4, 1))); // 15
  
    // j) como os parâmetros da função são inteiros,
    // quando chamamos soma(2.5, 3.2) usando valores decimais
    // o C vai implicicitamente converter para inteiro
    // descartando a parte decimal e o resultado não será o esperado!
    return 0;
}
