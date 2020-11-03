#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[3][3],y[3][2],z[3][5],t[3][3],determinante=0;
    float determinantex,determinantea,determinanteb,determinantec;
    float x1=1,x2=1,x3=1,x4=1,x5=1,x6=1;
    float q[3],w[3],e[3];
    float resposta1,resposta2,resposta3,u=0,p=0,o=0;
    int i=0,j=0,a,n=11,m[3],k=12,g;

    for(i=0;i<3;i++)
    {
        for(a=0;a<3;a++)
        {
            printf("|----------------Determinante----------------|\n\n");
            printf("Digite um numero inteiro:");
            scanf("%f",&x[i][a]);
            if(a<2)
            {
                y[i][a]=x[i][a];
            }
            system("pause");
            system("cls");
        }
    }
    printf("|----------------Determinante----------------|\n\n");
    for(i=0;i<3;i++)
    {
        for(a=0;a<3;a++)
        {
            printf("[%.2f]",x[i][a]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        j=0;
        for(a=0;a<5;a++)
        {
            if(a<3)
            {
                z[i][a]=x[i][a];
            }
            else
            {
                z[i][a]=y[i][j];
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
        x2=x2*z[j][i];
        j++;
    }
    j=0;
    for(i=2;i<5;i++)
    {
        j=i-2;
        x3=x3*z[j][i];
    }
    j=0;
    for(i=4;i>1;i--)
    {
        x4=x4*z[j][i];
        j++;
    }
    j=0;
    for(i=3;i>0;i--)
    {
        x5=x5*z[j][i];
        j++;
    }
    j=0;
    for(i=2;i>=0;i--)
    {
        x6=x6*z[j][i];
        j++;
    }
    x4=x4*-1;
    x5=x5*-1;
    x6=x6*-1;
    determinante=x1+x2+x3+x4+x5+x6;
    printf("\nO determinante e : %.2f\n\n",determinante);
    printf("|--------------------------------------------|\n");

    for(i=0;i<3;i++)
    {
        printf("\nInforme a:");
        scanf("%f",&q[i]);
        printf("Informe b:");
        scanf("%f",&w[i]);
        printf("Informe c:");
        scanf("%f",&e[i]);
        if(i==0)
        {
            q[i]=q[i]-n;
            m[i]=n-k;
        }
        if(i==1)
        {
            w[i]=q[i]-w[i]+e[i];
            e[i]=n*w[i];
            m[i]=n+q[i];
        }
        if(i==2)
        {
            e[i]=k+n;
            m[i]=w[i]/e[i];
        }
    }

    for(g=0;g<4;g++)
    {
        for(i=0;i<3;i++)
        {
            for(a=0;a<3;a++)
            {
                if(a==0)
                   t[i][a]=q[i];
                if(a==1)
                   t[i][a]=w[i];
                if(a==2)
                   t[i][a]=e[i];
            }
        }
        printf("\n");

        for(i=0;i<3;i++)
        {
            for(a=0;a<3;a++)
            {
                printf("[%.2f]",t[i][a]);
                if(a<2)
                {
                    y[i][a]=t[i][a];
                }
            }
            printf("\n");
        }

        for(i=0;i<3;i++)
        {
            j=0;
            for(a=0;a<5;a++)
            {
                if(a<3)
                {
                    z[i][a]=t[i][a];
                }
                else
                {
                    z[i][a]=y[i][j];
                    j++;
                }
            }
        }
        x1=1;
        x2=1;
        x3=1;
        x4=1;
        x5=1;
        x6=1;
        for(i=0;i<3;i++)
        {
            x1=x1*z[i][i];
        }
        j=0;
        for(i=1;i<4;i++)
        {
            x2=x2*z[j][i];
            j++;
        }
        j=0;
        for(i=2;i<5;i++)
        {
            j=i-2;
            x3=x3*z[j][i];
        }
        j=0;
        for(i=4;i>1;i--)
        {
            x4=x4*z[j][i];
            j++;
        }
        j=0;
        for(i=3;i>0;i--)
        {
            x5=x5*z[j][i];
            j++;
        }
        j=0;
        for(i=2;i>=0;i--)
        {
            x6=x6*z[j][i];
            j++;
        }
        x4=x4*-1;
        x5=x5*-1;
        x6=x6*-1;
        if(g==0)
            determinantex=x1+x2+x3+x4+x5+x6;
        if(g==1)
            determinantea=x1+x2+x3+x4+x5+x6;
        if(g==2)
            determinanteb=x1+x2+x3+x4+x5+x6;
        if(g==3)
            determinantec=x1+x2+x3+x4+x5+x6;

        printf("\nO determinante e : %.2f",determinantex);
    }
    return 0;
}
