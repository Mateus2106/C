#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float x[10],y[10];
    for(i=0;i<10;i++)
    {
        printf("Digite um valor real:");
        scanf("%f",&x[i]);
        y[i]=x[i]*x[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%.2f\n",y[i]);
    }
    return 0;
}
