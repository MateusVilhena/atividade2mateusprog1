#include <stdio.h>
#include <stdlib.h>
int main(){
    float numero;
    printf("Digite um numero: ");
    scanf("%f",&numero);
    if (numero>=1&&numero<=100)
    printf("\nO número está entre 1 e 100\n");
    else printf("\nO número não está entre 1 e 100\n");
    return 0;
}