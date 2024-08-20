#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    if (idade>=18)
    printf("\nO usuário está apto para votar\n");
    else printf("\nO usuário não está apto para votar\n");
    return 0;
}