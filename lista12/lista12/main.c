#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista de Exercicios 12 - Matrizes
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 02/06/2025
*/


int main()
{
/*
Exercicio 1
int i, j, mat[3][3], menor;

printf("Digite o valor 1 1 da matriz: ");
scanf("%d", &mat[0][0]);

menor = mat[0][0];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i==0 && j==0){
            continue;
        }
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(mat[i][j]<mat[0][0]){
            menor = mat[i][j];
        }
    }
}

printf("O menor valor e: %d", menor);



Exercicio 2
int i, j, mat[4][4], maior, linha, coluna;

printf("Digite o valor 1 1 da matriz: ");
scanf("%d", &mat[0][0]);

maior = mat[0][0];

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(i==0 && j==0){
            continue;
        }
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(mat[i][j]>maior){
            maior = mat[i][j];
            linha = i+1;
            coluna = j+1;
        }
    }
}

printf("O maior valor e: %d, e sua localizacao e: %d %d", maior, linha, coluna);



Exercicio 3
int i, j, mat[5][5];

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(i==j){
            mat[i][j] = 1;
        } else{
            mat[i][j] = 0;
    }
    printf("%d ", mat[i][j]);
}
printf("\n");
}



Exercicio 4
int i, j, mat[4][4], maior=0;

printf("Digite o valor 1 1 da matriz: ");
scanf("%d", &mat[0][0]);

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(i==0 && j==0){
            continue;
        }
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(mat[i][j]>10){
            maior++;
        }
    }
}

printf("A quantidade de numeros maiores que 10 sao: %d", maior);



Exercicio 5
int i, j, mat[4][4], menor=0;

printf("Digite o valor 1 1 da matriz: ");
scanf("%d", &mat[0][0]);

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(i==0 && j==0){
            continue;
        }
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(mat[i][j]<0){
            menor++;
        }
    }
}

printf("A quantidade de numeros negativos sao: %d", menor);



Exercicio 6
int i, j, mat[3][3], soma;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(i==j){
            soma = soma + mat[i][j];
        }else continue;
    }
}

printf("A soma dos numeros em sua diagonal principal e: %d", soma);



Exercicio 7
int i, j, mat[3][3], soma;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Digite o valor %d %d da matriz: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        if(i==0 && j==2){
            soma = soma + mat[i][j];
        }else if(i==1 && j==1){
            soma = soma + mat[i][j];
        }else if(i==2 && j==0){
            soma = soma + mat[i][j];
        }
    }
}

printf("A soma dos numeros em sua diagonal secundaria e: %d", soma);



Exercicio 8
int i, j, mat[10][10];

for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        if(i==j){
            mat[i][j] = 3*pow(i, 2) - 1;
        }
        else if(i<j){
            mat[i][j] = 2*i + 7*j - 2;
        }else mat[i][j] = 4*pow(i,3) + 5*pow(j,2) + 1;
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
*/




























return 0;
}
