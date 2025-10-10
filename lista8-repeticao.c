#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista de Exercícios 8 - Repetição
Autor: Vinicius Ribas Bida
Data: 28/04/2025
RA: 25070323
*/

int main()
{
/*
Exercicio 1
int num = 0;
while (num < 51){
    printf("%d\n", num);
    num++;
}



Exercicio 2
int num = 1;
while(num < 101){
    printf("%d\n", num);
    num++;
}



Exercicio 3
int num = 100;
while(num > 0){
    printf("%d\n", num);
    num--;
}



Exercicio 4
int num = 100;
while(num < 201){
    printf("%d\n", num);
    num++;
}



Exercicio 5
int num = 200;
while(num > 99){
    printf("%d\n", num);
    num--;
}



Exercicio 6
int x = 1, num = 0;
while(x < 500){
    num = num + 1;
    x = num*5;
    printf("%d\n", x);
}



Exercicio 7
int num = 2;
while(num < 101){
    printf("%d\n", num);
    num = num + 2;
}



Exercicio 8
int num = 0, x = 1;
while(num < 100){
    printf("%d\n", x);
    num++;
    x = x+2;
}



Exercicio 9
int num = 1, quadrado;
while(num < 21){
    quadrado = num * num;
    printf("%d\n", quadrado);
    num++;
}



Exercicio 10
int num = 1;
while(num < 101){
    printf("%d\n", num);
    num = num + 2;
}



Exercicio 11
int num = 1;
float conta, leia;
while(num<11){
    scanf("%f", &leia);
    conta = leia/2;
    printf("%f\n", conta);
    num++;
}



Exercicio 12
int num = 1;
float conta, leia;
while(num<11){
    scanf("%f", &leia);
    conta = leia * leia;
    printf("%f\n", conta);
    num++;
}



Exercicio 13
int num = 1;
float conta, leia;
while(num<16){
    scanf("%f", &leia);
    conta = sqrt(leia);
    printf("%f\n", conta);
    num++;
}



Exercicio 14
int num = 1;
float conta, leia;
while(num<9){
    scanf("%f", &leia);
    conta = log10(leia);
    printf("%f\n", conta);
    num++;
}



Exercicio 15
int num=1,soma = 0;
while(num < 101){
    printf("%d\n", num);
    soma = soma + num;
    num ++;
}
printf("%d", soma);




Exercicio 16
int num=1,soma = 0, quadrado;
while(num < 101){
    printf("%d\n", num);
    quadrado = num * num;
    soma = soma + quadrado;
    num ++;
}
printf("%d", soma);



Exercicio 17
float num=1,soma = 0;
while(num < 101){
    printf("%f\n", num);
    soma = soma + num/2;
    num ++;
}
printf("%f", soma);




Exericio 18
int num=1,soma = 0, cubo;
while(num < 101){
    printf("%d\n", num);
    cubo = num * num * num;
    soma = soma + cubo;
    num ++;
}
printf("%d", soma);



Exercicio 19
int num=1;
float media, soma = 0;
while(num < 101){
    printf("%d\n", num);
    soma = soma + num;
    num ++;
}
media = soma/100;
printf("%.1f", media);



Exercicio 20
int contagem = 1, num, maior=0, menor=0;
scanf("%d", &num);

maior = num;
menor = num;

while(contagem < 10){
    scanf("%d", &num);
    if(num < menor){
        menor = num;
    }if(num > maior){
        maior = num;
    }
    contagem++;
    }
printf("O menor numero e: %d", menor);
printf("O maior numero e: %d", maior);



Exercicio 21
int contagem = 2, num, maior, segundo_maior;

scanf("%d", &num);
maior = num;

scanf("%d", &num);
if(num > maior){
    segundo_maior = maior;
    maior = num;
}else{
    segundo_maior = num;
}

while(contagem < 10){
    scanf("%d", &num);

    if(num > maior){
        segundo_maior = maior;
        maior = num;
    }else if(num > segundo_maior && num != maior){
        segundo_maior = num;
    }
    contagem++;
}

printf("O maior numero e: %d\n", maior);
printf("O segundo maior numero e: %d", segundo_maior);



Exercicio 22
int num, inferior, superior, soma = 0;

printf("Digite o limite inferior do intervalo: ");
scanf("%d", &inferior);

printf("Digite o limite superior do intervalo: ");
scanf("%d", &superior);

num = inferior + 1;

while(num < superior){
    if (num%2==0){
        printf("%d\n", num);
        soma = soma + num;
    }
    num++;
}

printf("Soma: %d", soma);



Exercicio 23
int num = 1, superior;

printf("Digite o limite superior do intervalo: ");
scanf("%d", &superior);

while(num <= superior){
    if(num%3==0){
        printf("%d\n", num);
    }if(num%5==0){
        printf("%d\n", num);
}
    num++
}



Exercicio 24
int contagem = 1, pares = 0, impares = 0, num;

while(contagem < 201){
    scanf("%d", &num);

    if(num % 2 == 0){
        pares++;
    }else{
        impares++;
    }

    contagem++;
}

printf("Quantidade de numeros pares: %d\n", pares);
printf("Quantidade de numeros impares: %d", impares);



Exercicio 25
int num, maior = 0, contagem = 1;

while(contagem < 16){
    scanf("%d", &num);

    if(num > 30){
        maior++;
    }

    contagem++;
}

printf("A quantidade de numeros maiores que 30 e de: %d", maior);



Exercicio 26
int num, soma, negativos = 0, contagem = 1;

while(contagem < 21){
    scanf("%d", &num);
    if(num<0){
        negativos++;
    }else if(num>0){
        soma = soma + num;
    }
    contagem++;
}

printf("A soma dos positivos e: %d, e o total de negativos e: %d", soma, negativos);
*/





















    return 0;
}
