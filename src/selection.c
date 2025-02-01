#include <stdio.h>
#include "selection.h"

void preencher(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void exibir(int *v, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void selection_sort(int *v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] <= v[min])
                min = j;

        int key = v[i];
        v[i] = v[min];
        v[min] = key;
    }
}
