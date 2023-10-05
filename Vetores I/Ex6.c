/*
Dados dois vetores A e B com 10 elementos cada. Armazenar no
vetor C a soma do elemento em A com o elemento em B em cadauma das posições.
*/
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
void MostraVetor(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void SomaDoisVetores (int A[10], int B[10], int C[10]) {
    for (int i=0; i<10; i++) {
        C[i] = A[i] + B[i];
    }
}
int main () {
    int a[10], b[10], c[10], NAcimadaMedia;
    double media;
    PreencheVetores(a);
    PreencheVetores(b);
    MostraVetor(a);
    MostraVetor(b);
    SomaDoisVetores(a, b, c);
    MostraVetor(c);
    return 0;
}
