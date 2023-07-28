// biblioteca de input output
#include <stdio.h>   

int main(){

    float m;

    printf("Insira uma nota: ");
    scanf("%f", &m);

    if (m > 6.0) {
        printf("aprovado");
    };

}