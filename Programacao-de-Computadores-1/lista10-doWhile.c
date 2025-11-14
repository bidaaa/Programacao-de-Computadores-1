#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Lista de Exercicios 10 - Do While
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 12/05/2025
*/


int main()
{
/*
//Exercicio 1
int i=0, soma=0, n = 0;
do{
    i = i+2;
    soma = soma + i;
    n++;
}while(n<50);

printf("%d", soma);



Exercicio 2
int i = 10;

do{
    printf("%d\n", i);
    i--;
}while(i>=0);

printf("Fim");



Exercicio 3
int num, div = 1, soma = 0;
scanf("%d", &num);

do{
    if(num%div==0){
        soma = soma+div;
    }
    div++;
}while(div<num);

printf("%d", soma);



Exercicio 4
int linhas, contlinhas=1, contcolunas=1, x=1;

printf("Digite o numero de linhas: ");
scanf("%d", &linhas);

do{
    if(contlinhas==contcolunas){
        printf("%d\n", x);
        contlinhas++;
        x++;
        contcolunas = 1;
    }
    else{
        printf("%d ", x);
        contcolunas++;
        x++;
    }
}while(contlinhas<=linhas);



Exercicio 5
int pedido, data, quant;
float preco, soma;

do{
    printf("Insira o numero do pedido (ou 0 para terminar): ");
    scanf("%d", &pedido);
        if(pedido==0){
            break;
        }
    printf("Insira o dia do pedido: ");
    scanf("%d", &data);
    printf("Insira o mes do pedido: ");
    scanf("%d", &data);
    printf("Insira o ano do pedido: ");
    scanf("%d", &data);

    printf("Insira o preco do produto: ");
    scanf("%f", &preco);
    printf("Insira a quantidade do produto: ");
    scanf("%d", &quant);

    soma = soma + (preco*quant);
}while(1);

printf("A soma dos pedidos e: %f", soma);



Exercicio 6
int idade, peso, sexo, estado, casados=0, solteiros=0, separados=0, viuvos=0, contagemPeso=0, somaPeso=0, mediaPeso, contagemIdade=0, somaIdade=0, mediaIdade;

do{
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if(idade!=0){
        contagemIdade++;
        somaIdade = somaIdade+idade;
        printf("Digite o peso: ");
        scanf("%d", &peso);
        contagemPeso++;
        somaPeso = somaPeso+peso;
        printf("Digite o sexo: 1 para homem e 2 para mulher ");
        scanf("%d", &sexo);
        printf("Digite o estado civil: 1 para casado, 2 para solteiro, 3 para separado e 4 para viuvo");
        scanf("%d", &estado);
        switch(estado){
            case 1:
                casados++;
                break;
            case 2:
                solteiros++;
                break;
            case 3:
                separados++;
                break;
            case 4:
                viuvos++;
                break;
            default:
                printf("numero invalido");
        }
    }else{
        break;
    }
}while(1);

mediaIdade = somaIdade/contagemIdade;
mediaPeso = somaPeso/contagemPeso;

printf("Quantidade de casados: %d\n", casados);
printf("Quantidade de solteiros: %d\n", solteiros);
printf("Quantidade de separados: %d\n", separados);
printf("Quantidade de viuvos: %d\n", viuvos);
printf("Media de peso: %d\n", mediaPeso);
printf("Media de idade: %d", mediaIdade);



Exercicio 7
float largura, comprimento, area, total = 0;
char comodo[50];

do{
    printf("Digite o nome do comodo (ou FIM para encerrar): ");
    scanf(" %[^\n]", comodo);

    if (strcmp(comodo, "FIM") == 0) {
        break;
    }

    printf("Digite a largura e o comprimento: ");
    scanf("%f %f", &largura, &comprimento);

    area = largura * comprimento;
    total = total + area;

    printf("O comodo %s tem a area de: %.2f metros quadrados\n", comodo, area);
}while(1); 

    printf("Area total dos comodos: %.2f metros quadrados\n", total);
*/

return 0;
}






