#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeArray(int a[], int n);
int intercala(int a[], int p, int q, int r);
int mergeSort(int a[], int p, int r);


int main(){
    int n;
    int entrada;

    printf("Digite o tamanho do array = ");
    scanf("%d", &n );
        
    int numeros[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        numeros[i] = rand() % 100;
    }

    int p = 0;
    int r = n-1;


    printf("\nArray desordenado: ");
    imprimeArray(numeros, n);

    mergeSort(numeros, p,r );
    printf("\nArray ordenado: ");
    imprimeArray(numeros, n);
    return 0;
}

int mergeSort(int a[], int p, int r){
    
    if (p < r)
    {
        int q = (p+r) / 2;
        mergeSort(a,p,q);
        mergeSort(a, q+1, r);
        intercala(a,p,q,r);
    }
    
}


int intercala(int a[], int p, int q, int r){
    int n1 = q-p + 1;
    int n2 = r-q;
    int L[n1 + 1];
    int R[n2 + 1];
    int i;
    int j;
    int k;
    int SENTINELA = 10000;

    for (i = 0; i < n1; i++)
    {
        L[i] = a[p + i ];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = a[q + j+1];
    }
    L[n1] = SENTINELA;
    R[n2] = SENTINELA;
    i = 0;
    j = 0;
    k = p;

    for (k; k < r ; k++)
    {
        imprimeArray(a,r);
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

    return 0;
}


void imprimeArray(int a[], int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}