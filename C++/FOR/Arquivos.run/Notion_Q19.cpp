/*
Uma pesquisa de satisfação foi realizada com 40 clientes de uma loja, pedindo que avaliassem o atendimento como: 

Péssimo = 1; 

Regular = 2; 

Bom = 3; 

Excelente = 4.

Faça um programa que leia a avaliação e a idade dos clientes. 

Exiba: 

A média de idade dos clientes que avaliaram como "excelente";

O total de clientes que avaliaram como "péssimo";

A porcentagem de clientes que avaliaram como "bom" em relação ao total.
*/

#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int avaliacao;
    int idade;
    int totalPessimo = 0;
    int totalRegular = 0;
    int totalBom = 0;
    int totalExcelente = 0;
    int somaIdadeExcelente = 0;
    double mediaIdadeExcelente = 0.0;
    double porcentagemBom = 0.0;

    for (int i = 0; i < 40; ++i) {
        std::cout << "Cliente " << (i + 1) << " - Digite a avaliação: \n1-Péssimo \n2-Regular \n3-Bom \n4-Excelente\nR: ";
        std::cin >> avaliacao;
        std::cout << "Digite a idade do cliente: ";
        std::cin >> idade;

        switch (avaliacao) {
            case 1:
                totalPessimo++;
                break;
            case 2:
                totalRegular++;
                break;
            case 3:
                totalBom++;
                break;
            case 4:
                totalExcelente++;
                somaIdadeExcelente += idade;
                break;
            default:
                std::cout << "Avaliação inválida. Digite um valor entre 1 e 4." << std::endl;
                i--; // Decrementa para repetir a entrada para este cliente
                continue;
        }
    }

    mediaIdadeExcelente = (totalExcelente > 0) ? static_cast<double>(somaIdadeExcelente) / totalExcelente : 0.0;
    porcentagemBom = (static_cast<double>(totalBom) / 40.0) * 100.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nMédia de idade dos clientes que avaliaram como 'excelente': " << mediaIdadeExcelente << " anos" << std::endl;
    std::cout << "Total de clientes que avaliaram como 'péssimo': " << totalPessimo << std::endl;
    std::cout << "Total de clientes que avaliaram como 'regular': " << totalRegular << std::endl;
    std::cout << "Total de clientes que avaliaram como 'bom': " << totalBom << std::endl;
    std::cout << "Total de clientes que avaliaram como 'excelente': " << totalExcelente << std::endl;
    std::cout << "Porcentagem de clientes que avaliaram como 'bom': " << porcentagemBom << "%" << std::endl;

    return 0;
}