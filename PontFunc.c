#include <stdio.h>
#include <stdlib.h>

int main(){

int funcionarios, nov, dez, jan, funcmaior;
float media, pontos, maiormedia, salario, salariotot;

funcionarios = 1;
funcmaior = 0;
maiormedia = 0;
salario = 2600;

while (funcionarios <= 15){
    printf("\n\nDIGITE A PONTUACAO DO FUNCIONARIO %i NO MES DE NOVEMBRO: ", funcionarios);
    scanf("%i", &nov);

    if(nov>=1 && nov<=3){
        salario=(salario*0.05)+salario;
    }
    else if(nov>=4 && nov<=6){
        salario=(salario*0.10)+salario;
    }
    else if(nov>=7 && nov<=10){
        salario=(salario*0.15)+salario;
    }
    printf("SALARIO RS%.2f", salario);
    salariotot = salariotot + salario;

    salario = 2600;


    printf("\n\nDIGITE A PONTUACAO DO FUNCIONARIO %i NO MES DE DEZEMBRO: ", funcionarios);
    scanf("%i", &dez);
    if(dez>=1 && dez<=3){
        salario=(salario*0.05)+salario;
    }
    else if(dez>=4 && dez<=6){
        salario=(salario*0.10)+salario;
    }
    else  if(dez>=7 && dez<=10){
        salario=(salario*0.15)+salario;
    }
    printf("SALARIO RS%.2f", salario);
    salariotot = salariotot + salario;

    salario = 2600;

    printf("\n\nDIGITE A PONTUACAO DO FUNCIONARIO %i NO MES DE JANEIRO: ", funcionarios);
    scanf("%i", &jan);
    if(jan>=1 && jan<=3){
        salario=(salario*0.05)+salario;
    }
    else if(jan >= 4 && jan <= 6){
        salario=(salario*0.10)+salario;
    }
    else if(jan>=7 && jan<=10){
        salario=(salario*0.15)+salario;
    }
    printf("SALARIO RS%.2f\n\n", salario);
    salariotot = salariotot + salario;
    salario = 2600;

    pontos = nov + dez + jan;
    media = (pontos/3);

    if (maiormedia < media){
        maiormedia = media;
        funcmaior = funcionarios;
    }

    system("pause");
    system("cls");
    printf("\n\n--------------------------------------------------------------");
    printf("\n\nO FUNCIONARIO %i TEVE UMA PONTUACAO TOTAL DE: %.2f ", funcionarios, pontos);
    printf("\nE UMA MEDIA DE: %.2f", media);
    printf("\nE UM SALARIO TOTAL DE RS%.2f", salariotot);
    printf("\n\n--------------------------------------------------------------\n\n");
    system("pause");
    system("cls");
    nov = 0;
    dez = 0;
    jan = 0;
    pontos = 0;
    media = 0;
    salariotot = 0;
    funcionarios++;
}

system("pause");
system("cls");
printf("\n\n---------------------------------------------------------------------");
printf("\n\nO FUNCIONARIO COM A MAIOR MEDIA FOI O FUNCIONARIO %i E SUA MEDIA FOI DE: %.2f", funcmaior, maiormedia);
printf("\n\n---------------------------------------------------------------------");

return 0;
}
