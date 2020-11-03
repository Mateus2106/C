/*==================================*/
/*=========  Trabalho 1   ==========*/
/*========  Programa��o 1  =========*/
/*==================================*/
/*== Autor: Mateus Chaves Marques ==*/
/*======== Data: 18/07/18 ==========*/
/*======== Turma: INFO62 B =========*/
/*==================================*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo,quantidade,flag=0;/*Vari�veis do tipo inteiro*/
    float total,totalf;/*Vari�veis do tipo float*/
    system("color 70");/*Define a cor do plano de fundo e do primeiro plano*/
    do /*Inicio do la�o de itera��o do-while*/
    {
    	printf("         --->MENU<---         \n\n");/*Apresenta��o do Menu da lanchonete*/
    	printf("|=========|=========|========|\n");
    	printf("|-Codigo--|-Produto-|--Preco-|\n");
    	printf("|=========|=========|========|\n");
    	printf("|---100---|-Pastel--|--4.00--|\n");
    	printf("|---101---|-Torrada-|--2.50--|\n");
    	printf("|---102---|--Bolo---|--2.00--|\n");
    	printf("|---103---|--Suco---|--1.50--|\n");
    	printf("|---104---|--Cafe---|--0.80--|\n");
    	printf("|=========|==================|\n");
    	printf("|---105---|--Encerra compra--|\n");
    	printf("|=========|==================|\n");
    	
        printf("\nDigite o codigo do produto:");/*Solicita��o do c�digo do produto ao usu�rio*/
        scanf("%d",&codigo);/*Leitura do c�digo digitado pelo usu�rio, este c�digo servir� como p�s instru��o para o la�o do-while*/
        fflush(stdin);/*Limpa o buffer do teclado*/
        if(codigo>=100&&codigo<=104)/*Verifica��o se o c�digo digitado � maior ou igual a 100 e menor ou igual a 104, caso seja verdade
		 ser� executado os comandos abaixo*/
        {
            printf("Digite a quantidade desejada:");/*Solicita��o da quantidade desejada do produto*/
            scanf("%d",&quantidade);/*Leitura da quantidade digitada pelo usu�rio*/
            fflush(stdin);
        }
        if(quantidade>0)/*Verifica��o se a quantidade do produto digitada � maior que 0, caso seja verdade � atribuido 1 a vari�vel flag*/
        	flag=1;/*Vari�vel respons�vel pela sinaliza��o de que a quantidade � ou n�o v�lida*/
        else /*Caso a verifica��o da quantidade seja falsa, � atribuido 0 a vari�vel flag*/
    		flag=0;
        switch(codigo)/*Verifica��o se o c�digo digitado pelo usu�rio se encaixa em alguma das op��es abaixo, caso n�o se encaixe ser� 
		apresentado a mensagem "C�digo invalido!!" ao usu�rio*/
        {
            case 100 : {
            	if(flag==1)/*Verifica��o se vari�vel flag � igual a 1, caso seja verdade � executado os comandos abaixo*/
            	{
					printf("Codigo: %d\n",codigo);/*Apresenta��o do c�digo digitado pelo usu�rio na tela*/
                	printf("Quantidade: %d\n",quantidade);/*Apresenta��o da quantidade do produto digitado pelo usu�rio*/
                	total=quantidade*4;/*Multiplica��o da quantidade pelo valor do produto selecionado, atribuindo o valor encontrado a 
					vari�vel valor*/
					totalf=totalf+total;/*Vari�vel acumuladora do programa, ela soma ela mesma com a vari�vel total, atribuindo o valor encontrado a ela mesma*/
                	printf("Total deste pedido [R$]: %.2f\n",total);/*Apresenta��o do valor encontrado na multiplica��o acima*/
                	system("pause");/*Pausa no programa at� o usu�rio apertar alguma tecla*/
                	system("cls");/*Faz a Limpeza da tela*/
                }
                else /*Caso a vari�vel flag seja diferente de 1, s�o executados os comandos abaixo*/
                {
                	printf("\nQuantidade invalida!!\n");/*Apresenta��o da mensagem informando que a quantidade digitada pelo usu�rio � inv�lida*/
                	system("pause");
                	system("cls");
				}
            }break;/*Para a execu��o do switch e continua o programa na instru��o seguinte ao switch*/
            case 101 : {
            	if(flag==1)
            	{
					printf("Codigo: %d\n",codigo);
                	printf("Quantidade: %d\n",quantidade);
                	total=quantidade*2.50;
                	totalf=totalf+total;
                	printf("Total deste pedido [R$]: %.2f\n",total);
                	system("pause");
                	system("cls");
                }
                else
                {
                	printf("\nQuantidade invalida!!\n");
                	system("pause");
                	system("cls");
				}
            }break;
            case 102 : {
            	if(flag==1)
            	{
                	printf("Codigo: %d\n",codigo);
               		printf("Quantidade: %d\n",quantidade);
                	total=quantidade*2;
                	totalf=totalf+total;
                	printf("Total deste pedido [R$]: %.2f\n",total);
                	system("pause");
                	system("cls");
                }
                else
                {
                	printf("\nQuantidade invalida!!\n");
                	system("pause");
                	system("cls");
				}
            }break;
            case 103 : {
            	if(flag==1)
            	{
                	printf("Codigo: %d\n",codigo);
                	printf("Quantidade: %d\n",quantidade);
            		total=quantidade*1.50;
            		totalf=totalf+total;
                	printf("Total deste pedido [R$]: %.2f\n",total);
                	system("pause");
               		system("cls");
               	}
               	else
                {
                	printf("\nQuantidade invalida!!\n");
                	system("pause");
                	system("cls");
				}
            }break;
            case 104 : {
            	if(flag==1)
            	{
                	printf("Codigo: %d\n",codigo);
                	printf("Quantidade: %d\n",quantidade);
                	total=quantidade*0.80;
                	totalf=totalf+total;
                	printf("Total deste pedido [R$]: %.2f\n",total);
                	system("pause");
                	system("cls");
                }
                else
                {
                	printf("\nQuantidade invalida!!\n");
                	system("pause");
                	system("cls");
				}
            }break;
            case 105 : {
                printf("Compra finalizada!!\n");/*Apresenta��o da mensagem informando o usu�rio que a compra foi finalizada*/
                printf("Preco total [R$]: %.2f\n",totalf);/*Apresenta��o do valor total que o usu�rio deve pagar*/
                system("pause");
            }break;
            default : printf("\nCodigo invalido!!\n");/*Apresenta��o da mensagem informando que o c�digo digitado pelo usu�rio � inv�lido*/
                system("pause");
                system("cls");
        }
    }while(codigo!=105);/*Condi��o para que la�o de itera��o do-while continue executando, se o c�digo digitado for diferente de 105 todo
	o la�o do-while ir� se repetir at� o que o c�digo digitado seja 105*/
    return 0;/*Encerra o programa*/
}
