#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
Lista de vetores e arrays
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 26/05/2025
*/

int main()
{
/*
Exercicio 1
int i, numeros[6];

printf("Digite seis numeros inteiros:\n");
for(i=0;i<6;i++){
    printf("Numero %d: ", i+1);
    scanf("%d", &numeros[i]);
}

printf("Os numeros lidos foram:\n");
for(i=0;i<6;i++){
    printf("%d\n", numeros[i]);
}




Exercicio 2
int i, numeros[6];

printf("Digite seis numeros inteiros:\n");
for(i=0;i<6;i++){
    printf("Numero %d: ", i+1);
    scanf("%d", &numeros[i]);
}

printf("Os numeros lidos foram:\n");
for(i=5;i>=0;i--){
    printf("%d\n", numeros[i]);
}




Exercicio 3
int i, soma = 0, numeros[5];
float media;

printf("Digite cinco numeros inteiros:\n");

for(i=0;i<5;i++){
    printf("Numero %d: ", i+1);
    scanf("%d", &numeros[i]);
    soma = soma+numeros[i];
}

media = (float)soma/5.0;

printf("Numeros lidos:\n");
for(i=0;i<5;i++){
    printf("%d\n", numeros[i]);
}

printf("A media dos valores e: %.2f", media);




Exercicio 4
int A[6] = {1,0,5,-2,-5,7}, soma, i;

soma = A[0] + A[1] + A[5];
printf("A soma de A[0] + A[1] + A[5] e: %d\n", soma);

A[4] = 100;

printf("Valores do array A:\n");
for(i=0;i<6;i++){
    printf("%d\n", A[i]);
}




Exercicio 6
int i, pares = 0, vetor[10];

printf("Digite 10 numeros inteiros:\n");

for(i=0;i<10;i++){
    scanf("%d", &vetor[i]);
    if(vetor[i] % 2 == 0){
        pares++;
    }

}

printf("Quantidade de valores pares armazenados no vetor: %d\n", pares);




Exercicio 7

int i, maior, menor, X[10];

printf("Digite 10 numeros inteiros para o vetor X:\n");

for(i=0;i<10;i++){
    printf("X[%d]: ", i);
    scanf("%d", &X[i]);
}

maior = X[0];
menor = X[0];

for(i=1;i<10;i++){
    if(X[i]>maior){
        maior = X[i];
    }
    if(X[i]<menor){
        menor = X[i];
    }
}

printf("O maior elemento do vetor X e: %d\n", maior);
printf("O menor elemento do vetor X e: %d\n", menor);




Exercicio 8
int i, negativos = 0;
float soma = 0, vetor[10];

printf("Digite 10 numeros reais:\n");

for(i=0;i<10;i++){
    scanf("%f", &vetor[i]);

    if(vetor[i]<0){
        negativos++;
    }
    else if(vetor[i]>0){
        soma = soma+vetor[i];
    }
}

printf("Quantidade de numeros negativos: %d\n", negativos);
printf("Soma dos numeros positivos: %.2f", soma);




Exercicio 9
int A[10], B[10], C[10], i;

printf("Digite 10 numeros inteiros para o array A:\n");
for(i=0;i<10;i++){
    scanf("%d", &A[i]);
}

printf("Digite 10 numeros inteiros para o array B:\n");
for(i=0;i<10;i++){
    scanf("%d", &B[i]);
}

for(i=0;i<10;i++){
    C[i] = A[i] - B[i];
}

printf("Array C:\n");
for(i=0;i<10;i++){
    printf("C[%d] = %d\n", i, C[i]);
}




Exercicio 10
int i, contagem = 0, n = 1, vetor[100];

while(contagem<100){
    if(n % 7 != 0){
        vetor[contagem] = n;
        contagem++;
    }
    n++;
}

for(i=0;i<100;i++){
    printf("%d\n", vetor[i]);
}



Exercicio 11
float numeros[20], quadrados[20];
int quant, i;

do{
    printf("Quantos numeros reais deseja inserir? (maximo 20)");
    scanf("%d", &quant);

    if(quant <= 0 && quant > 20){
        printf("Quantidade invalida");
    }
}while(quant <= 0 && quant > 20);

printf("Digite os %d numeros reais:\n", quant);
for(i=0;i<quant;i++){
    scanf("%f", &numeros[i]);
}

for(i=0;i<quant;i++){
    quadrados[i] = pow(numeros[i], 2);
}

printf("Conjunto de numeros original:\n");
for(i=0;i<quant;i++){
    printf("%.2f \n", numeros[i]);
}

printf("Conjunto de numeros ao quadrado:\n");
for(i=0;i<quant;i++){
    printf("%.2f \n", quadrados[i]);
}
*/
return 0;
}
