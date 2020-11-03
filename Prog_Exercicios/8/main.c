#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,y=0;
    float x[10],soma;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero real:");
        scanf("%f",&x[i]);
        if(x[i]<0)
        {
            y++;
        }
        if(x[i]>0)
        {
            soma=soma+x[i];
        }
    }
    printf("A soma dos numeros positivos e %.2f\n",soma);
    printf("A quantidade de numeros negativos e %d",y);
    return 0;
}
