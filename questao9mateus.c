#include <stdio.h>
#include <stdlib.h>
int main(){
    int nota;
    printf("Digite a nota de uma prova: ");
    scanf("%d",&nota);
    if (nota>=80&&nota<=100){
        printf("Sua nota foi excelente, meus parabéns!");
    }
    else if(nota>=60&&nota<=79){
        printf("Sua nota foi boa");
    }
    else if (nota>=40&&nota<=59){
        printf("Sua nota foi suficiente");
    }
    else if(nota<40) {
        printf("Sua nota foi insuficiente, estude mais");
    }
    return 0;
}