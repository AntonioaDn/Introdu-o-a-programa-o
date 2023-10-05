/*
Obter um vetor V de 20 posições. Mostrar o maior elemento do
vetor V e a sua posição.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void PreencheVetores(int a[20])
{
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        a[i] = rand() % 100;
    }
}
void MostraVetor(int a[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void MaiorElementoDoVetor (int a[20], int *maiorExportado, int *indice) {
    int maiorElementodoVetor = a[1];
    for (int i=0; i<20; i++) {
        if (a[i] > maiorElementodoVetor) {
            maiorElementodoVetor = a[i];
            *indice = i;
        }
    }
    *maiorExportado = maiorElementodoVetor;
}
int main () {
    int a[20], maiorElemento, indiceMaiorElemento=0;
    PreencheVetores(a);
    MostraVetor(a);
    MaiorElementoDoVetor(a, &maiorElemento, &indiceMaiorElemento);
    printf("O maior elemento eh %d no indice %d", maiorElemento, indiceMaiorElemento);
}
