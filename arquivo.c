#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("exemplo.bin", "wb");
    if(arquivo == NULL){
        printf("Erro ao abrir.\n");
        return 1;
    }

    fclose(arquivo);
    system("pause");
    return 0;
}