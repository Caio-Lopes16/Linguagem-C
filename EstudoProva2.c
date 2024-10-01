#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 0;
    int s = 0; // Começar em 0 para contar os alunos com nota abaixo de 6
    char nome[100][20]; // Defina um tamanho fixo para o array
    char nomeseis[100][20]; // Tamanho suficiente para os alunos com notas abaixo de 6
    float notas[100]; // Tamanho suficiente para as notas
    float notaseis[100]; // Tamanho suficiente para as notas abaixo de 6
    int continuar = 0;

    printf("QUANTIDADE DE ALUNOS: \n> ");
    scanf("%i", &n);
    getchar(); // Limpar o buffer do newline

    for (int i = 0; i < n; i++) {
        printf("\n\nNOME DO ALUNO %i: \n> ", i + 1);
        fgets(nome[i], 20, stdin);
        nome[i][strcspn(nome[i], "\n")] = 0; // Remove o newline

        printf("\nMEDIA DO ALUNO %i: \n> ", i + 1);
        scanf("%f", &notas[i]);
        getchar(); // Limpar o buffer do newline

        if (notas[i] < 6) {
            strcpy(nomeseis[s], nome[i]);
            notaseis[s] = notas[i];
            s++;
        }
    }

    char conf;

    do {
        printf("VOCE QUER FAZER UMA CONSULTA? [S/N]: \n> ");
        scanf(" %c", &conf); // O espaço antes de %c consome espaços em branco
        conf = toupper(conf);
        getchar(); // Limpar o buffer do newline

        if (conf == 'S') {
            printf("ALUNOS COM MEDIA ABAIXO DE 6:\n\n");
            for (int j = 0; j < s; j++) {
                printf("ALUNO: %s | NOTA: %.2f\n", nomeseis[j], notaseis[j]);
            }
        } else {
            printf("OBRIGADO!\n");
        }

        printf("\n\nDESEJA CONTINUAR? [1] \nDESEJA PARAR? [2] \n> ");
        scanf("%i", &continuar);

    } while (continuar == 1);

printf("\n\nOBRIGADO POR USAR!!\n\n\n");

    return 0;
}
