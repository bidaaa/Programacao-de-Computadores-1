#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // FILE *arquivo;
    // arquivo = fopen("exemplo.bin", "wb");
    // if(arquivo == NULL){
    //     printf("Erro ao abrir.\n");
    //     return 1;
    // }

    // fclose(arquivo);
    // system("pause");
    // return 0;


    // FILE *arquivo;
    // char string[100];
    // int i;
    // arquivo = fopen("arquivo.txt", "w");
    // if(arquivo == NULL){
    //     printf("Erro ao abrir o arquivo.\n");
    //     system("pause");
    //     exit(1);
    // }
    // printf("Digite uma string: ");
    // gets(string);
    // for(i=0; i<strlen(string); i++){
    //     fputc(string[i], arquivo);
    // }
    // fclose(arquivo);
    // system("pause");
    // return 0;


    // FILE *arquivo;
    // char c;
    // arquivo = fopen("arquivo.txt", "r");
    // if(arquivo == NULL){
    //     printf("Erro ao abrir o arquivo.\n");
    //     system("pause");
    //     exit(1);
    // }
    // int i;
    // for(i=0; i<50; i++){
    //     c = fgetc(arquivo);
    //     printf("%c", c);
    // }
    // fclose(arquivo);
    // system("pause");
    // return 0;

    FILE *arquivo;
    char c;
    arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    while((c = fgetc(arquivo)) != EOF){
        printf("%c", c);
    }
    printf("\n");
    fclose(arquivo);
    system("pause");
    return 0;
 }