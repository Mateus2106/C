#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y,z;
    do
    {
        printf("Digite um numero:");
        scanf("%d",&x);
        printf("Digite outro numero:");
        scanf("%d",&y);
        z=x+y;
        printf("A soma dos dois numeros e %d\n",z);
        printf("------------------------------------------------------------------\n");
        i=i+1;
    }while(i<=5);
    return 0;
}
