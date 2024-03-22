#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeArray(int a[], int n);

int main(){
    int n;
    int ops = 0;
    int left;
    srand(time(NULL));
    

    printf("Qual tamanho do array? : ");
    scanf("%d", &n);

    int numeros[n];
    // int numeros[]= {45,65,95,40,15,77,54,53,82,95};

    imprimeArray(numeros, n);

    for (int i = 0; i < n; i++)
    {
        numeros[i] = rand() % 100;
    }

    for (int i = 1; i < n; i++)
    {
        int chave = numeros[i];
        left = i -1;
        while (left >= 0 && numeros[left] > chave)
        {
            ops++;
            numeros[left + 1] = numeros[left];
            left--;
        }
            numeros[left+1] = chave;
        imprimeArray(numeros, n);
        printf("- %d", chave);
        printf("\n");
        
    }

    printf("array ordenado:");
    imprimeArray(numeros, n);
    printf("operacoes necessarias: %d", ops);
}

void imprimeArray(int a[], int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
