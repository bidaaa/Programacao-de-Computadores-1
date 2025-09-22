#include <stdio.h>
#include <stdlib.h>

void exercicio1(){
    int a = 0, b;
    int *p1, *p2;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite mais um valor inteiro: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    if(p1 > p2){
        printf("O maior valor de endereço e: %d\n", p1);
    } else {
        printf("O maior valor de endereço e: %d\n", p2);
    }
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Depois da funcao swap: x = %d e y = %d\n", *x, *y);
}


int main(){

    /*
    exercicio1();
    */
   //exercicio 2
    printf("Define dois valores inteiros: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Antes da funcao swap: a = %d e b = %d\n", a, b);
    swap(&a,&b);


    
return 0;
}