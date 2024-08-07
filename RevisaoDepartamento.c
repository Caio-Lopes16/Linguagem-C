#include <stdio.h>
#include <stdlib.h>

int main(){

int funcionario, departamento, functotal, tempcasa, maiorcasa, funcionariomaior, departamentosalario, funcionariosalario, funcionariomenor;
float salario, salariocasa, salariototal, salariomaior, salariomenor;

maiorcasa = 0;
departamento = 1;
funcionario = 1;
salariomenor = 999999999;

while (departamento < 3){
    printf("\nDIGITE A QUANTIDADE DE FUNCIONARIOS DO DEPARTAMENTO %i: ", departamento);
    scanf("%i", &functotal);
    while(funcionario <= functotal){
        printf("\nDIGITE O TEMPO DE CASA DO FUNCIONARIO %i DO DEPARTAMENTO %i: ", funcionario, departamento);
        scanf("%i", &tempcasa);
        printf("\nDIGITE O SALARIO DO FUNCIONARIO %i DO DEPARTAMENTO %i: ", funcionario, departamento);
        scanf("%f", &salario);
        salariototal = salariototal + salario;
        if (maiorcasa < tempcasa){
            salariocasa = salario;
            maiorcasa = tempcasa;
            funcionariomaior = funcionario;
        }
        if (salario > salariomaior){
            salariomaior = salario;
            funcionariosalario = funcionario;
            departamentosalario = departamento;
        }
        if (salario < salariomenor){
            salariomenor = salario;
            funcionariomenor = funcionario;
        }
        funcionario++;
    }
    printf("\nO SALARIO TOTAL DO DEPARTAMENTO %i E: %.2f", departamento, salariototal);
    printf("\nO FUNCIONARIO %i, FOI O FUNCIONARIO COM O MAIOR TEMPO DE CASA SENDO %i, E O SEU SALARIO SENDO %.2f", funcionariomaior, maiorcasa, salariocasa);
    printf("\n\nO MAIOR SALARIO FOI DO FUNCIONARIO %i, SENDO DE %.2f\n", funcionariosalario, salariomaior);
    printf("\nO MENOR SALARIO FOI DO FUNCIONARIO %i, SENDO DE %.2f\n\n", funcionariomenor, salariomenor);
    system("pause");
    system("cls");
    salariomaior = 0;
    salariomenor = 9999999;
    funcionariomaior = 0;
    funcionariosalario = 0;
    funcionariomenor = 0;
    salariototal = 0;
    departamento++;

}


return 0;
}

