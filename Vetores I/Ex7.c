/*
Ler dois vetores A e B de 10 elementos cada. Intercalar os
elementos de A com os elementos de B de maneira a formar um
terceiro vetor, C. Escrever o vetor C.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void PreencheIntercalandoVetores(int a[10], int b[10], int c[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0) {
            c[i] = a[i];
        }
        else 
            c[i] = b[i];
    }
}
void PreencheVetoresA(int a[10])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
    }
}
void PreencheVetoresB(int a[10])
{
    srand(12345);
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
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
    int a[10], b[10], c[10], NAcimadaMedia;
    double media;
    PreencheVetoresA(a);
    PreencheVetoresB(b);
    PreencheIntercalandoVetores(a, b, c);
    MostraVetor(a);
    MostraVetor(b);
    MostraVetor(c);
    return 0;
}
