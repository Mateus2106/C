#include <stdio.h>
#include <math.h>

/* Fun��o para ordenar um array usando ordena��o de inser��o*/
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Mover elementos de arr [0..i-1], que s�o
          maior que key, para uma posi��o � frente
          da sua posi��o atual*/
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

// Uma fun��o de utilidade para imprimir uma matriz de tamanho n
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

/* Programa de driver para classificar a inser��o */
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
