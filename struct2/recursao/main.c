#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n == 1){
        return 1;
    }
    return n + soma(n-1);
}

void crescente(int n){
    if(n<0){
        return;
    }
    crescente(n-1);
    printf("%d\n", n);
}

void decrescente(int n){
    if(n<0){
        return;
    }
    printf("%d\n", n);
    decrescente(n - 1);
}


int main()
{
    /*
    Exercício 1

    int n = soma(10);
    printf("%d", n);


    Exercício 2

    crescente(8);


    Exercício 3
    decrescente(8);


    Exercício 4
    */

}
