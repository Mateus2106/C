#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float A[8],B[8];
    for(i=0;i<10;i++)
    {
        printf("Informe um numero:");
        scanf("%f",&A[i]);
        B[i]=A[i]*3;
        printf("%.2f\n",A[i]);
        printf("%.2f\n",B[i]);
    }
    return 0;
}
