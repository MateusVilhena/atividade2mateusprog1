#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);
    if (numero==0)
    printf("\nO número %d é nulo\n",numero);
    if (numero<0)
    printf("\nO número %d é negativo\n",numero);
    if (numero>0)
    printf("\nO número %d é positivo\n",numero);
    return 0;
}