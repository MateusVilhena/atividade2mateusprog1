#include <stdio.h>

int main(){
    float valor_inicial, desconto, valor_final;
    printf("Digite o valor inicial de uma compra: R$");
    scanf("%f",&valor_inicial);
    if (valor_inicial <= 100){
        desconto = 0.05;
    } else if (valor_inicial >= 101 && valor_inicial <= 500){
        desconto = 0.10;
    } else {
        desconto = 0.15;
    } 
    valor_final = valor_inicial * (1 - desconto);
    printf ("O valor final da compra é de: R$%.2f\n",valor_final);
    return 0;
}