#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
//multiplicar os elementos de índices ímpares por 15.
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
void MultiplicaElementosImpares (int a[10]) {
    for (int i=0; i<10; i++) {
        if (i%2!=0) {
            a[i] = a[i]*15;
        }
    }
}
int main () {
    int a[10], NAcimadaMedia;
    double media;
    PreencheVetores(a);
    MostraVetor(a);
    MultiplicaElementosImpares(a);
    MostraVetor(a);
    return 0;
}
