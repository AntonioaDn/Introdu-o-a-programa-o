/*
Escreva uma função que concatena/junta dois vetores. Por
exemplo, V1 = 0, 1, 2, 3, 4 e V2 = 4, 3, 2, 1, 0, o vetor resultante
será R = 0, 1, 2, 3, 4, 4, 3, 2, 1, 0.
*/
#include <stdio.h>
#include <stdlib.h>

int* ConcatenaVetores(int a[], int tamanhoA, int b[], int tamanhoB) {
    int tamanhoConcatenado = tamanhoA + tamanhoB;
    int* concatenado = (int*)malloc(tamanhoConcatenado * sizeof(int));

    if (concatenado == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }

    for (int i = 0; i < tamanhoA; i++) {
        concatenado[i] = a[i];
    }

    for (int i = 0; i < tamanhoB; i++) {
        concatenado[tamanhoA + i] = b[i];
    }

    return concatenado;
}

int main() {
    int vetorA[] = {1, 2, 3};
    int tamanhoA = 3;

    int vetorB[] = {4, 5, 6, 7};
    int tamanhoB = 4;

    int* vetorConcatenado = ConcatenaVetores(vetorA, tamanhoA, vetorB, tamanhoB);

    printf("Vetor concatenado: ");
    for (int i = 0; i < tamanhoA + tamanhoB; i++) {
        printf("%d ", vetorConcatenado[i]);
    }

    // Libere a memória alocada
    free(vetorConcatenado);

    return 0;
}
