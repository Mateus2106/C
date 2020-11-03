#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[8],X,Y,i,soma;
    for(i=0;i<8;i++)
    {
        printf("Digite um valor inteiro:");
        scanf("%d",&x[i]);
    }
    printf("Digite a posicao de X no vetor:");
    scanf("%d",&X);
    printf("Digite a posicao de Y no vetor:");
    scanf("%d",&Y);
    soma=x[X]+x[Y];
    printf("A soma das posicoes X e Y e %d",soma);
    return 0;
}
