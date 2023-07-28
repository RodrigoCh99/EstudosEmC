// biblioteca de input output
#include <stdio.h>   

int main(){

    // definição de variavel, importante lembrar disso em C:
    int idade = 0;

    printf("Esse programa mostra a idade que atualmente e %d! \n\n", idade);
    printf("insira o novo valor para a idade: ");
    scanf("%d", &idade);
    printf("Idade: %d", idade);

    return 0;
}