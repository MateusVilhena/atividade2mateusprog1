#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero, resto;
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);
    resto = numero%2;
    if (resto==0)
    printf("\nO número %d é par\n",numero);
    else printf("\nO número %d é ímpar\n",numero);
    return 0;
}