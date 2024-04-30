#include <stdio.h>

int main(){
float distancia;
float litros;

printf("\n- Digite a distancia percorrida por um veiculo (em Km): ");
scanf("%f", &distancia);
printf("\n- Digite o consumo em litros: ");
scanf("%f", &litros);

printf("\n VALOR GASTO MEDIO DE COMBUSTIVEL: \n");
printf("\n- A quantidade de quilometros por litro e: %.2f\n", distancia/litros);

return 0;
}



