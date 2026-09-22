/*
 Um professor registrou as notas de 35 alunos em uma prova.
Faça um algoritmo que leia o nome e a nota de cada aluno, informe 
a média geral da turma e conte quantos alunos tiveram nota acima de 7.
*/

#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    const int NUM_ALUNOS = 35;
    std::string nomes[NUM_ALUNOS];
    float notas[NUM_ALUNOS];
    float somaNotas = 0.0;
    int alunosAcimaDe7 = 0;
    float mediaGeral = 0.0;
    
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        std::cout << "Digite o nome do aluno " << (i + 1) << ": ";
        std::getline(std::cin, nomes[i]);
        std::cout << "Digite a nota do aluno " << (i + 1) << ": ";
        std::cin >> notas[i];
        std::cin.ignore(); // Limpar o buffer do teclado

        somaNotas += notas[i];

        if (notas[i] > 7.0) {
            alunosAcimaDe7++;
        }
    }

    mediaGeral = somaNotas / NUM_ALUNOS;

    std::cout << "\nMédia geral da turma: " << mediaGeral << std::endl;
    std::cout << "Quantidade de alunos com nota acima de 7: " << alunosAcimaDe7 << std::endl;

    return 0;
}