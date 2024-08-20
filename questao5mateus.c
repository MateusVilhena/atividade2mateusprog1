#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero,resto;
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);
    resto = numero%5;
    if (resto==0)
    printf("\nO número %d é múltiplo de 5\n",numero);
    else printf("\nO número %d não é múltiplo de 5\n",numero);
    return 0;
}