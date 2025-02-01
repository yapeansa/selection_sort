#include <stdio.h>
#include <stdlib.h>
#include "selection.h"

int main()
{
    int *vet, tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int *)malloc(tam * sizeof(int)); // Dimensionando o vetor dinamicamente.
    preencher(vet, tam);                    // Função para preencher o vetor.

    printf("\nVetor não ordenado: ");
    exibir(vet, tam); // Exibindo o vetor antes da ordenação.

    selection_sort(vet, tam); // Ordenando o vetor utilizando o algoritmo de ordenação por seleção.

    printf("Vetor ordenado: ");
    exibir(vet, tam); // Exibindo o vetor ordenado.
    printf("\n");

    return 0;
}
