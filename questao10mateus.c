#include <stdio.h>
#include <stdlib.h>
int main(){
    int velocidade;
    printf("Digite a sua velocidade em km/h: ");
    scanf("%d",&velocidade);
    if (velocidade<30){
        printf("Sua velocidade é baixa");
    }
    else if(velocidade>=30&&velocidade<60){
        printf("Sua velocidade é média");
    }
    else if (velocidade>60){
        printf("Sua velocidade é alta");
    }
    return 0;
}