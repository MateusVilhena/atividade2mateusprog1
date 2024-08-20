#include <stdio.h>

int main(){
    float numero1,numero2,resultado;
    char operacao;
    printf("Digite um número: ");
    scanf("%f",&numero1);
    printf("Digite a operação a ser realizada (+,-,*,/): ");
    scanf(" %c",&operacao);
    printf("Digite outro número: ");
    scanf("%f",&numero2);
    switch(operacao){
        case '+':
        resultado = numero1 + numero2;
        printf("O resultado da operação é igual a %.2f",resultado);
        break;
        case '-':
        resultado = numero1 - numero2;
        printf("O resultado da operação é igual a %.2f",resultado);
        break;
        case '*':
        resultado = numero1 * numero2;
        printf("O resultado da operação é igual a %.2f",resultado);
        break;
        case '/':
        if (numero2 != 0){
        resultado = numero1 / numero2;
        printf("O resultado da operação é igual a %.2f",resultado);
        } else {
            printf("Não é possível realizar uma divisão por zero");
        }
        break;
        default:
        printf("Nenhuma operação a ser executada");
    }
    return 0;
}