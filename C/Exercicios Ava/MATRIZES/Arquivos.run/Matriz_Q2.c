/*
Crie uma matriz 3x3 e leia seus valores. Exiba:
1- A matriz formatada como tabela (use tab para alinhar)
2- A soma de todos os elementos
3- A soma somente da diagonal principal (posição onde
linha==coluna)
*/

#include <stdio.h>

#define linha 3
#define coluna 3

int main(){

float valores[3][3];
float soma;
float somaDiagonal;

for(int i = 0; i < coluna; i++){
    printf("===VALOR COLUNA %d===\n" , i + 1);
        for(int j = 0; j < linha; j++){
            printf("Digite um valor para a linha %d: " , j + 1);
                scanf("%f" , &valores[i][j]);
    }
}

for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            soma += valores[i][j];

        if(i == j){
            somaDiagonal += valores[i][j];
        }
    }
}

    printf("\nSoma de todos os valores: %.2f" , soma);
    printf("\nSoma dos valores da diagonal principal: %.2f\n" , somaDiagonal);

return 0;
}