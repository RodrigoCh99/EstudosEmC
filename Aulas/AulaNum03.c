// ASSUNTO PRINCIPAL: CONSTANTES E VARIAVEIS

// biblioteca de input output
#include <stdio.h>   

// criando uma constante:
#define texto "Entrada e saida de dados!\n\n"

int main(){

    // definição de variavel, importante lembrar disso em C:
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("%s", texto);

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    printf("digite a sua altura: ");
    scanf("%f", &altura);

    printf("digite seu nome: ");
    scanf("%s", &nome);

    printf("Ola %s, bem vindo! ", nome);
    printf("Voce tem %d de idade e possui uma altura de %.2f", idade, altura);

    
}