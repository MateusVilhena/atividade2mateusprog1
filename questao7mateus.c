#include <stdio.h>
#include <stdlib.h>
int main(){
    int nivel_agua;
    printf("Digite o nível da água em um tanque: ");
    scanf("%d",&nivel_agua);
    if (nivel_agua<400)
    printf("O nível de água é baixo");
    if (nivel_agua>=400&&nivel_agua<800)
    printf("O nível de água é médio");
    if (nivel_agua>=800)
    printf("O nível de água é alto");
    return 0;
}