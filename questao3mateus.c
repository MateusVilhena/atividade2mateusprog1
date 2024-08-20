#include <stdio.h>
#include <stdlib.h>
int main(){
    int temperatura;
    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%d",&temperatura);
    if (temperatura>30)
    printf("\nA temperatura é considerada quente\n");
    else printf("\nA temperatura é considerada fria\n");
    return 0;
}