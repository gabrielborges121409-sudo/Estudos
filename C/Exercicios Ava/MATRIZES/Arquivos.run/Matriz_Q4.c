/*
1- O total vendido por cada colaborador no mês
2- A média semanal de cada vendedor
3- O vendedor que teve a melhor semana individual (maior valor em
uma única célula)
4- A semana em que a empresa teve o maior faturamento total (soma
de todos os vendedores)
*/

#include <stdio.h>

#define colaboradores 4
#define semanas 4

int main() {
    int vendas[colaboradores][semanas];
    int total[colaboradores];
    float media[colaboradores];
    int melhorVendedor = 0, melhorSemana = 0;
    int maiorValor = 0;
    int faturamentoSemanal[semanas];
    int semanaMaiorFaturamento = 0;
    int maiorFaturamento = 0;
    

    // vendas semanais e colabordores. Maior valor, melhor vendedor, melhor semana e media em relação a colabordores
    for (int i = 0; i < colaboradores; i++) {
        total[i] = 0;
        for (int j = 0; j < semanas; j++) {
            printf("Digite o valor da semana %d do colaborador %d: ", j + 1, i + 1);
            scanf("%d", &vendas[i][j]);
            total[i] += vendas[i][j];

            if (vendas[i][j] > maiorValor) {
                maiorValor = vendas[i][j];
                melhorVendedor = i + 1;
                melhorSemana = j + 1;
            }
        }
        media[i] = total[i] / semanas;
    }


    // faturamento semnal
    for (int j = 0; j < semanas; j++) {
        faturamentoSemanal[j] = 0;
            for (int i = 0; i < colaboradores; i++) {
            faturamentoSemanal[j] += vendas[i][j];
        }

        if (faturamentoSemanal[j] > maiorFaturamento) {
            maiorFaturamento = faturamentoSemanal[j];
            semanaMaiorFaturamento = j + 1;
        }
    }


    // resutados
    printf("\nResultados:\n");
    for (int i = 0; i < colaboradores; i++) {
        printf("Colaborador %d -> Total: %d\nMedia semanal: %.2f\n", i + 1, total[i], media[i]);
    }

    printf("\nMelhor semana individual: colaborador %d, semana %d, valor %d\n" , melhorVendedor, melhorSemana, maiorValor);
    printf("Semana com maior faturamento total: semana %d, valor %d\n" , semanaMaiorFaturamento, maiorFaturamento);

    return 0;
}