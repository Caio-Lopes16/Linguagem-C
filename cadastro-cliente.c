#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PRODUTOS 10
#define MAX_HISTORICO 100

int codigo = 0;
char produto[MAX_PRODUTOS][20];
float valor[MAX_PRODUTOS];
int qtd[MAX_PRODUTOS];
int historico[MAX_PRODUTOS];

int historicoCodigo[MAX_HISTORICO];
char historicoProduto[MAX_HISTORICO][20]; // Nome do produto
int historicoQuantidade[MAX_HISTORICO];
int contadorHistorico = 0; // Contador para o histórico

void Cadastro();
void Consulta();
void Baixa();
void Historico();
void Relatorio ();

int main() {
    int opc;

    do {
        printf("\n        P  R  O  D  U  T  O  S           \n\n");
        printf("\n[1] - Cadastro de produtos.");
        printf("\n[2] - Consulta de produtos.");
        printf("\n[3] - Baixa Estoque.");
        printf("\n[4] - Historico de saida dos produtos.");
        printf("\n[5] - Relatorio de estoque.");
        printf("\n[6] - Sair do programa.");
        printf("\n---------------------------------------");
        printf("\n\nInforme a opcao desejada: \n>");
        scanf("%i", &opc);
        getchar(); // Para consumir o '\n' deixado pelo scanf

        switch (opc) {
            case 1:
                Cadastro();
                break;
            case 2:
                Consulta();
                break;
            case 3:
                Baixa();
                break;
            case 4:
                Historico();
                break;
            case 5:
                Relatorio();
                break;
            case 6:
                system("cls");
                printf("\n\nOBRIGADO POR UTILIZAR O PROGRAMA!!!\n\n\n\n\n\n\n");
                break;
            default:
                printf("Opcao Invalida...\n\n");
                system("pause");
                system("cls");
                break;
        }
    } while (opc != 6);

    return 0;
}

void Cadastro() {
    char validacao;
    do {
        if (codigo >= MAX_PRODUTOS) {
            printf("Limite de produtos cadastrados atingido.\n");
            break;
        }

        printf("\n C A D A S T R O   D E   P R O D U T O S  ");
        printf("\n-----------------------------------------\n\n");

        printf("CODIGO DO PRODUTO: %i\n", codigo + 1);
        printf("DIGITE O NOME DO PRODUTO: \n>");
        fgets(produto[codigo], sizeof(produto[codigo]), stdin);
        produto[codigo][strcspn(produto[codigo], "\n")] = 0; // Remove o '\n'

        printf("\nDIGITE A QUANTIDADE: \n>");
        scanf("%i", &qtd[codigo]);
        getchar(); // Para consumir o '\n'

        printf("\nDIGITE O VALOR DO PRODUTO: \n> RS ");
        scanf("%f", &valor[codigo]);
        getchar(); // Para consumir o '\n'

        printf("\nDESEJA CONTINUAR [S]IM OU [N]AO? \n>");
        scanf("%c", &validacao);
        validacao = toupper(validacao);
        getchar(); // Para consumir o '\n'


        codigo++;
    } while (validacao == 'S' && validacao != 'N');

    printf("\nCADASTRO REALIZADO COM SUCESSO!\n\n");
    system("pause");
    system("cls");
}

void Consulta() {
    char validacao;
    int consulta;

    do {
        printf("\n C O N S U L T A   D E    P R O D U T O S\n");
        printf("----------------------------------------------\n");

        printf("\nDIGITE O CODIGO DO PRODUTO QUE QUER CONSULTAR: \n>");
        scanf("%i", &consulta);
        getchar(); // Para consumir o '\n'

        if (consulta > 0 && consulta <= codigo) {
            int index = consulta - 1; // Ajusta para o índice do array
            printf("\n\nCODIGO DO PRODUTO: %i", consulta);
            printf("\nNOME DO PRODUTO: %s", produto[index]);
            printf("\nVALOR DO PRODUTO: RS %.2f", valor[index]);
            printf("\nQUANTIDADE DO PRODUTO: %i\n", qtd[index]);
        } else {
            printf("\nProduto nao encontrado.\n");
        }

        printf("\nDESEJA CONTINUAR [S]IM OU [N]AO? \n>");
        scanf(" %c", &validacao); // O espaço antes de %c ignora qualquer '\n' restante
        validacao = toupper(validacao);
        system("cls");

    } while (validacao == 'S' && validacao != 'N');
}

void Baixa() {

    char validacao;
    int codigoProduto, quantidadeBaixa;

    printf("\n B A I X A   D E   E S T O Q U E \n");
    printf("--------------------------------------\n");

    do{
    printf("DIGITE O CODIGO DO PRODUTO: \n>");
    scanf("%i", &codigoProduto);
    getchar(); // Para consumir o '\n'

    // Verifica se o código do produto é válido
    if (codigoProduto > 0 && codigoProduto <= codigo) {
        int index = codigoProduto - 1; // Ajusta para o índice do array

        printf("DIGITE A QUANTIDADE A SER BAIXADA: \n>");
        scanf("%i", &quantidadeBaixa);
        getchar(); // Para consumir o '\n'

        // Verifica se a quantidade a ser baixada é válida
        if (quantidadeBaixa <= qtd[index]) {
            qtd[index] -= quantidadeBaixa; // Atualiza a quantidade


            if (contadorHistorico < MAX_HISTORICO) {
                historicoCodigo[contadorHistorico] = codigoProduto;
                strcpy(historicoProduto[contadorHistorico], produto[index]); // Copia o nome do produto
                historicoQuantidade[contadorHistorico] = quantidadeBaixa;

                contadorHistorico++;
            }
            printf("Baixa realizada com sucesso! Nova quantidade: %i\n", qtd[index]);

        } else {
            printf("Quantidade insuficiente em estoque. Disponivel: %i\n", qtd[index]);
        }
    } else {
        printf("Produto não encontrado.\n");
    }
        printf("\nDESEJA CONTINUAR [S]IM OU [N]AO? \n>");
        scanf(" %c", &validacao); // O espaço antes de %c ignora qualquer '\n' restante
        validacao = toupper(validacao);
        system("cls");

    } while (validacao == 'S' && validacao != 'N');


    printf("\n");
    system("pause");
    system("cls");
}

void Historico(){

    printf("\n H I S T O R I C O   D E   S A I D A S \n");
    printf("-------------------------------------------\n");

    if (contadorHistorico == 0) {
        printf("Nenhuma saída registrada.\n");
    } else {
        for (int i = 0; i < contadorHistorico; i++) {
            printf("Produto: %i | Nome: %s | Quantidade de SAIDA: %i\n",
                   historicoCodigo[i],
                   historicoProduto[i],
                   historicoQuantidade[i]);
        }
    }

    printf("\n");
    system("pause");
    system("cls");

}

void Relatorio() {
    printf("\n R E L A T O R I O   D E   E S T O Q U E \n");
    printf("----------------------------------------------\n");

    if (codigo == 0) {
        printf("Nenhum produto cadastrado.\n");
    } else {
        for (int i = 0; i < codigo; i++) {
            printf("Codigo: %i | Nome: %s | Quantidade: %i | Valor: RS %.2f\n",
                   i + 1, // Adiciona 1 para mostrar o código do produto corretamente
                   produto[i],
                   qtd[i],
                   valor[i]);
        }
    }

    printf("\n");
    system("pause");
    system("cls");

}

