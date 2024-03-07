#include <stdio.h>

int main(){

    int numeros[10];
    int entrada;
    int maior;
    int menor;
    int cont;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da posição %d = ", i+1);
        scanf("%d", &entrada );
        numeros[i] = entrada ;
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i <= 10; i++)
    {
        cont++;
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }
        
    }
    
    printf("maior = %d / operações = %d\n", maior, cont);
    printf("menor = %d / operações = %d", menor, cont);

    
    
    return 0;
}
