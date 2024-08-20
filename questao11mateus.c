#include <stdio.h>

int main(){
    int lado1, lado2, lado3;
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d",&lado1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d",&lado2);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d",&lado3);
    if ((lado1 + lado2 > lado3) && (lado2 + lado3 > lado1) && (lado3 + lado1 > lado2)){
        if(lado1 == lado2 && lado2 == lado3){
            printf("O triângulo é equilátero");
        } else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf("O triângulo é isósceles");
        } else {
            printf("O triângulo é escaleno");
        }
    } else {
        printf("Os números inseridos não formam um triângulo");
    }
    return 0;
}