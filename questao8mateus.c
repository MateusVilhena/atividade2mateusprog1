#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    printf("Digite um número de 1 a 7: ");
    scanf("%d",&numero);
    switch(numero){
        case 1:
        printf("O dia da semana correspondente é Domingo");
        break;
        case 2:
        printf("O dia da semana correspondente é Segunda-Feira");
        break;
        case 3:
        printf("O dia da semana correspondente é Terça-Feira");
        break;
        case 4:
        printf("O dia da semana correspondente é Quarta-Feira");
        break;
        case 5:
        printf("O dia da semana correspondente é Quinta-Feira");
        break;
        case 6:
        printf("O dia da semana correspondente é Sexta-Feira");
        break;
        case 7:
        printf("O dia da semana correspondente é Sábado");
        break;
        default:
        printf("Número inválido");
        break;
    }
    return 0;
}