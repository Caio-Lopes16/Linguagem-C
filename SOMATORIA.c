#include <stdio.h>

int main(){
    int inicio, fim, i, soma = 0, contador = 0;
    float media;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    for (i = inicio; i <= fim; i++) {
        soma += i;
        contador++;
    }

    media = (float)soma / contador;

    printf("A somatoria dos numeros no intervalo e: %i\n", soma);
    printf("A media dos numeros no intervalo e: %.2f\n", media);

    return 0;

}
