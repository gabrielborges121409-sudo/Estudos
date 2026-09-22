/*
Leia uma matriz 4x4 de inteiros e exiba a transposta (linhas viram colunas
e colunas viram linhas.
Dica: o elemento da posição [i][j] vai estar na posição [j][i].
*/

#include <stdio.h>

#define colunas 4
#define linhas 4

int main(){

    int valores[4][4];

for(int i = 0; i < colunas; i++){
    printf("\n===VALORES COLUNA %d===\n" , i + 1);
        for(int j = 0; j < linhas; j++){
            printf("Digite um numero para linha %d: " , j + 1);
            scanf("%d" , &valores[i][j]);
    }
}

for(int j = 0; j < linhas; j++){
    printf("\n===VALORES LINHA %d===\n" , j + 1);
        for(int i = 0; i < linhas; i++){
            printf("Valor coluna %d: %d\n" , i + 1 , valores[i][j]);
    }
}

return 0;
}