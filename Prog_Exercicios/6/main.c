#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],i,maior,menor,flag=0;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero inteiro:");
        scanf("%d",&x[i]);
        if(flag==0)
        {
            maior=x[i];
            menor=x[i];
        }
        if(x[i]>maior)
        {
            maior=x[i];
        }
        if(x[i]<menor)
        {
            menor=x[i];
        }
        flag=1;
    }
    printf("O maior e %d\n",maior);
    printf("O menor e %d",menor);
    return 0;
}
