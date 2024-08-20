#include <stdio.h>
#include <math.h>
int main(){
    int numero, dist10, dist100, dist1000, divisivel_proximo;
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);
    dist10 = abs(numero - 10);
    dist100 = abs(numero - 100);
    dist1000 = abs(numero - 1000);
    if (dist10 <= dist100 && dist10 <= dist1000){
        divisivel_proximo = 10;
        printf("O divisível mais próximo para o número %d é %d\n",numero, divisivel_proximo);
    } else if (dist100 <= dist10 && dist100 <= dist1000){
        divisivel_proximo = 100;
        printf("O divisível mais próximo para o número %d é %d\n",numero, divisivel_proximo);
    } else {
        divisivel_proximo = 1000;
        printf("O divisível mais próximo para o número %d é %d\n",numero, divisivel_proximo);
    } 
    return 0;
}