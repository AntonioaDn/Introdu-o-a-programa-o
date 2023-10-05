/*
Preencher um vetor X de 10 elementos com o número 1 se o índice
do elemento for ímpar e com o número 0 se o índice for par.
Mostrar o vetor X.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void PreencheVetoresZeroOuUm(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0) {
            a[i] = 0;
        }
        else 
            a[i] = 1;
    }
}
void MostraVetor(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main () {
    int a[10], NAcimadaMedia;
    double media;
    PreencheVetoresZeroOuUm(a);
    MostraVetor(a);
    return 0;
}
