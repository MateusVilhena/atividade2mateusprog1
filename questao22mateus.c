#include <stdio.h>

int main()
{
    int categoria, quantidade;
    float valor;

    printf("Digite a categoria do produto que você deseja comprar\n1.Produtos de tecnologia - R$150,00 cada\n2.Produtos de alimentação - R$50,00 cada\n3.Produtos de vestuário - R$80,00 cada\n4.Produtos de saúde - R$120,00 cada\n5.Produtos de lazer - R$90,00 cada\n");
    scanf("%d",&categoria);
    printf("Digite a quantidade de produtos que você deseja comprar: ");
    scanf("%d",&quantidade);
    if (quantidade>0)
    {
    switch(categoria)
    {
        case 1:
        printf("Produtos de tecnologia");
        valor=quantidade*150;
        break;
        case 2:
        printf("Produtos de alimentação");
        valor=quantidade*50;
        break;
        case 3:
        printf("Produtos de vestuário");
        valor=quantidade*80;
        break;
        case 4:
        printf("Produtos de saúde");
        valor=quantidade*120;
        break;
        case 5:
        printf("Produtos de lazer");
        valor=quantidade*90;
        break;

        default:
            break;
    }

    if (quantidade>=1&&quantidade<=5)
    {
    valor=valor-(valor*0.05);
    } 
    else
    {
    if (quantidade>=6&&quantidade<=10)
    {
    valor=valor-(valor*0.1);
    }
    else 
    {
    if (quantidade>10)
    {
    valor=valor-(valor*0.15);
    }
    }
    printf("O valor total dos produtos comprados é de: %.2f reais",valor);
    }
    return 0;
    }
}
