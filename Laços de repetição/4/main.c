#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero:");
    scanf("%d",&x);
    while(x<1||x>4)
    {
        printf("Entrada invalida\n");
        printf("Digite novamente:");
        scanf("%d",&x);
    }
    if(x>=1&&x<=4)
        printf("%d",x);
    return 0;
}
