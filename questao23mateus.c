#include <stdio.h>

int main(){
    int horario_dia, nivel_trafego, tempo_verde, tempo_amarelo, tempo_vermelho;

    printf("Digite o horário atual do dia:\n1.Manhã\n2.Tarde\n3.Noite\n");
    scanf("%d",&horario_dia);
    printf("Digite o nível do tráfego atual:\n1.Baixo\n2.Médio\n3.Alto\n");
    scanf("%d",&nivel_trafego);
    switch(horario_dia){
        case 1:
        printf("O horário atual é de manhã\n");
        if (nivel_trafego == 1){
        tempo_verde = 40;
        tempo_amarelo = 5;
        tempo_vermelho = 45;
    } else if (nivel_trafego == 2){
        tempo_verde = 50;
        tempo_amarelo = 5;
        tempo_vermelho = 35;
    } else if (nivel_trafego == 3){
        tempo_verde = 60;
        tempo_amarelo = 5;
        tempo_vermelho = 25;
    } break;
        case 2:
        printf("O horário atual é de tarde\n");
    if (nivel_trafego == 1){
        tempo_verde = 30;
        tempo_amarelo = 5;
        tempo_vermelho = 45;
    } else if (nivel_trafego == 2){
        tempo_verde = 40;
        tempo_amarelo = 5;
        tempo_vermelho = 35;
    } else if (nivel_trafego == 3){
        tempo_verde = 50;
        tempo_amarelo = 5;
        tempo_vermelho = 25;
    } break;
        case 3:
        printf("O horário atual é de noite\n");
    if (nivel_trafego == 1){
        tempo_verde = 20;
        tempo_amarelo = 5;
        tempo_vermelho = 55;
    } else if (nivel_trafego == 2){
        tempo_verde = 30;
        tempo_amarelo = 5;
        tempo_vermelho = 45;
    } else if (nivel_trafego == 3){
        tempo_verde = 40;
        tempo_amarelo = 5;
        tempo_vermelho = 35;
    } break;
    default:
        printf("O horário é inválido");
        return 1;
    }
    printf("Os tempos de cada sinal do semáforo estão ajustados: \n");
    printf("São %d segundos no sinal verde\n",tempo_verde);
    printf("São %d segundos no sinal amarelo\n",tempo_amarelo);
    printf("São %d segundos no sinal vermelho\n",tempo_vermelho);
    return 0;
}