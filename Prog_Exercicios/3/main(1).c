#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20],i,x=0;
    for(i=0;i<=20;i++)
    {
        if(i%2==0)
        {
            A[x]=i;
            printf("%d\n",A[x]);
            x++;
        }

    }
    return 0;
}
