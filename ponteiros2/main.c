#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Lista de Exercícios - Ponteiros 2
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 30/09/2025
*/

const char* exercicio1(const char *str, const char *str2) {
    if (str == NULL || str2 == NULL) {
        return NULL;
    }

    const char *p1 = str;
    const char *p2 = str2;

    while (*p1 != '\0') {
        const char *inicio = p1;
        p2 = str2;

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return inicio; 
        }

        p1 = inicio + 1; 
    }

    return NULL; 
}

void preencher(int *vet, int tam, int valor) {
    int *fim = vet + tam;

    for (int *ptr = vet; ptr < fim; ptr++) {
        *ptr = valor;
    }
}

void exercicio2(int *vet, int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("]\n");
}

void exercicio3(int *vetor, int tamanho) {
    int *fim = vetor + tamanho;

    printf("Elementos do vetor: ");
    for (; vetor < fim; vetor++) {
        printf("%d ", *vetor);
    }

    printf("\n");
}



int main(){
    /*
    Exercicio 1
    const char *texto = "O rato roeu a roupa do rei de Roma.";
    const char *string2 = "roupa";  

    if (exercicio1(texto, string2)) {
        printf("A string \"%s\" foi encontrada em \"%s\".\n", string2, texto);
    } else {
        printf("A string \"%s\" não foi encontrada em \"%s\".\n", string2, texto);
    }

    
    Exercicio 2
    int tamanho_vetor = 10;
    int meu_vetor[tamanho_vetor];
    int valor_preenchimento = 7;

    printf("Vetor antes:\n");
    exercicio2(meu_vetor, tamanho_vetor);

    preencher(meu_vetor, tamanho_vetor, valor_preenchimento);

    printf("Vetor após:\n", valor_preenchimento);
    exercicio2(meu_vetor, tamanho_vetor);


    Exercício 3
    int numeros[] = {10, 20, 30, 40, 50, 60, 70};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    exercicio3(numeros, tamanho);
    

    Exercício 4
    int a;
    int *b;
    int **c;
    int ***d;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    b = &a; 
    c = &b; 
    d = &c; 

    printf("O dobro: %d\n", (*b) * 2);
    printf("O triplo: %d\n", (**c) * 3);
    printf("O quadruplo: %d\n", (***d) * 4);
    */

return 0;
}
