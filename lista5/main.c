#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista de Exercicios 5
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 07/04/25
*/

int main()
{
/*
Exercicio 1
int num;
printf("Digite um numero:");
scanf("%d", &num);

if(num>20){
    printf("O numero e maior que 20");
}else printf("O numero e menor ou igual a 20");



Exercicio 2
int num, num2, soma;
printf("Escreva dois numeros separados por um espaco: ");
scanf("%d %d", &num, &num2);

soma = num+num2;

if(soma > 10){
    printf("A soma dos numeros e: %d", soma);
}else printf("A soma ficou menor que 10");



Exercicio 3
int num;
printf("Digite um numero:");
scanf("%d", &num);

if(num % 2 == 0){
    printf("O numero e par");
}else printf("O numero e impar");



Exercicio 4
int N;
printf("Digite um numero:");
scanf("%d", &N);
if(N > 0){
    printf("O numero e positivo");
}else if (N < 0){
    printf("O numero e negativo");
}else printf("O numero e nulo");



Exercicio 5
int num, num2, soma, maior, menor;
printf("Digite dois numeros separados por um espaco: ");
scanf("%d %d", &num, &num2);

soma = num+num2;
maior = soma + 8;
menor = soma - 5;

if(soma > 20){
    printf("%d", maior);
}else if(soma < 20){
    printf("%d", menor);
}else printf("A soma e igual a 20");



Exercicio 6
float num, raiz, quadrado;
printf("Digite um numero:");
scanf("%f", &num);
raiz = sqrt(num);
quadrado = num * num;

if(num >= 0){
    printf("A raiz quadrada de %f e: %f", num, raiz);
}else printf("O quadrado de %f e: %f", num, quadrado);



Exercicio 7
int A, B;
printf("Digite dois numeros separados por um espaco:");
scanf("%d %d", &A, &B);

if(A > B){
    printf("O numero de maior valor numerico e: %d, e o de menor valor numerico e: %d", A, B);
}else if(B > A){
    printf("O numero de maior valor numerico e: %d, e o de menor valor numerico e: %d", B, A);
}else printf("Os dois numeros tem o mesmo valor numerico");



Exercicio 8
int A, B;
printf("Digite dois numeros separados por um espaco: ");
scanf("%d %d", &A, &B);

if(A % B == 0){
    printf("O numero %d e divisivel por %d", A, B);
}else printf("O numero %d nao e divisivel por %d", A, B);



Exercicio 9
int num;
printf("Digite um numero:");
scanf("%d", &num);

if(num % 3 == 0){
    printf("O numero %d e multiplo de 3", num);
}else printf("O numero %d nao e multiplo de 3", num);



Exercicio 10
int num;
printf("Digite um numero:");
scanf("%d", &num);

if(num % 5 == 0){
    printf("O numero %d e divisivel por 5", num);
}else printf("O numero %d nao e divisivel por 5", num);



Exercicio 11
int num;
printf("Digite um numero:");
scanf("%d", &num);
if(num%3 == 0 && num%7 == 0){
    printf("O numero %d e divisivel por 3 e 7", num);
}else printf("O numero %d nao e divisivel por 3 e 7", num);



Exercicio 12
int num;

printf("Digite um numero: ");
scanf("%d", &num);

if(num % 10 == 0){
    printf("O numero e divisivel por 2, 5 e 10");
}else if(num % 5 == 0){
    printf("O numero e divisivel 5");
}else if(num % 2 == 0){
    printf("O numero e divisiel por 2");
}else printf("O numero nao e divisivel por 10, 5 ou 2");



Exercicio 13
float salario, prestacao, limite;

printf("Digite seu salario bruto: ");
scanf("%f", &salario);

printf("Digite o valor da prestacao desejada: ");
scanf("%f", &prestacao);

limite = salario * 0.3;

if(prestacao <= limite){
    printf("O emprestimo pode ser concedido");
}else printf("O emprestimo nao sera possivel");



Exercicio 14
int a, b, c, d, maior, menor;

printf("Digite o valor de A: ");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);
printf("Digite o valor de C: ");
scanf("%d", &c);
printf("Digite o valor de D: ");
scanf("%d", &d);

maior = a;
menor = a;

if (b > maior){
    maior = b;
}if(c > maior){
    maior = c;
}if(d > maior){
    maior = d;
}

if (b < menor){
    menor = b;
}if(c < menor){
    menor = c;
}if(d < menor){
    menor = d;
}

printf("Maior valor: %d\n", maior);
printf("Menor valor: %d", menor);



Exercicio 15
int a, b, c;

printf("Digite o valor de a: ");
scanf("%d", &a);
printf("Digite o valor de b: ");
scanf("%d", &b);
printf("Digite o valor de c: ");
scanf("%d", &c);


if (a <= b && b <= c) {
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);
} else if (a <= c && c <= b) {
    printf("Ordem crescente: %d, %d, %d\n", a, c, b);
} else if (b <= a && a <= c) {
    printf("Ordem crescente: %d, %d, %d\n", b, a, c);
} else if (b <= c && c <= a) {
    printf("Ordem crescente: %d, %d, %d\n", b, c, a);
} else if (c <= a && a <= b) {
    printf("Ordem crescente: %d, %d, %d\n", c, a, b);
} else {
    printf("Ordem crescente: %d, %d, %d\n", c, b, a);
}



Exercicio 16
int a, b, c;

printf("Digite o valor de a: ");
scanf("%d", &a);
printf("Digite o valor de b: ");
scanf("%d", &b);
printf("Digite o valor de c: ");
scanf("%d", &c);


if (a <= b && b <= c) {
    printf("Ordem decrescente: %d, %d, %d\n", c, b, a);
} else if (a <= c && c <= b) {
    printf("Ordem decrescente: %d, %d, %d\n", b, c, a);
} else if (b <= a && a <= c) {
    printf("Ordem decrescente: %d, %d, %d\n", c, a, b);
} else if (b <= c && c <= a) {
    printf("Ordem decrescente: %d, %d, %d\n", a, c, b);
} else if (c <= a && a <= b) {
    printf("Ordem decrescente: %d, %d, %d\n", b, a, c);
} else {
    printf("Ordem decrescente: %d, %d, %d\n", a, b, c);
}



Exercicio 17
int num;

printf("Digite um numero: ");
scanf("%d", &num);

if(20 < num && num < 90){
    printf("O numero esta entre 20 e 90");
}else printf("O numero nao esta entre 20 e 90");



Exercicio 18
int num;

printf("Digite um numero: ");
scanf("%d", &num);

if(num == 5){
    printf("O numero e igual a 5");
}else if(num == 200){
    printf("O numero e igual a 200");
}else if(num == 400){
    printf("O numero e igual a 400");
}else if(500 < num && num < 1000){
    printf("O numero esta entre 500 e 1000");
}else printf("O valor nao esta em nenhum dos escopos do algoritmo");



Exercicio 19
float a, b, raiz, quadrado;

printf("Digite dois numeros: ");
scanf("%f %f", &a, &b);

if(a > b){
    raiz = sqrt(a);
    quadrado = b * b;
    printf("A raiz quadrada do maior numero e o quadrado do menor sao: %f e %f", raiz, quadrado);
}else if (b > a){
    raiz = sqrt(b);
    quadrado = a * a;
    printf("A raiz quadrada do maior numero e o quadrado do menor sao: %f e %f", raiz, quadrado);
}



Exercicio 20
float IMC, peso, altura;

printf("Digite seu peso em quilos: ");
scanf("%f", &peso);

printf("Digite sua altura em metros: ");
scanf("%f", &altura);

IMC = peso / (altura * altura);

printf("%f", IMC);
if(IMC < 20){
    printf("O seu IMC esta: abaixo do peso");
}else if(20 < IMC && IMC < 25){
    printf("O seu IMC esta: peso normal");
}else if(25 < IMC && IMC < 30){
    printf("O seu IMC esta: sobre peso");
}else if(30 < IMC && IMC < 40){
    printf("O seu IMC esta: obeso");
}else printf("O seu IMC esta: obeso morbido");



Exercicio 21
float saldo, credito, juro;

printf("Digite seu saldo medio: ");
scanf("%f", &saldo);

if(saldo <= 500){
    credito = 0;
}else if(saldo >= 501 && saldo <= 1000){
    credito = saldo * 0.3;
}else if(saldo >= 1001 && saldo <= 3000){
    credito = saldo * 0.4;
}else credito = saldo * 0.5;

juro = credito * 1.02;

printf("O saldo medio e valor do credito sao, respectivamente: %f e %f", saldo, juro);
*/

    return 0;
}
