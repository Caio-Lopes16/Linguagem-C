#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int ra;
    char nome[20];
    struct no * next;
} no;

struct no *corrente, *auxiliar, *inicio;

void Enterdata(){
    printf("\nInforme o Ra: ");
    scanf("%d", &corrente->ra);
    printf("\Informe o nome: ");
    scanf(" %s", &corrente->nome);

}

void deletar() {
    int RApesquisa;
    printf("\nApagar pelo RA: ");
    scanf("%d", &RApesquisa);

    if (inicio == NULL) {
        printf("\nLista vazia. Nada para apagar.\n");
        return;
    }

    auxiliar = inicio;
    struct no *anterior = NULL;

    while (auxiliar != NULL && auxiliar->ra != RApesquisa) {
        anterior = auxiliar;
        auxiliar = auxiliar->next;
    }

    if (auxiliar == NULL) {
        printf("\nElemento com RA %d não encontrado.\n", RApesquisa);
        return;
    }

    if (auxiliar == inicio) {
        inicio = auxiliar->next;
    } else {
        anterior->next = auxiliar->next;
    }

    free(auxiliar);
    printf("\nElemento com RA %d removido.\n", RApesquisa);
}

void pesquisa() {

    int achou, k;
    char nomeP[20];
    if (inicio == NULL){
        printf("Lista vazia :(\n\n");
        system("pause");
        return;
    }

    printf("\nInforme o nome do Aluno: ");
    scanf("%s", &nomeP);
    achou = 0;
    corrente = inicio;
    k=0;
    while(corrente != NULL){
        k++;
        if(strcmp(corrente->nome, nomeP)==0){
            printf("\nO registro foi encontrado na posicao %d da lista\n\n", k);
            achou = 1;
            break;
        } else{
            corrente=corrente->next;
        }
    }

    if(achou==0){
        printf("\nRegistro nao consta na lista\n\n");
        system("pause");
    }
       printf("\n\n");

}

void exibir(){

    if (inicio == NULL){
        printf("\nLista vazia :(\n\n");
        system("pause");
        return; // <- Adicionado para evitar acessar ponteiros nulos
    }
    auxiliar = inicio;

    while(auxiliar != NULL)
    {
        printf("\n %i - %s", auxiliar->ra, auxiliar->nome);
        auxiliar = auxiliar->next;
    }
    printf("\n\n");

}

void insert(){
    corrente = (no*)malloc(sizeof(no));
    corrente->next = NULL;
    Enterdata();

     if (inicio == NULL || strcmp(corrente->nome, inicio->nome) < 0) {
        corrente->next = inicio;
        inicio = corrente;

    } else {
        auxiliar = inicio;

        while (auxiliar->next != NULL && strcmp(auxiliar->next->nome, corrente->nome) < 0) {
                auxiliar = auxiliar->next;
            }

        corrente->next = auxiliar->next;
        auxiliar->next = corrente;
    }

}



int main(){
    corrente = NULL;
    auxiliar = NULL;
    inicio = NULL;
    int op;

    do{
    system("cls");
    printf("\n [ 1 ] Inserindo elementos na lista");
    printf("\n [ 2 ] Exibindo os elementos da lista");
    printf("\n [ 3 ] Removendo os elementos da lista");
    printf("\n [ 4 ] Consulta dos elementos da lista");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &op);

    switch (op)
        {
        case 1:
            insert();
            system("pause");
            break;

        case 2:
            exibir();
            system("\n\npause");
            break;

        case 3:
            deletar();
            system("\n\npause");
            break;

        case 4:
            pesquisa();
            system("\n\npause");
            break;

        default :
            printf("\n\n\nOpcao invalida, tente novamente\n\n");
            system("pause");

        }
    }while(op != 5);

return 0;

}
