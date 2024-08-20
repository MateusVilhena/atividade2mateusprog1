#include <stdio.h>

int main(){
    int tipo_evento, assentos, capacidade_disponivel;
    int capacidade_concerto = 500; 
    int capacidade_teatro = 200;
    int capacidade_evento_esportivo = 1000; 
    int capacidade_conferencia = 300;
    printf("Digite o tipo de evento que você deseja participar:\n1.Concerto (500 assentos)\n2.Teatro (200 assentos)\n3.Evento Esportivo (1000 assentos)\n4.Conferência (300 assentos)\nEvento escolhido: ");
    scanf("%d",&tipo_evento);
    switch(tipo_evento){
        case 1:
        capacidade_disponivel = capacidade_concerto;
        break;
        case 2:
        capacidade_disponivel = capacidade_teatro;
        break;
        case 3:
        capacidade_disponivel = capacidade_evento_esportivo;
        break;
        case 4:
        capacidade_disponivel = capacidade_conferencia;
        break;
        default:
        printf ("Evento indisponível");
        return 1;
    }
    printf("Qual a quantidade de assentos que você irá reservar? ");
    scanf("%d",&assentos);
    if (assentos <= capacidade_disponivel){
        printf("Reserva feita, %d assentos já estão reservados.\n", assentos);
        capacidade_disponivel -= assentos;
    } else {
        printf("Perdão cliente, não temos mais assentos suficientes disponibilizados.\n");
    }
    printf("Estamos com %d assentos restantes\n", capacidade_disponivel);
    return 0;
}