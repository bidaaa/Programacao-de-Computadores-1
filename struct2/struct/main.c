#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct pessoa{
    char nome[100];
    struct data nascimento;
};

int main()
{
//Exercício 1
/*
struct pessoa pessoas[6];
int i;

int maisvelha = 0;
int maisnova = 0;

for(i=0;i<6;i++){
    printf("Pessoa %d:\n", i+1);
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoas[i].nome);

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    printf("--------------------------------------\n");
}

for(i=1;i<6;i++){
    if(pessoas[i].nascimento.ano < pessoas[maisvelha].nascimento.ano){
        maisvelha = i;
    }
    else if (pessoas[i].nascimento.ano == pessoas[maisvelha].nascimento.ano){
        if (pessoas[i].nascimento.mes < pessoas[maisvelha].nascimento.mes) {
            maisvelha = i;
        }
        else if (pessoas[i].nascimento.mes == pessoas[maisvelha].nascimento.mes){
            if (pessoas[i].nascimento.dia < pessoas[maisvelha].nascimento.dia){
                maisvelha = i;
        }
    }
}

    if (pessoas[i].nascimento.ano > pessoas[maisnova].nascimento.ano) {
        maisnova = i;
    }
    else if (pessoas[i].nascimento.ano == pessoas[maisnova].nascimento.ano) {
        if (pessoas[i].nascimento.mes > pessoas[maisnova].nascimento.mes) {
            maisnova = i;
        }
        else if (pessoas[i].nascimento.mes == pessoas[maisnova].nascimento.mes) {
            if (pessoas[i].nascimento.dia > pessoas[maisnova].nascimento.dia) {
                maisnova = i;
            }
        }
    }
}

printf("\n----------------------------------------\n");
printf("Resultado da Analise:\n");
printf("Pessoa mais velha: %s\n", pessoas[maisvelha].nome);
printf("Pessoa mais nova:  %s\n", pessoas[maisnova].nome);
printf("----------------------------------------\n");
*/
//Exercício 2










return 0;

}
