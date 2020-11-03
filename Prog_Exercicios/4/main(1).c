#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=5;
    float A[5],B[5];
    for(i=0;i<5;i++)
    {
        printf("Digite um numero:");
        scanf("%f",&A[i]);
        B[x]=A[i];
        printf("%.2f\n",A[i]);
        printf("%.2f\n",B[x]);
        x--;
    }
    return 0;
}
