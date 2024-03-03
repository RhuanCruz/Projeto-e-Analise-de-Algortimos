#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ehPrimo(int n);

int main(){
    int num_aleatorio;
    srand(time(NULL));
    num_aleatorio = rand() % 100;

    printf("numero gerado: %d", num_aleatorio);
    int valor = ehPrimo(num_aleatorio);

    if (valor == 0 ){
            printf("%d não é primo, operações necessaria = %d", n, cont);
            break;
        }else
        {
            printf("%d  é primo, operações necessaria = %d", n, cont);
        }
        

}

int ehPrimo(int n)
{
    int div = 0;
    int cont = 0;
    for (int i = 2; i <= n/2; i++)
    {
        cont++;
        if (n % i == 0)
        {
            div++;
        }
    }
    return div;

    
}
