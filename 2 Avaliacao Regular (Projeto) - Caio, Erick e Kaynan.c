/*
    Nome dos integrantes do grupo:

        Caio Lopes Pimenta
        Erick Cezar dos Santos
        Kaynan Lima de Matos

*/

///Incluindo bibliotecas necessárias para fazer o programa

#include <stdio.h>
#include <stdlib.h>

///Função principal do programa

int main(){

///Declarando todas as variáveis necessárias

int disc1, disc2, contador1, contador2, alunos, cont, qtdaprovados1, qtdaprovados2, qtdreprovados1, qtdreprovados2, qtdaprovadosdisc, qtdreprovadosdisc, qtdreprovadosgeral, qtdaprovadosgeral;
float nota1, nota2, media, mediadisc, mediacurso1, mediacurso2, mediageral;

///Atribuindo valores iniciais às variáveis

contador1 = 1;
contador2 = 1;
cont = 1;
qtdaprovados1 = 0;
qtdreprovados1 = 0;
qtdaprovados2 = 0;
qtdreprovados2 = 0;
qtdaprovadosgeral = 0;
qtdreprovadosgeral = 0;
qtdaprovadosdisc = 0;
qtdreprovadosdisc = 0;
mediadisc = 0;
mediacurso1 = 0;
mediacurso2 = 0;
mediageral = 0;

///Coletando dados do usuário, quantidade de disciplinas do curso 1 e do curso 2

printf("===================================\n");
printf("          FACULDADE TECFA    \n");
printf("===================================\n\n");

printf("A faculdade Tecfa apresenta dois cursos, digite a quantidade de disciplinas do primeiro curso: ");
scanf("%i", &disc1);
printf("\nAgora, digite a quantidade de disciplinas do segundo curso: ");
scanf("%i", &disc2);
system("pause");
system("cls");
printf("===================================\n");
printf("          FACULDADE TECFA    \n");
printf("===================================\n\n");

///Criando uma condição While, com a variável "contador1" para passar por todas as disciplinas que o usuário escolheu.

while (contador1 <= disc1){
    printf("\nDigite agora, o numero de alunos da disciplina %i do curso 1: ", contador1);
    scanf("%i", &alunos);
    mediadisc = 0;

    ///Após ler a quantidade de alunos por disciplina, ler a nota da avaliação 1 e 2 de cada aluno.

    while (cont <= alunos){
        printf("\nDigite a nota da primeira avaliacao do aluno %i: ", cont);
        scanf("%f", &nota1);
        printf("\nDigite a nota da segunda avaliacao do aluno %i: ", cont);
        scanf("%f", &nota2);
        media = ((nota1 + nota2)/2);

    ///Assim que ler a nota 1 e 2, exibir a media e dizer se o aluno foi reprovado ou não, além de guardar a quantidade de aprovados ou reprovados

        if (media >= 6){
            printf("\n===========================\n");
            printf(" APROVADO com media: %.2f\n", media);
            printf("===========================\n");
            system("pause");
            system("cls");
            qtdaprovados1 = qtdaprovados1 + 1;
            qtdaprovadosdisc = qtdaprovadosdisc + 1;
        }
        else {
            printf("\n===========================\n");
            printf(" REPROVADO com media %.2f\n", media);
            printf("===========================\n");
            system("pause");
            system("cls");
            qtdreprovados1 = qtdreprovados1 + 1;
            qtdreprovadosdisc = qtdreprovadosdisc + 1;
        }
        cont = cont + 1;
        printf("===================================\n");
        printf("          FACULDADE TECFA    \n");
        printf("===================================\n\n");

        ///Variável para ir guardando as medias, para no final calcular a media da disciplina.

        mediadisc = media + mediadisc;
    }

    ///Calculo da media da disciplina, e variável "mediacurso1", para ir guardando as médias das disciplinas, para no final calcular a média do curso 1.

    mediadisc = mediadisc/alunos;
    printf("\nA media de notas da disciplina %i e : %.2f\n", contador1, mediadisc);
    printf("\n----------------------------------------------------");
    printf("\nAPROVADOS da DISCIPLINA %i: %i", contador1, qtdaprovadosdisc);
    printf("\n----------------------------------------------------");
    printf("\nREPROVADOS da DISCIPLINA %i: %i", contador1, qtdreprovadosdisc);
    printf("\n----------------------------------------------------\n\n");
    system("pause");
    system("cls");
    printf("===================================\n");
    printf("          FACULDADE TECFA    \n");
    printf("===================================\n\n");
    mediacurso1 = mediacurso1 + mediadisc;
    contador1 = contador1 + 1;
    qtdaprovadosdisc = 0;
    qtdreprovadosdisc = 0;
    cont = 1;
    alunos = 0;


}

///Calculo da média do curso 1 fim da condição While "principal".

mediacurso1 = mediacurso1/disc1;
printf("\nA media de notas do curso 1 e: %.2f\n", mediacurso1);
printf("\n----------------------------------------------------");
printf("\nA quantidade total de alunos APROVADOS e: %i", qtdaprovados1);
printf("\n----------------------------------------------------");
printf("\nA quantidade total de alunos REPROVADOS e: %i", qtdreprovados1);
printf("\n----------------------------------------------------\n\n");
system("pause");
system("cls");

printf("===================================\n");
printf("          FACULDADE TECFA    \n");
printf("===================================\n\n");

///Dentro deste While, contém exatamente a mesma lógica dos processos anteriores, porém com algumas variáveis adaptadas para o curso 2, para assim, ter uma organização melhor.

while (contador2 <= disc2){
    printf("\nDigite agora, o numero de alunos da disciplina %i do curso 2: ", contador2);
    scanf("%i", &alunos);
    mediadisc = 0;
    while (cont <= alunos){
        printf("\nDigite a nota da primeira avaliacao do aluno %i: ", cont);
        scanf("%f", &nota1);
        printf("\nDigite a nota da segunda avaliacao do aluno %i: ", cont);
        scanf("%f", &nota2);
        media = ((nota1 + nota2)/2);
        if (media >= 6){
            printf("\n===========================\n");
            printf(" APROVADO com media: %.2f\n", media);
            printf("===========================\n");
            system("pause");
            system("cls");
            qtdaprovados2 = qtdaprovados2 + 1;
            qtdaprovadosdisc = qtdaprovadosdisc + 1;
        }
        else {
            printf("\n===========================\n");
            printf(" REPROVADO com media %.2f\n", media);
            printf("===========================\n");
            system("pause");
            system("cls");
            qtdreprovados2 = qtdreprovados2 + 1;
            qtdreprovadosdisc = qtdreprovadosdisc + 1;
        }

        cont = cont + 1;
        printf("===================================\n");
        printf("          FACULDADE TECFA    \n");
        printf("===================================\n\n");
        mediadisc = media + mediadisc;
    }
    mediadisc = mediadisc/alunos;
    printf("\nA media de notas da disciplina %i e : %.2f\n\n", contador2, mediadisc);
    printf("\n----------------------------------------------------");
    printf("\nAPROVADOS da DISCIPLINA %i: %i", contador2, qtdaprovadosdisc);
    printf("\n----------------------------------------------------");
    printf("\nREPROVADOS da DISCIPLINA %i: %i", contador2, qtdreprovadosdisc);
    printf("\n----------------------------------------------------\n\n");
    system("pause");
    system("cls");
    printf("===================================\n");
    printf("          FACULDADE TECFA    \n");
    printf("===================================\n\n");
    mediacurso2 = mediacurso2 + mediadisc;
    contador2 = contador2 + 1;
    qtdaprovadosdisc = 0;
    qtdreprovadosdisc = 0;
    cont = 1;
    alunos = 0;

}
mediacurso2 = mediacurso2/disc2;
printf("\nA media de notas do curso 2 e: %.2f\n", mediacurso2);
printf("\n----------------------------------------------------");
printf("\nA quantidade total de alunos APROVADOS e: %i", qtdaprovados2);
printf("\n----------------------------------------------------");
printf("\nA quantidade total de alunos REPROVADOS e: %i", qtdreprovados2);
printf("\n----------------------------------------------------\n\n");
system("pause");
system("cls");


printf("===================================\n");
printf("          FACULDADE TECFA    \n");
printf("===================================\n\n");

///Calculo e exibição dos alunos reprovados e aprovados dos dois cursos

qtdaprovadosgeral = qtdaprovados1 + qtdaprovados2;
qtdreprovadosgeral = qtdreprovados1 + qtdreprovados2;
printf("\n----------------------------------------------------");
printf("\nA quantidade TOTAL de alunos APROVADOS e: %i", qtdaprovadosgeral);
printf("\n----------------------------------------------------");
printf("\nA quantidade TOTAL de alunos REPROVADOS e: %i", qtdreprovadosgeral);
printf("\n----------------------------------------------------\n");

///Calculo da média geral da Tecfa

mediageral = (mediacurso1+mediacurso2)/2;
printf("\n\nA media GERAL da Tecfa e: %.2f\n", mediageral);
printf("----------------------------------------------------\n");

return 0;
}
