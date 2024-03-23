#include <stdio.h>

int buscaBinariaRecursiva(int arr[], int inicio, int fim, int x) {
    if (fim >= inicio) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == x)
            return meio;

        if (arr[meio] > x)
            return buscaBinariaRecursiva(arr, inicio, meio - 1, x);

        return buscaBinariaRecursiva(arr, meio + 1, fim, x);
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int resultado = buscaBinariaRecursiva(arr, 0, tamanho - 1, x);
    if (resultado != -1) {
        printf("Elemento %d encontrado no índice %d\n", x, resultado);
    } else {
        printf("Elemento %d não encontrado no array\n", x);
    }
    return 0;
}
