/*
Escrever um algoritmo que leia o nome e o sexo 
de 56 pessoas e informe o nome e se ela é homem ou mulher.

No final informe total de homens e de mulheres.
*/

#include <iostream>
#include <string>

int main() {
    const int totalPessoas = 56;
    std::string nome;
    char sexo;
    int totalHomens = 0;
    int totalMulheres = 0;

    for (int i = 0; i < totalPessoas; ++i) {
        std::cout << "Digite o nome da pessoa " << (i + 1) << ": ";
        std::getline(std::cin, nome);
        
        std::cout << "Digite o sexo da pessoa (M/F): ";
        std::cin >> sexo;
        std::cin.ignore();

        if (sexo == 'M' || sexo == 'm') {
            std::cout << nome << " é homem." << std::endl;
            totalHomens++;
        } else if (sexo == 'F' || sexo == 'f') {
            std::cout << nome << " é mulher." << std::endl;
            totalMulheres++;
        } else {
            std::cout << "Sexo inválido. Por favor, digite M ou F." << std::endl;
            i--; 
        }
    }

    std::cout << "Total de homens: " << totalHomens << std::endl;
    std::cout << "Total de mulheres: " << totalMulheres << std::endl;

    return 0;
}