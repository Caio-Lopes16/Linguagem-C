#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fila
{
    struct fila *next;
    int regs;
} fila;

struct fila *inicio, *corrente, *auxiliar;

void Seaqueue(){
   if(inicio == NULL){
        printf("Lista vazia, insira um elemento para prosseguir\n\n");
        return;
    }
    int regsP;
    printf("Digite um numero para encontrar sua posicao: ");
    scanf("%d", &regsP);

    auxiliar = inicio;
    int k = 1;

    while(auxiliar != NULL && auxiliar->regs != regsP){
        auxiliar = auxiliar->next;
        k++;
    }

    if(auxiliar == NULL){
        printf("Elemento nao encontrado na fila");
    } else{
        printf("Elemento encontrado na posicao %d da fila", k);
    }

}


void Dequeue(){
    if(inicio == NULL){
        printf("Lista vazia, insira um elemento para prosseguir\n\n");
        return;
    }
    auxiliar = inicio;
    inicio = auxiliar->next;
    auxiliar->next = NULL;
    free(auxiliar);
    auxiliar = NULL;
    printf("Primeiro elemento da fila removido com sucesso!! . . .");
}


void Enqueue(){
    auxiliar = corrente;
    corrente = (fila*)malloc(sizeof(fila));

    printf("Insira um numero na lista: ");
    scanf("%d", &corrente->regs);

    if(inicio == NULL){
        inicio = corrente;
        corrente -> next = NULL;
        auxiliar = NULL;
    } else{
        auxiliar -> next = corrente;
        corrente -> next = NULL;
    }
    printf("\nElemento inserido com sucesso! . . .\n\n");
    auxiliar = inicio;
    printf("----------------------------\n");
    printf(" F I L A   C O M P L E T A\n");
    printf("----------------------------\n\n");
    while(auxiliar != NULL){
        printf(" %d |", auxiliar->regs);
        auxiliar = auxiliar->next;
    }
}


int main(){

    int opc;
    fila *inicio = NULL;
    fila *corrente = NULL;
    fila *auxiliar = NULL;

    do{
        system("cls");
        printf("======================\n");
        printf("    S I S T E M A      \n");
        printf("         D  E          \n");
        printf("      F  I  L  A       \n");
        printf("======================\n\n");
        printf("INSERIR ELEMENTO NA FILA    [1]\n");
        printf("REMOVER ELEMENTO DA FILA    [2]\n");
        printf("CONSULTAR ELEMENTO DA FILA  [3]\n");
        printf("SAIR DO SISTEMA             [4]\n\n");
        printf("-------------------------\n");
        printf("Escolha a opcao ---> ");
        scanf("%d", &opc);

        switch (opc){
            case 1:
                Enqueue();
                printf("\n\n");
                system("pause");
                break;
            case 2:
                Dequeue();
                printf("\n\n");
                system("pause");
                break;
            case 3:
                Seaqueue();
                printf("\n\n");
                system("pause");
                break;
            case 4:
                system("cls");
                printf("\n\nObrigado por utilizar . . .\n\n");
                system("pause");
                break;
            default:
                printf("Opcao invalida, tente novamente . . .");
                system("pause");
                break;
        }
    } while (opc != 4);
    return 0;
}

