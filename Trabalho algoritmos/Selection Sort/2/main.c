#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // Um por um limite de movimento de subarray n�o classificado

    for (i = 0; i < n-1; i++)
    {
        // Encontra o elemento m�nimo na matriz n�o classificada
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Troca o elemento m�nimo encontrado pelo primeiro elemento
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Fun��o para imprimir uma matriz */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Programa de driver para testar as fun��es acima
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
