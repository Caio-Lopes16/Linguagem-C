#include <stdio.h>

int main(){
int numero1;
int numero2;
int resto;

printf("Digite um numero INTEIRO qualquer: ");
scanf("%i", &numero1);
printf("Digite outro numero INTEIRO qualquer: ");
scanf("%i", &numero2);
printf("\nRESULTADO DAS CINCO OPERACOES ARITMETICAS: \n");
printf("\n- A soma entre esses dois numeros e: %i", numero1+numero2);
printf("\n- A subtracao entre esses dois numeros e: %i", numero1-numero2);
printf("\n- A divisao do primeiro numero pelo segundo numero e: %i", numero1/numero2);
printf("\n- A multiplicacao entre esses dois numeros e: %i", numero1*numero2);
resto = numero1 || numero2;
printf("\n- O resto entre o primeiro numero e o segundo numero e: %i", resto);
printf("\n");

return 0;
}
