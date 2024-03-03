#include <stdio.h>

int main(){

    int numeros[10];
    int entrada;
    int maior;
    int cont;

    for (int i = 0; i < numeros; i++)
    {
        printf("Digite o valor da posição %d", i+1);
        scanf("%d", &entrada );
        numeros[i] = entrada ;
    }
    maior = numeros[0];
    for (int i = 1; i <= numeros; i++)
    {
        cont++;
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
    }
    
    printf("maior = %d / operações = %d", maior, cont);
    
    
    return 0;
}
