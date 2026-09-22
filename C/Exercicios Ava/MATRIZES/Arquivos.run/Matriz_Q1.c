#include <stdio.h>

#define turmas 4
#define alunos 5

int main(){

float peso[4][5];
float soma;
float media;
float maisPesado = 0.0;
int turmaMaisPesado = 0;
int alunoMaisPesado = 0;

for(int i = 0; i < turmas; i++){
    printf("===TURMA %d===\n" , i + 1);
        for(int j = 0; j < alunos; j++){
            printf("Digite o peso do aluno %d: " , j + 1);
                scanf("%f" , &peso[i][j]);

    if(peso[i][j] > maisPesado){
        maisPesado = peso[i][j];
        alunoMaisPesado = j;
        turmaMaisPesado = i;
        }
    }
}

for(int i = 0; i < turmas; i++){
    soma = 0;
        for(int j = 0; j < alunos; j++){
            soma += peso[i][j];
    }
            media = soma/alunos;
                printf("Media turma %d: %.2f\n" , i + 1 , media);
}
    
    printf("Aluno mais pesado:\nAluno %d, turma %d" , alunoMaisPesado + 1, turmaMaisPesado + 1);

return 0;
}