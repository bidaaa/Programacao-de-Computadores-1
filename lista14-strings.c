#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Lista de Exercícios 14 - Strings
Nome: Vinicius Ribas Bida
RA: 25070323
Data: 16/06/2025
*/

int main()
{
/*
Exercício 1

char str[50];
int i, len;

printf("Digite uma string: ");
fgets(str, sizeof(str), stdin);

len = strlen(str);

printf("A string invertida e: ");
for(i = len - 1; i>=0; i--){
    printf("%c", str[i]);
}
printf("\n");



Exercicio 2
char A[50], B[50];
int i, j, len;

printf("Digite uma string: ");
fgets(A, sizeof(A), stdin);

len = strlen(A);
j=len;

for(i=0; i<50; i++){
    B[i] = A[i];
}

for(i=0;i<50;i++){
    A[j]=B[i];
    j--;
}

printf("A string invertida e: ");
for(i=0;i<50;i++){
    printf("%c", A[i]);
}
printf("\n");



Exercicio 3
char str[50];
int i, cont=0;

printf("Digite uma string: ");
fgets(str, sizeof(str), stdin);

for(i=0;i<50;i++){
   if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='e'){
    str[i] = 'g';
    cont++;
   }
   printf("%c", str[i]);
}

printf("O numero de vogais e: %d", cont);



Exercicio 4
char str[50];
int i = 0, j, len, palindromo = 1;

printf("Digite uma string:");
fgets(str, sizeof(str), stdin);

len = strlen(str);
j = len-2;

while(j>i){
    if(str[i] != str[j]){
        palindromo = 0;
        break;
    }
    i++;
    j--;
}

if(palindromo){
    printf("A string %s e um palindromo\n", str);
}else{
    printf("A string %s nao e um palindromo", str);
}



Exercicio 5
char A[50], B[50];
int flag;

printf("Digite a primeira string: ");
fgets(A, sizeof(A), stdin);
printf("Digite a segunda string: ");
fgets(B, sizeof(B), stdin);

flag = strstr(A, B);

if(flag){
    printf("A string 2 esta dentro da string 1");
}else printf("A string 2 nao esta dentro da string 1");



Exercicio 7
char str[256];
int i;

printf("Digite uma frase: ");
fgets(str, sizeof(str), stdin);

for(i=0; str[i] != '\0'; i++){
    if(str[i] >= 97 && str[i] <= 122){
        str[i] = str[i] - 32;
    }
}

printf("String em maisculas: %s", str);



Exercicio 8
char str[256];
int i;

printf("Digite uma frase: ");
fgets(str, sizeof(str), stdin);

for(i=0; str[i] != '\0'; i++){
    if(str[i] >= 65 && str[i] <= 90){
        str[i] = str[i] + 32;
    }
}

printf("String em minusculas: %s", str);



Exercicio 9
char mercadoria[100];
float total, desconto, aVista;
const float percentual_desconto = 0.10;

printf("Digite o nome da mercadoria: ");
fgets(mercadoria, sizeof(mercadoria), stdin);

printf("Digite o valor da mercadoria: R$ ");
scanf("%f", &total);

desconto = total * percentual_desconto;
aVista = total - desconto;

printf("Nome da mercadoria: %s\n", mercadoria);
printf("Valor total: R$%.2f\n", total);
printf("Desconto: R$%.2f\n", desconto);
printf("Valor a vista com desconto: R$%.2f", aVista);



Exercicio 10
char str[100];
int i, j, k;

printf("Digite a string: ");
fgets(str, sizeof(str), stdin);

printf("Digite dois numeros (o primeiro deve ser menor que o segundo): ");
scanf("%d %d", &i, &j);

printf("O segmento da string de %d a %d e: ", i, j);
for(k=i; k<=j; k++){
    printf("%c", str[k]);
}
printf("\n");



Exercicio 11
char str[256];
int i;

printf("Digite uma frase: ");
fgets(str, sizeof(str), stdin);

for(i=0; str[i] != '\0'; i++){
    str[i] = str[i] + 3;
}
printf("Frase criptografada: %s", str);



Exercicio 12
*/
char A[256], B[256];
int i = 0;

printf("Digite a primeira string: ");
fgets(A, sizeof(A), stdin);

printf("Digite a segunda string: ");
fgets(B, sizeof(B), stdin);

while(A[i]==B[i]){
    if(A[i] == '\0'){
        break;
    }
    i++;
}

printf("Strings em ordem alfabetica:\n");

if(A[i]<B[i]){
    printf("%s", A);
    printf("%s", B);
}else if(A[i]>B[i]){
    printf("%s", B);
    printf("%s", A);
}else printf("As duas strings são identicas");



return 0;
}
