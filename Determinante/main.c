#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3][3],y[3][2],z[5][3],determinante=0;
    int i,a,j=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0;
    for(i=0;i<3;i++)
    {
        for(a=0;a<3;a++)
        {
            printf("Digite um numero inteiro:");
            scanf("%d",&x[i][a]);
            if(a<2)
            {
                y[i][a]=x[i][a];
            }
            system("pause");
            system("cls");
        }
    }
    for(i=0;i<3;i++)
    {
        for(a=0;a<3;a++)
        {
            printf("%3d",x[i][a]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(a=0;a<3;a++)
        {
            if(i<3)
                z[i][a]=x[i][a];
            else
            {
                z[i][a]=y[j][a];
                j++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        x1=x1*z[i][i];
    }
    j=0;
    for(i=1;i<4;i++)
    {
        j=i-1;
        x2=x2*z[i][j];
    }
    j=0;
    for(i=2;i<5;i++)
    {
        j=i-1;
        x3=x3*z[i][j];
    }
    j=0;
    for(i=2;i>0;i--)
    {
        x4=x4*z[i][j];
        j++;
    }
    j=0;
    for(i=3;i>1;i--)
    {
        x5=x5*z[i][j];
        j++;
    }
    j=0;
    for(i=4;i>1;i--)
    {
        x6=x6*z[i][j];
        j++;
    }
    x4=x4*-1;
    x5=x5*-1;
    x6=x6*-1;
    determinante=x1+x2+x3+x4+x5+x6;
    printf("\n%d",determinante);
    return 0;
}
