#include <stdio.h>

int main(){
    int total_horas;
    float custo_total = 0.0;
    printf("Digite o total de horas em que o carro ficou estacionado: ");
    scanf("%d",&total_horas);
    if (total_horas <= 2){
        custo_total = total_horas * 5.0;
    } else if (total_horas >= 3 && total_horas <= 5){
        custo_total = 2 * 5.0 + (total_horas - 2) * 3.0;
    } else {
        custo_total = 2 * 5.0 + 3 * 3.0 + (total_horas - 5) * 2.0;
    }
    printf("O custo total do carro no estacionamento é de: R$%.2f\n", custo_total);
    return 0;
}