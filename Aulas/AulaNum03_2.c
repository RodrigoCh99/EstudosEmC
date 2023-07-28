// ASSUNTO PRINCIPAL: OPERADORES ARITMETICOS

// biblioteca de input output
#include <stdio.h>   

int main(){

    int A, B, SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO;

    printf("digite o primeiro valor: ");
    scanf("%d", &A);
    printf("digite o segundo valor: ");
    scanf("%d", &B);

    SOMA = A + B;
    SUBTRACAO = A - B;
    MULTIPLICACAO = A * B;
    DIVISAO = A / B;

    printf("Resultados:\n\n");
    printf("|SOMA: %d| SUBt: %d| MULT: %d| DIV: %d\n\n", SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO);

}