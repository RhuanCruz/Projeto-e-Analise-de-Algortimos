#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeArray(int a[], int n);
void intercala(int a[], int p, int q, int r);
void mergeSort(int a[], int p, int r);

int main() {
    int n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int numeros[n];

    srand((unsigned int) time(NULL));
    for (int i = 0; i < n; i++) {
        numeros[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }

    printf("Array desordenado: ");
    imprimeArray(numeros, n);

    mergeSort(numeros, 0, n - 1);

    printf("\nArray ordenado: ");
    imprimeArray(numeros, n);

    return 0;
}

void mergeSort(int a[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        intercala(a, p, q, r);
    }
}

void intercala(int a[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int b[n1 + n2]; // Array temporário

    int i = p, j = q + 1, k = 0;

    while (i <= q && j <= r) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    while (i <= q) {
        b[k++] = a[i++];
    }

    while (j <= r) {
        b[k++] = a[j++];
    }

    for (int l = 0; l < k; l++) {
        a[p + l] = b[l];
    }
}

void imprimeArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
