#include <stdio.h>
#include <stdlib.h>

int main(){

int jogadores, i, idade, infdezoito, idtot;
float peso, altura, medid, alturatot, alturamed, menoroit, percent;

jogadores =1;
infdezoito = 0;

for(int i=1; i<=5; i++){
    for(int jogadores=1; jogadores<=5; jogadores++){
        printf("\nDIGITE A IDADE DO JOGADOR %i DO TIME %i\n> ", jogadores, i);
        scanf("%i", &idade);
        printf("DIGITE O PESO DO JOGADOR %i DO TIME %i\n> ", jogadores, i);
        scanf("%f", &peso);
        printf("DIGITE A ALTURA DO JOGADOR %i DO TIME %i\n> ", jogadores, i);
        scanf("%f", &altura);

        if(idade<18){
            infdezoito++;
        }
        idtot = idade + idtot;
        alturatot = altura + alturatot;

        if(peso>80){
            menoroit = peso + menoroit;
        }
    }
    system("pause");
    system("cls");
    medid = idtot/5;
    printf("A MEDIA DE IDADE DO TIME %i E: %.2f\n\n", i, medid);
    medid=0;
    idtot = 0;
}

system("pause");
system("cls");

percent = (menoroit/25)*100;
alturamed = alturatot/25;

printf("\n\nPESSOAS COM IDADE INFERIOR A 18 ANOS: %i", infdezoito);
printf("\nA MEDIA DA ALTURA DE TODOS OS JOGADORES E: %.2f", alturamed);
printf("\nA PERCENTAGEM DE JOGADORES COM MAIS DE 80kg E: %.2f\n\n", percent);

return 0;
}
