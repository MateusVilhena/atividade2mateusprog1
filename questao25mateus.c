#include <stdio.h>

int main(){
    double renda_anual, montante = 0.0;
    int faixa_imposto;
    printf("Digite a sua renda anual em reais: R$");
    scanf("%lf",&renda_anual);
    if (renda_anual <= 22000.00) {
        faixa_imposto = 1;
    } else if (renda_anual >= 22001.00 && renda_anual <= 45000.00) {
        faixa_imposto = 2;
    } else {
        faixa_imposto = 3;
    }
    switch(faixa_imposto){
        case 1:
        montante = renda_anual * 0.05;
        break;
        case 2:
        montante = renda_anual * 0.15;
        break;
        case 3:
        montante = renda_anual * 0.25;
        break;
        default:
        printf ("A faixa de rendimento é inválida");
        return 1;
    }
    printf ("O montante do imposto a ser pago vale: R$%.2f\n",montante);
    return 0;
}