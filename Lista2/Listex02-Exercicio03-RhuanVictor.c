#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int n;
    
    int entrada;
    int cont;
    int validar;
    int posicao;


    printf("Digite o tamanho do array = ");
    scanf("%d", &n );
        
    int numeros[n];

    srand(time(NULL));
for (int i = 0; i < n; i++)
    {
        numeros[i] = rand() % 100;
    }

    printf("array  gerado = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", numeros[i]);
    }

    printf("\nEntre com o valor inteiro a ser procurado : ");
    scanf("%d", &entrada);

    for (int i = 0; i < n; i++)
    {
        cont++;
        if (numeros[i] == entrada)
        {
            validar = 1;
            posicao = i + 1;
            break;
        }
        else{
            validar = 0;
        }
    }

    if (validar == 1)
        {
        printf("\nValor %d encontrado na posicao %d", entrada, posicao );
        printf("\nOperacoes necessarias %d", cont );
        }
    else
        {
        printf("Valor %d não  encontrado na posição", entrada );
        }


    
    return 0;
}
