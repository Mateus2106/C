#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],i,y=0;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero inteiro:");
        scanf("%d",&x[i]);
        if(x[i]%2==0)
            y++;
    }
    printf("O vetor x possui %d numeros pares",y);
    return 0;
}
