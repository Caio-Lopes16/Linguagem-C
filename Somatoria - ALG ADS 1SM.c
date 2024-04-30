//Algoritmo e Lógica de Programação | ADS 1ºSM
//Integrantes do grupo:
//MATOS, Kaynan
//PELIÇARI, Vinicius
//PIMENTA, Caio
//ROCHA, Vitor
//SANTOS, Breno
//SANTOS, Erick

#include <stdio.h>

int main(){

int numero1, numero2, numero3;
int soma;
float media;

printf("\n                 SOMATORIA:\n");
printf("\nDigite um valor para o primeiro numero inteiro: ");
scanf("%i", &numero1);
printf("\nDigite um valor para o segundo numero inteiro: ");
scanf("%i", &numero2);
printf("\nDigite um valor para o terceiro numero inteiro: ");
scanf("%i", &numero3);

soma = numero1 + numero2 + numero3;
media = (float)soma / 3;

printf("\n\nA soma entre esses tres numeros e: %i", soma);
printf("\nA media entre esses tres numeros e: %.2f\n\n", media);

return 0;
}
