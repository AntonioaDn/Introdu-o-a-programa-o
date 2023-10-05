    /*
    Ler um vetor A com 20 elementos. Gerar e mostrar o vetor B
    obtido pela inversão da ordem do vetor A
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
    void InverteVetor (int a[20], int b[20]) {
        for (int i=0; i<20; i++) {
            b[i] = a[19-i];
        }
    }
    int main () {
        int a[20], b[20];
        double media;
        PreencheVetores(a);
        InverteVetor(a, b);
        MostraVetor(a);
        MostraVetor(b);
        return 0;
    }
