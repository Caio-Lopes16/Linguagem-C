#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char nome[20];
    int ID;
    struct no * back, * next;
}no;

struct no *topo, *auxiliar;

void Enterdata(){
    printf("\nID do funcionario: ");
    scanf("%d", &topo->ID);
    printf("Nome do funcionario: ");
    scanf("%s", &topo->nome);
}

void Push(){
    auxiliar = topo;
    topo = (no*)malloc(sizeof(no));
    Enterdata();
    topo->next = NULL;
    topo->back = NULL;
    if(auxiliar == NULL){
        auxiliar = topo;
    }else{
        topo->back = auxiliar;
        auxiliar->next = topo;
    }
    printf("\nFuncionario adicionado com sucesso!\n\n");
}

void Top(){
    if(topo == NULL){
        printf("\nA pilha esta vazia!\n\n");
    }else{
        printf("\nID................. %d\n", topo->ID);
        printf("FUNCIONARIO........ %s\n\n", topo->nome);
    }
}

void Pop(){
    if(topo == NULL){
        printf("\nA pilha esta vazia!\n\n");
    }else{
        if(topo->back == NULL){
            free(topo);
            topo = NULL;
            auxiliar = NULL;
        }else{
            auxiliar = topo->back;
            free(topo);
            topo = NULL;
            auxiliar->next = NULL;
            topo = auxiliar;
            auxiliar = auxiliar->back;
        }
        printf("\nFuncionario removido com sucesso!\n\n");
    }
}

void PopID(){
    if(topo == NULL){
        printf("\nA pilha esta vazia!\n\n");
    }else{
        int IDpesquisa;
        printf("\nID para excluir: ");
        scanf("%d", &IDpesquisa);
        auxiliar = topo;
        while(auxiliar != NULL){
            if(auxiliar->ID == IDpesquisa){
                while(topo != auxiliar){
                    topo->next = NULL;
                    topo = topo->back;
                    topo->next->back = NULL;
                    free(topo->next);
                }
                if(topo->back == NULL){
                    free(topo);
                    topo = NULL;
                    auxiliar = NULL;
                }else{
                    auxiliar = auxiliar->back;
                    free(topo);
                    topo = NULL;
                    topo = auxiliar;
                }
            }else{
                auxiliar = auxiliar->back;
            }
        }
        printf("\nFuncionario removido com sucesso!\n\n");
    }
}

void AllList(){
    if(topo == NULL){
        printf("\nA pilha esta vazia!\n\n");
    } else{
        auxiliar = topo;
        while(auxiliar != NULL){
            printf("\nID - %d | NOME - %s", auxiliar->ID, auxiliar->nome);
            auxiliar = auxiliar -> back;
        }
        auxiliar = topo -> back;
    }

}

int main(){
    int opcao;
    topo = NULL;
    auxiliar = NULL;

    do{
        system("cls");
        printf("===============================");
        printf("\n       SISTEMA DE PILHA\n");
        printf("===============================\n");
        printf("\nAdicionar funcionario  [1]");
        printf("\nConsultar topo         [2]");
        printf("\nRemover topo           [3]");
        printf("\nRemover por ID         [4]");
        printf("\nMostrar lista toda     [5]");
        printf("\nSAIR                   [6]\n");
        printf("\nEscolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                Push();
                printf("\n\n");
                system("pause");
                break;
            case 2:
                Top();
                printf("\n\n");
                system("pause");
                break;
            case 3:
                Pop();
                printf("\n\n");
                system("pause");
                break;
            case 4:
                PopID();
                printf("\n\n");
                system("pause");
                break;
            case 5:
                AllList();
                printf("\n\n");
                system("pause");
                break;
            case 6:
                printf("\nObrigado por utilizar!\n\n");
                printf("\n\n");
                system("pause");
                break;
            default:
                printf("\nOpcao invalida, tente novamente!\n");
                system("pause");
                break;
        }
    }while(opcao != 6);
    return 0;
}
