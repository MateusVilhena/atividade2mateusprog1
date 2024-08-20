#include <stdio.h>

int main()
{
    int clima;
    float temperatura;
    printf("Digite o clima do dia de hoje\n1.Ensolarado\n2.Nublado\n3.Chuvoso\n");
    scanf("%d",&clima);
    printf("Digite a temperatura atual em graus Celsius: ");
    scanf("%d",&temperatura);
    switch(clima)
    {
        case 1:
        if (temperatura>25){
        printf("Você pode fazer atividades ao ar livre como ir à praia ou fazer um piquenique");
        }
        else if(temperatura>=15&&temperatura<=25){
        printf("Você pode fazer caminhadas ou passear de bicicleta");
        }
        else {
        printf("Você pode fotografar a natureza ou observar os pássaros");
        }
        break;
        case 2:
        if (temperatura>20){
        printf("Você pode visitar museus ou fazer compras em centros comercais ao ar livre");
        }
        else if(temperatura>=10&&temperatura<=20){
        printf("Você pode fazer passeios culturais, em lugares como galerias de arte ou teatros");
        }
        else {
        printf("Você pode fazer leitura em bibliotecas ou ir a uma sessão de cinema");
        }
        break;
        case 3:
        if (temperatura>15){
        printf("Você pode visitar um spa ou fazer aulas de culinária");
        }
        else if(temperatura>=5&&temperatura<=15){
        printf("Você visitar museus de ciência ou ir à sessões de boliche");
        }
        else {
        printf("Você pode fazer uma tarde de jogos de tabuleiro em casa ou uma maratona de filmes");
        }
        default:
        break;
    }
    return 0;
}