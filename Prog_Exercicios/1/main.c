#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float A[10];
    for(i=0;i<10;i++)
    {
        printf("Informe um numero:");
        scanf("%f",&A[i]);
        printf("%.2f\n",A[i]);
    }
    return 0;
}
