#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Digite o seu peso em kg: ");
    scanf("%f",&peso);
    printf("Digite a sua altura em metros: ");
    scanf("%f",&altura);
    imc = peso /(altura * altura);
    if (imc < 18.5){
        printf("Você está abaixo do peso");
    } else if (imc >= 18.5 && imc <= 24.9){
        printf("Seu peso está normal");
    } else if (imc >= 25.0 && imc <= 29.9){
        printf("Você está com sobrepeso");
    } else {
        printf("Você está obeso");
    }
    return 0;
}