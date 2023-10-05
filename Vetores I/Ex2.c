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
void MediaVetor (int a[10], double *mediaExportada) {
    int soma=0;
    int indice=1;
    double media;
    for (int i=0; i<10; i++) {
        soma += a[i];
        indice += 1;
    }
    media = soma/10;
    *mediaExportada = media;
}
int main () {
    int a[10];
    double media;
    PreencheVetores(a);
    MostraVetor(a);
    MediaVetor(a, &media);
    printf("A media eh %.2lf.\n", media);
    return 0;
}
