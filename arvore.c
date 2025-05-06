#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da árvore
typedef struct no {
    int valor;
    struct no *next;
    struct no *back;
    struct no *below;
} no;

no *raiz = NULL, *auxiliar, *corrente;

void Enterdata(){
    printf("Insira um numero para o no: ");
    scanf("%d", &corrente -> valor);
}

void Insert_Tree(){
    int op;
    corrente=(no*)malloc(sizeof(no));
    corrente->next=NULL;
    corrente->back=NULL;
    corrente->below=NULL;
    Enterdata();

    if(raiz == NULL){
        raiz=corrente;
        printf("\nInstalado a raiz da arvore...\n\n");
    } else {
        printf("\nInforme o caminho a ser alocado o dado [1]Esquerda [2]Direita [3]Abaixo - - - > ");
        scanf("%d", &op);
    }

    if(op == 1){
        Aloca_Esquerda();
    } else if(op == 2) {
        Aloca_Direita();
    } else if(op == 3){
        Aloca_Abaixo();
    }

}

void Aloca_Esquerda(){
    auxiliar = raiz;

    while(auxiliar->back != NULL){
        auxiliar = auxiliar -> back;
    }

    auxiliar -> back = corrente;
    printf("\nAlocado com sucesso o dado a esquerda da arvore\n\n");
    //system("pause");

}

void Aloca_Direita(){
    auxiliar = raiz;

    while(auxiliar->next != NULL){
        auxiliar = auxiliar -> next;
    }

    auxiliar -> next = corrente;
    printf("\nAlocado com sucesso o dado a direita da arvore\n\n");
    //system("pause");
}

void Aloca_Abaixo(){
    auxiliar = raiz;

    while(auxiliar->below != NULL){
        auxiliar = auxiliar -> below;
    }

    auxiliar -> below = corrente;
    printf("\nAlocado com sucesso o dado a abaixo da arvore\n\n");
    //system("pause");
}

/*void Exibir(){
    if(raiz == NULL){
        printf("\nArvore esta vazia. . .");
        return;
    } else {
        printf("%d", raiz->valor);
        printf("\n\n");
        if(raiz->back != NULL) Exibir(raiz->back);
        if(raiz->next != NULL) Exibir(raiz->next);
        if(raiz->below!= NULL) Exibir(raiz->below);
    }
}*/

void Exibir(no *n) {
    if (n == NULL) {
        return;
    }

    printf("%d ", n->valor);  // Exibe o valor do nó atual

    if (n->back != NULL) {
        printf("(Esquerda: ");
        Exibir(n->back);  // Percorre a subárvore à esquerda
        printf(") ");
    }

    if (n->next != NULL) {
        printf("(Direita: ");
        Exibir(n->next);  // Percorre a subárvore à direita
        printf(") ");
    }

    if (n->below != NULL) {
        printf("(Abaixo: ");
        Exibir(n->below);  // Percorre a subárvore abaixo
        printf(") ");
    }
}


int main() {
    int opc;

    do {
        system("cls");
        printf("========================\n");
        printf("     A R V O R E        \n");
        printf("========================\n\n");
        printf("[1] Inserir elemento\n");
        printf("[2] Exibir elementos\n");
        printf("[3] Pesquisar\n");
        printf("[4] Sair\n");
        printf("------------------------\n");
        printf("Escolha a opcao ---> ");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                Insert_Tree();
                system("pause");
                break;
            case 2:
                if (raiz == NULL) {
                    printf("A arvore esta vazia.\n");
                } else {
                    printf("Elementos da arvore: ");
                    Exibir(raiz);  // Começa a exibição pela raiz
                    printf("\n");
                }
                system("pause");
                break;
            case 3:
                printf("\nSem funcao ainda");
                system("pause");
                break;
            case 4:
                printf("Encerrando o programa...\n");
                system("pause");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                system("pause");
                break;
        }
    } while (opc != 4);

    return 0;
}
