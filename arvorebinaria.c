#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *direita;
    struct no *esquerda;
    int grau;
    int nivel;
}
no;

no *corrente, *raiz, *auxiliar;

void inserir()
{
    corrente = (no *) malloc(sizeof(no));

    corrente->direita = NULL;
    corrente->esquerda = NULL;

    printf("VALOR: ");
    scanf("%i", &corrente->valor);

    if(raiz == NULL)
    {
        raiz = corrente;
        printf("add na raiz\n");
    }
    else
    {
        auxiliar = raiz;

        if(corrente->valor == auxiliar->valor)
        {
            printf("chave ja existe!\n");
            free(corrente);
            return;
        }

        while(1)
        {
            if(corrente->valor > auxiliar->valor)
            {
                if(auxiliar->direita == NULL)
                {
                    if(corrente->valor == auxiliar->valor)
                    {
                        printf("chave ja existe!\n");
                        free(corrente);
                        return;
                    }
                    auxiliar->direita = corrente;
                    printf("add a direita\n");
                    break;
                }
                auxiliar = auxiliar->direita;
                printf("avancou a direita\n");
                continue;
            }
            else
            {
                if(auxiliar->esquerda == NULL)
                {
                    if(corrente->valor == auxiliar->valor)
                    {
                        printf("chave ja existe!\n");
                        free(corrente);
                        return;
                    }
                    auxiliar->esquerda = corrente;
                    printf("add a esquerda\n");
                    break;
                }
                auxiliar = auxiliar->esquerda;
                printf("avancou a esquerda\n");
                continue;
            }
        }
    }
}

void Exibir(no *n) {
    if (n == NULL) {
        return;
    }

    printf("%d ", n->valor);  // Exibe o valor do nó atual

    if (n->esquerda != NULL) {
        printf("(Esquerda: ");
        Exibir(n->esquerda);  // Percorre a subárvore à esquerda
        printf(") ");
    }

    if (n->direita!= NULL) {
        printf("(Direita: ");
        Exibir(n->direita);  // Percorre a subárvore à direita
        printf(") ");
    }

}

int main() {
    int opc;

    do {
        system("cls");
        printf("========================\n");
        printf("    A R V O R E   B I    \n");
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
                inserir();
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
                //search_tree(raiz);
                //system("pause");
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

