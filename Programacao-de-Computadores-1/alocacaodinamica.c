#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    int matricula;  
    char nome[50];     
    float notas[3];     
};

struct Cadastro {
    char nome[100];
    int idade;
    char endereco[150];
};

struct Cadastro* alocaECadastra(int n) {
    struct Cadastro *vetor = (struct Cadastro*) malloc(n * sizeof(struct Cadastro));

    if (vetor == NULL) {
        return NULL;
    }
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    for (int i = 0; i < n; i++) {
        printf("\n--- Preenchendo dados do Cadastro %d ---\n", i + 1);

        printf("Digite o nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = 0;

        printf("Digite a idade: ");
        scanf("%d", &vetor[i].idade);

        while ((c = getchar()) != '\n' && c != EOF);

        printf("Digite o endereco: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
        vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = 0;
    }

    return vetor;
}

int main(){
    //Exercício 1
    /*
    printf("char:    %zu bytes\n", sizeof(char));
    printf("int:     %zu bytes\n", sizeof(int));
    printf("float:   %zu bytes\n", sizeof(float));
    printf("double:  %zu bytes\n", sizeof(double));
    */
   //Exercício 2
   /*
   struct Aluno aluno_exemplo;

    size_t tamanho_estrutura = sizeof(struct Aluno);
    
    printf("O tamanho total em memória: %zu bytes\n\n", tamanho_estrutura);

    printf("Detalhamento do tamanho de cada membro:\n");
    printf("- matricula (int):    %zu bytes\n", sizeof(aluno_exemplo.matricula));
    printf("- nome (char[50]):    %zu bytes\n", sizeof(aluno_exemplo.nome));
    printf("- notas (float[3]):   %zu bytes\n", sizeof(aluno_exemplo.notas));
    printf("----------------------------------------\n");
   */
   //Exercicio 3
   /*
    int numeroDeCadastros;
    struct Cadastro *ponteiroVetor;

    printf("Quantas pessoas voce deseja cadastrar? ");
    scanf("%d", &numeroDeCadastros);

    if (numeroDeCadastros <= 0) {
        printf("Numero invalido. O programa sera encerrado.\n");
        return 1; 
    }

    ponteiroVetor = alocaECadastra(numeroDeCadastros);

    if (ponteiroVetor == NULL) {
        printf("Nao foi possivel alocar a memoria necessaria. O programa sera encerrado.\n");
        return 1; 
    }

    for (int i = 0; i < numeroDeCadastros; i++) {
        printf("\n--- Cadastro %d ---\n", i + 1);
        printf("Nome: %s\n", ponteiroVetor[i].nome);
        printf("Idade: %d\n", ponteiroVetor[i].idade);
        printf("Endereco: %s\n", ponteiroVetor[i].endereco);
    }
    printf("========================================\n");

    free(ponteiroVetor);
    ponteiroVetor = NULL; 
   */
    //Exercicio 4
    /*
    int tamanho;
    int *vetor; 

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho invalido. O programa sera encerrado.\n");
        return 1; 
    }

    vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Nao foi possivel alocar a memoria necessaria!\n");
        return 1; 
    }

    printf("\n--- Digite os %d elementos do vetor ---\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]); 
    }

    printf("\n--- Vetor lido ---\n");
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    free(vetor);
    vetor = NULL;
    */
    //Exercicio 5
    /*
      int N;
    int *V; 

    do {
        printf("Digite o tamanho do vetor (um valor inteiro positivo): ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("Valor invalido! Por favor, digite um numero maior que zero.\n");
        }
    } while (N <= 0);

    V = (int*) malloc(N * sizeof(int));

    if (V == NULL) {
        printf("Erro de alocacao de memoria! Nao ha memoria suficiente.\n");
        return 1; 
    }

    printf("\n--- Agora, preencha o vetor ---\n");
    printf("Lembre-se: cada valor deve ser maior ou igual a 2.\n");

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor para a posicao [%d]: ", i);
            scanf("%d", &V[i]);

            if (V[i] < 2) {
                printf("Valor invalido! O numero deve ser >= 2. Tente novamente.\n");
            }
        } while (V[i] < 2);
    }

    printf("\n--- Vetor preenchido com sucesso ---\n");
    printf("V = [ ");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("]\n");

    free(V);
    V = NULL; 
    */

return 0;      
}