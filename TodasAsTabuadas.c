#include <stdio.h>
#include <stdlib.h>
int main(){

int numero1, numero2, result, qtd;
numero1 = 1;
numero2 = 0;
qtd = 0;
while(numero1 <= 10){
    printf("\n  T A B U A D A   D O   %i:\n", numero1);
    while (numero2 <= 10){
        result = numero1 * numero2;
        printf("\n      %i x %i = %i\n", numero1, numero2, result);
        numero2++;
        qtd++;
        if (qtd == 10){
        system("pause");
        system("cls");
        qtd = 0;
    }
    }
    numero1++;
    numero2 = 0;
    printf("\n\n");
}

return 0;
}

