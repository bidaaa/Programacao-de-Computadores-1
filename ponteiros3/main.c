#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/*
Lista de Exercício - Ponteiros 3
Nome: Vinicius Ribas Bida
RA: 25070323
Data: 06/10/2025
*/

void exercicio1( float *vet[10] ) {

    printf("1º endereco: %d\n", &vet[0]);
    printf("2º endereco: %d\n", &vet[1]);
    printf("3º endereco: %d\n", &vet[2]);
    printf("4º endereco: %d\n", &vet[3]);
    printf("5º endereco: %d\n", &vet[4]);
    printf("6º endereco: %d\n", &vet[5]);
    printf("7º endereco: %d\n", &vet[6]);
    printf("8º endereco: %d\n", &vet[7]);
    printf("9º endereco: %d\n", &vet[8]);
    printf("10º endereco: %d\n", &vet[9]);
};

void exercicio2( int *matriz[3][3] ) {

    printf("Enderecos dos elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }
}

int exercicio3(int *pont) {

    printf("O dobro dos valores digitados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(pont + i) * 2);
    }

    return pont;

}

void exercicio4(int *ptr, int tamanho) {
    int i;
    printf("\nEndereco das posicoes com valores pares:\n");
    for (i = 0; i < tamanho; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("Valor %d esta no endereco: %d\n", *(ptr + i), ptr + i);
        }
    }
}

int main() {

// exercicio 1
/*
    int vet[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    exercicio1( &vet ); 

// exercicio 2

int matriz[3][3];

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("Digite o valor para a posicao [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}

exercicio2( &matriz );

// exercicio 3

int numeros[5];
int *pont = &numeros[0];

for (int i = 0; i < 5; i++) {
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", pont + i);
}

exercicio3(pont); 

for (int i = 0; i < 5; i++) {
    printf("Endereco do %d valor: %d\n", i + 1, &pont + i);
} 

// exercicio 4

int numeros[5];
int i;

printf("Digite 5 numeros inteiros:\n");
for (i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
}

exercicio4(numeros, 5);
*/
    return 0;
}
