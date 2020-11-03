#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[6],i;
    for(i=0;i<6;i++)
    {
        printf("Digite um numero inteiro:");
        scanf("%d",&x[i]);
    }
    for(i=5;i>=0;i--)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
