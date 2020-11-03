/*==================================*/
/*=========  Trabalho 1   ==========*/
/*========  Programação 1  =========*/
/*==================================*/
/*== Autor: Mateus Chaves Marques ==*/
/*======== Data: 18/07/18 ==========*/
/*======== Turma: INFO62 B =========*/
/*==================================*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo,quantidade,flag=0;/*Variáveis do tipo inteiro*/
    float total,totalf;/*Variáveis do tipo float*/
    system("color 70");/*Define a cor do plano de fundo e do primeiro plano*/
    do /*Inicio do laço de iteração do-while*/
    {
    	printf("         --->MENU<---         \n\n");/*Apresentação do Menu da lanchonete*/
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
    	
        printf("\nDigite o codigo do produto:");/*Solicitação do código do produto ao usuário*/
        scanf("%d",&codigo);/*Leitura do código digitado pelo usuário, este código servirá como pós instrução para o laço do-while*/
        fflush(stdin);/*Limpa o buffer do teclado*/
        if(codigo>=100&&codigo<=104)/*Verificação se o código digitado é maior ou igual a 100 e menor ou igual a 104, caso seja verdade
		 será executado os comandos abaixo*/
        {
            printf("Digite a quantidade desejada:");/*Solicitação da quantidade desejada do produto*/
            scanf("%d",&quantidade);/*Leitura da quantidade digitada pelo usuário*/
            fflush(stdin);
        }
        if(quantidade>0)/*Verificação se a quantidade do produto digitada é maior que 0, caso seja verdade é atribuido 1 a variável flag*/
        	flag=1;/*Variável responsável pela sinalização de que a quantidade é ou não válida*/
        else /*Caso a verificação da quantidade seja falsa, é atribuido 0 a variável flag*/
    		flag=0;
        switch(codigo)/*Verificação se o código digitado pelo usuário se encaixa em alguma das opções abaixo, caso não se encaixe será 
		apresentado a mensagem "Código invalido!!" ao usuário*/
        {
            case 100 : {
            	if(flag==1)/*Verificação se variável flag é igual a 1, caso seja verdade é executado os comandos abaixo*/
            	{
					printf("Codigo: %d\n",codigo);/*Apresentação do código digitado pelo usuário na tela*/
                	printf("Quantidade: %d\n",quantidade);/*Apresentação da quantidade do produto digitado pelo usuário*/
                	total=quantidade*4;/*Multiplicação da quantidade pelo valor do produto selecionado, atribuindo o valor encontrado a 
					variável valor*/
					totalf=totalf+total;/*Variável acumuladora do programa, ela soma ela mesma com a variável total, atribuindo o valor encontrado a ela mesma*/
                	printf("Total deste pedido [R$]: %.2f\n",total);/*Apresentação do valor encontrado na multiplicação acima*/
                	system("pause");/*Pausa no programa até o usuário apertar alguma tecla*/
                	system("cls");/*Faz a Limpeza da tela*/
                }
                else /*Caso a variável flag seja diferente de 1, são executados os comandos abaixo*/
                {
                	printf("\nQuantidade invalida!!\n");/*Apresentação da mensagem informando que a quantidade digitada pelo usuário é inválida*/
                	system("pause");
                	system("cls");
				}
            }break;/*Para a execução do switch e continua o programa na instrução seguinte ao switch*/
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
                printf("Compra finalizada!!\n");/*Apresentação da mensagem informando o usuário que a compra foi finalizada*/
                printf("Preco total [R$]: %.2f\n",totalf);/*Apresentação do valor total que o usuário deve pagar*/
                system("pause");
            }break;
            default : printf("\nCodigo invalido!!\n");/*Apresentação da mensagem informando que o código digitado pelo usuário é inválido*/
                system("pause");
                system("cls");
        }
    }while(codigo!=105);/*Condição para que laço de iteração do-while continue executando, se o código digitado for diferente de 105 todo
	o laço do-while irá se repetir até o que o código digitado seja 105*/
    return 0;/*Encerra o programa*/
}
