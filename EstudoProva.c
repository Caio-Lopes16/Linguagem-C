#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main (){

int idade, func, salarioinferior, idadecontador, homens, mulher;
char sexo;
float salario, idademedia;

salarioinferior = 0;
idademedia = 0;
idadecontador = 0;
homens = 0;
mulher = 0;

printf("Qual a quantidade de funcionarios deseja: \n>");
scanf("%i", &func);

int i = 0;
while(i < func){

    printf("\n\nQual a idade do funcionario %i: \n>", i + 1);
    scanf("%i", &idade);

    do{
        printf("\nQual o sexo do funcionario %i [M/F]", i + 1);
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

    }while(sexo != 'M' && sexo != 'F');

    printf("\nQual o salario do funcionario %i: \nRS", i + 1);
    scanf("%f", &salario);


    if(salario < 2000){
        salarioinferior = salarioinferior + 1;
    }

    if(salario >4700){
        idademedia = idade + idademedia;
        idadecontador = idadecontador + 1;
    }

    if(sexo == 'M'){
        homens = homens + 1;
    }

    if(sexo == 'F'){
        mulher = mulher + 1;
    }

idade = 0;
salario = 0;
i++;
}

system("pause");
system("cls");
printf("\nPESSOAS COM SALARIO INFERIOR A 2000 : %i", salarioinferior);
idademedia = idademedia/idadecontador;
printf("\nMEDIA DA IDADE DAS PESSOAS COM SALARIO SUPERIOR A 4700: %.2f", idademedia);
printf("\nQUANTIDADE DE HOMENS: %i", homens);
printf("\nQUANTIDADE DE MULHERES: %i", mulher);

return 0;
}
