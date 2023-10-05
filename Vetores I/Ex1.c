#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PreencheVetores(int a[10])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
    }
}
void SomaVetores(int a[10], int *somaExportada)
{
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += a[i];
    }
    *somaExportada = soma;
}
void MostraVetor(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int array[10], soma;
    PreencheVetores(array);
    SomaVetores(array, &soma);
    MostraVetor(array);
    printf("A soma eh %d.", soma);
}
