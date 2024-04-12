#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int n);

int main(){
    int n = 5;
    fatorial(n);



    return 0;
}

int fatorial(int n)
{
    return n * fatorial(n-1);
}
