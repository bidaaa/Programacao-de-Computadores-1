#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

void exercicio3(char *s) {
    if (s == NULL || *s == '\0') {
        return;
    }

    char *inicio = s;
    char *fim = s + strlen(s) - 1;
    char temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

void exercicio4(int *a, int b) {
    *a = *a + b;
}

void exercicio5(float R, float *area, float *volume) {
    *area = 4 * 3.14 * (R * R);
    *volume = (4.0 / 3.0) * 3.14 * (R * R * R);
}

int main(){

    /*
    exercicio1();
    
    //Exercicio 2
    printf("Define dois valores inteiros: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Antes da funcao swap: a = %d e b = %d\n", a, b);
    swap(&a,&b);


    Exercicio 3
    char string[200];

    printf("Digite uma string (ate 200 caracteres): ");

    if (fgets(string, sizeof(string), stdin)) {
    string[strcspn(string, "\n")] = '\0';

    printf("Original: \"%s\"\n", string);

    exercicio3(string);

    printf("Invertida: \"%s\"\n", string);
    } else {
    printf("Erro ao ler a entrada.\n");
    }


    Exercicio 4
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Antes da funcao: a = %d e b = %d\n", a, b);
    exercicio4(&a, b);
    printf("Depois da funcao: a = %d e b = %d\n", a, b);

    Exercicio 5
    float R, area, volume;
    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    exercicio5(R, &area, &volume);

    printf("Area da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);
    */
    
return 0;
}