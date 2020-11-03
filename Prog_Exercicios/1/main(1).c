#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6],x,i;
    A[0]=1;
    A[1]=0;
    A[2]=5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;
    x=A[0]+A[1]+A[5];
    printf("A soma dos vetores de A[0],A[1],A[5] e %d",x);
    A[4]=100;
    for(i=0;i<6;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
