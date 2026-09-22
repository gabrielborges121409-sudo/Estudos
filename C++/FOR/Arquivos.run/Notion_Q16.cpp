/*
16 - Faça um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados: 

Valor dos juros;

Quantidade de parcelas;


Exemplo de saída: 

R$ 1.000 (0 juros / 1 parc = R$ 1.000,00);

R$ 1.100 (100 juros / 3 parc = R$ 366,00);

R$ 1.150 (150 juros / 6 parc = R$ 191,67).
*/

#include <iostream>
#include <iomanip>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float valorDivida;
    float juros;
    float valorTotal;
    float valorParcela;
    int quantidadeParcelas;
    int escolha;


    
for(;;){

        std::cout << "Tabela de Parcelamento de Dívida" << std::endl;
        std::cout << "\n--------------------------------\n" << std::endl;   
        std::cout << "Digite o valor da dívida: ";
        std::cin >> valorDivida;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nValor da Dívida: R$ " << valorDivida << "\n";
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Quantidade de Parcelas | Valor dos Juros | Valor da Parcela" << std::endl;
        std::cout << "--------------------------------" << std::endl;
        std::cout << "1 parcela   (0% de juros)  | R$ 0,00 | R$ " << valorDivida << std::endl;
        std::cout << "3 parcelas  (10% de juros) | R$ " << valorDivida * 0.10 << " | R$ " << (valorDivida * 1.10) / 3 << std::endl;
        std::cout << "6 parcelas  (15% de juros) | R$ " << valorDivida * 0.15 << " | R$ " << (valorDivida * 1.15) / 6 << std::endl;
        std::cout << "9 parcelas  (20% de juros) | R$ " << valorDivida * 0.20 << " | R$ " << (valorDivida * 1.20) / 9 << std::endl;
        std::cout << "12 parcelas (25% de juros) | R$ " << valorDivida * 0.25 << " | R$ " << (valorDivida * 1.25) / 12 << std::endl;
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Será feito em quantas parcelas? ";
        std::cin >> quantidadeParcelas;

 if(valorDivida <= 0){
            std::cout << "\nValor inválido. Digite um valor maior que zero." << std::endl;
        break;
        }

        switch(quantidadeParcelas){
            case 1:
                juros = 0.0;
                break;
            case 3:
                juros = 0.10;
                break;
            case 6:
                juros = 0.15;
                break;
            case 9:
                juros = 0.20;
                break;
            case 12:
                juros = 0.25;
                break;
            default:
                juros = -1.0;
                break;
        }

        if (juros < 0.0) {
            std::cout << "\nQuantidade de parcelas inválida. Digite um valor entre 1 e 12." << "\n\n";
            continue;
        } 
            
        valorTotal = valorDivida * (1.0 + juros);
        valorParcela = valorTotal / quantidadeParcelas;

        std::cout << "\nValor da Dívida: R$ " << valorTotal << " (" << static_cast<int>(juros * 100) << "% de juros / " << quantidadeParcelas << " parcela" << (quantidadeParcelas > 1 ? "s" : "") << " = R$ " << valorParcela << ")" << "\n\n";

        std::cout << "\nTabela de Parcelamento de Dívida Final" << std::endl;
        std::cout << "--------------------------------" << std::endl;

          
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Valor da Dívida Original: R$ " << valorDivida << "\n";
        std::cout << "Juros aplicados: " << static_cast<int>(juros * 100) << "%\n";
        std::cout << "Quantidade de parcelas: " << quantidadeParcelas << "\n";
        std::cout << "Valor total com juros: R$ " << valorTotal << "\n";
        std::cout << "Valor de cada parcela: R$ " << valorParcela << std::endl;

        std::cout << "\nPrograma encerrado.\n\n" << std::endl;
        break;
        
    }    
return 0;
}