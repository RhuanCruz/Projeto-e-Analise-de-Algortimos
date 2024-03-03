#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeArray(int a[], int n);

int main(){
    int n;
    int ops = 0;
    int temp;
    int ordenado;
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

    while (!ordenado)
    {
        ordenado = 1;
        for (int i = 0; i < n -1; i++)
        {
        ops+=1;
            if (numeros[i] > numeros[i+1])
            {
                temp = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = temp;
                ordenado = 0;
            }
        
        }
    }
    
    
    printf("array ordenado:");
    imprimeArray(numeros, n);
    printf("operações necessarias: %d", ops);
}

void imprimeArray(int a[], int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
