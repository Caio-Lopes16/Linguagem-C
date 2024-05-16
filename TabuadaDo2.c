#include <stdio.h>

int main(){
//Declarar variáveis
int numero1, numero2, result, contador;
//Obter dados para as variáveis
printf("\nDigite um numero inteiro, que irei exibir a tabuada deste numero: ");
scanf("%i", &numero1);
printf("Digite um numero que voce quer que a tabuada va: ");
scanf("%i", &contador);
printf("============================");
numero2 = 0;
//Estrutura de repetição para exibir a tabuada
while(numero2 <= contador){
    result = numero1 * numero2;
    printf("\n      %i x %i = %i            |\n", numero1, numero2, result);
    numero2++;
}
printf("============================");



return 0;
}
